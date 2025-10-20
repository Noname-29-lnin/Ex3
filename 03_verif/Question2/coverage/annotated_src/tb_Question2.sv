//      // verilator_coverage annotation
        `timescale 1ns/1ps
        module tb_Question2();
        
        parameter SIZE_DATA = 24;
        parameter SIZE_LOP  = 5;
        
%000001 int test_count = 0;
%000001 int test_pass  = 0;
        
%000001 logic i_clk, i_rst_n;
%000002 logic [SIZE_DATA-1:0] i_addr;
 000376 logic [SIZE_DATA-1:0] i_data;
%000000 logic [SIZE_DATA-1:0] o_addr;  
 000282 logic [SIZE_LOP-1:0]  o_one_position;
%000002 logic                 o_zero_flag;
        
 003072 function automatic logic [SIZE_LOP-1:0] Test_LOPD(
            input logic [SIZE_DATA-1:0]     f_i_data
        );
            logic [SIZE_DATA-1:0] t_temp;
            int cnt_position_1;
 003072     begin
 003072         t_temp = f_i_data;
 003072         cnt_position_1 = 0;
        
%000000         if(t_temp == 0) begin
%000000             Test_LOPD = '0;
 003072         end else begin
 019365             while (t_temp[SIZE_DATA-1] == 0) begin
 019365                 t_temp = t_temp << 1;
 019365                 cnt_position_1 ++;
                    end
 003072             Test_LOPD = SIZE_DATA - cnt_position_1 - 1;
                end
            end
        
        endfunction
        
        //===================== DUT =====================//
        // Question2_unit #(
        //     .SIZE_DATA (SIZE_DATA),
        //     .SIZE_LOP  (SIZE_LOP)
        // ) DUT (
        //     .i_clk          (i_clk),
        //     .i_rst_n        (i_rst_n),
        //     .i_addr         (i_addr),
        //     .i_data         (i_data),
        //     .o_addr         (o_addr),
        //     .o_one_position (o_one_position),
        //     .o_zero_flag    (o_zero_flag)
        // );
        Question2 #(
            .SIZE_DATA (SIZE_DATA),
            .SIZE_LOPD  (SIZE_LOP)
        ) DUT (
            .i_data         (i_data),
            .o_one_position (o_one_position),
            .o_zero_flag    (o_zero_flag)
        );
        // scoreboard #(
        //     .SIZE_DATA  (5)
        // ) SCOREBOARD_UNIT (
        //     .is_finish       (),
        //     .i_expect_data   (),
        //     .i_data_out      () 
        // );
        
        //===================== CLOCK =====================//
%000000 initial begin
%000000     i_clk = 0;
 002076     forever #5 i_clk = ~i_clk; // 10ns period = 100MHz
        end
        
        //===================== DUMP WAVE =====================//
%000001 initial begin
%000001     $dumpfile("tb_Question2.vcd");
%000001     $dumpvars(0, tb_Question2);
        end
        int bit_pos;
        //===================== TEST SEQUENCE =====================//
%000001 initial begin
%000001     i_rst_n = 0;
%000001     i_addr  = '0;
%000001     i_data  = '0;
        
            // Reset phase
%000001     #20;
%000001     i_rst_n = 1;
%000001     #10;
        
            // Random test 100 lần
%000001     bit_pos = 1;
%000001     repeat (24) begin
 000024         @(posedge i_clk);
 000024         #1;
 000024         i_addr = i_addr + 1;
 000024         i_data  = bit_pos;
 000024         #5;
 000024         $display("=> i_data = %b (%d) \t| o_one_position = %b (%d) \t| o_zero_flag = %b", i_data, i_data, o_one_position, o_one_position, o_zero_flag);
 000024         $display("[TIME: %5t] [%s] - %4s: Expect: %8h, DUT: %8h ", $time, "Direcly", (Test_LOPD(i_data) == o_one_position) ? "PASS" : "FAIL", o_one_position, Test_LOPD(i_data));
 000024         test_count = test_count + 1;
 000024         test_pass  = (Test_LOPD(i_data) == o_one_position) ? test_pass + 1 : test_pass;
                // @(posedge i_clk);
 000024         bit_pos = bit_pos << 1'b1;
            end
%000001     repeat (1000) begin
 001000         @(posedge i_clk);
 001000         #1;
 001000         bit_pos = $urandom_range(0, SIZE_DATA-1);
 001000         i_data = 24'b1 << bit_pos;
 000486         if ($urandom_range(0, 1)) begin
 000486             i_data |= $urandom_range(0, (1 << SIZE_DATA) - 1);
                end
 001000         #5;
 001000         $display("=> i_data = %b (%d) \t| o_one_position = %b (%d) \t| o_zero_flag = %b", i_data, i_data, o_one_position, o_one_position, o_zero_flag);
 001000         $display("[TIME: %5t] [%s] - %4s: Expect: %8h, DUT: %8h ", $time, "Randome", (Test_LOPD(i_data) == o_one_position) ? "PASS" : "FAIL", o_one_position, Test_LOPD(i_data));
 001000         test_count = test_count + 1;
 001000         test_pass  = (Test_LOPD(i_data) == o_one_position) ? test_pass + 1 : test_pass;
 001000         i_addr = i_addr + 1;
            end
        
%000001     #10;
%000001     $display("\n================================");
%000001     $display("==========TEST SUMMARY==========");
%000001     $display("Total test cases: %6d    ", test_count);
%000001     $display("Passed          : %6d    ", test_pass);
%000001     $display("Failed          : %6d    ", test_count - test_pass);
%000001     $display("Pass rate       : %0.2f%%", (test_pass * 100.0) / (test_count));
%000001     $display("================================");
%000001     #100;
        
%000001     $finish;
        end
        
        endmodule
        
