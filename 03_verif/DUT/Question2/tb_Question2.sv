`timescale 1ns/1ps
module tb_Question2();

parameter SIZE_DATA = 24;
parameter SIZE_LOP  = 5;

int test_count = 0;
int test_pass  = 0;

logic i_clk, i_rst_n;
logic [SIZE_DATA-1:0] i_addr;
logic [SIZE_DATA-1:0] i_data;
logic [SIZE_DATA-1:0] o_addr;  
logic [SIZE_LOP-1:0]  o_one_position;
logic                 o_zero_flag;

function automatic logic [SIZE_LOP-1:0] Test_LOPD(
    input logic [SIZE_DATA-1:0]     f_i_data
);
    logic [SIZE_DATA-1:0] t_temp;
    int cnt_position_1;
    begin
        t_temp = f_i_data;
        cnt_position_1 = 0;

        if(t_temp == 0) begin
            Test_LOPD = '0;
        end else begin
            while (t_temp[SIZE_DATA-1] == 0) begin
                t_temp = t_temp << 1;
                cnt_position_1 ++;
            end
            Test_LOPD = SIZE_DATA - cnt_position_1 - 1;
        end
    end

endfunction

//===================== DUT =====================//

Question2 #(
    .SIZE_DATA (SIZE_DATA),
    .SIZE_LOPD  (SIZE_LOP)
) DUT (
    .i_data         (i_data),
    .o_one_position (o_one_position),
    .o_zero_flag    (o_zero_flag)
);

//===================== CLOCK =====================//
initial begin
    i_clk = 0;
    forever #5 i_clk = ~i_clk; // 10ns period = 100MHz
end

//===================== DUMP WAVE =====================//
initial begin
    $dumpfile("tb_Question2.vcd");
    $dumpvars(0, tb_Question2);
end
//===================== TEST SEQUENCE =====================//
int bit_pos;
initial begin
    i_rst_n = 0;
    i_addr  = '0;
    i_data  = '0;

    // Reset phase
    #20;
    i_rst_n = 1;
    #10;

    repeat (1) begin
        @(posedge i_clk);
        #1;
        i_addr = i_addr + 1;
        i_data  = 24'b0;
        @(negedge i_clk);
        #1;
        $display("[TIME: %5t] [%s] i_data = %b (%d) \t| o_one_position = %b (%d) \t| o_zero_flag = %b", $time, "Zero", i_data, i_data, o_one_position, o_one_position, o_zero_flag);
        $display("=> %4s: Expect: %8h, DUT: %8h ", (Test_LOPD(i_data) == o_one_position) ? "PASS" : "FAIL", o_one_position, Test_LOPD(i_data));
        test_count = test_count + 1;
        test_pass  = (Test_LOPD(i_data) == o_one_position) ? test_pass + 1 : test_pass;
    end

    bit_pos = 1;
    repeat (24) begin
        @(posedge i_clk);
        #1;
        i_addr = i_addr + 1;
        i_data  = bit_pos;
        @(negedge i_clk);
        #1;
        $display("[TIME: %5t] [%s] i_data = %b (%d) \t| o_one_position = %b (%d) \t| o_zero_flag = %b", $time, "Direcly", i_data, i_data, o_one_position, o_one_position, o_zero_flag);
        $display("=> %4s: Expect: %8h, DUT: %8h ", (Test_LOPD(i_data) == o_one_position) ? "PASS" : "FAIL", o_one_position, Test_LOPD(i_data));
        test_count = test_count + 1;
        test_pass  = (Test_LOPD(i_data) == o_one_position) ? test_pass + 1 : test_pass;
        bit_pos = bit_pos << 1'b1;
    end
    repeat (100) begin
        @(posedge i_clk);
        #1;
        bit_pos = $urandom_range(0, SIZE_DATA-1);
        i_data = 24'b1 << bit_pos;
        if ($urandom_range(0, 1)) begin
            i_data |= $urandom_range(0, (1 << SIZE_DATA) - 1);
        end
        #5;
        $display("[TIME: %5t] [%s] i_data = %b (%d) \t| o_one_position = %b (%d) \t| o_zero_flag = %b", $time, "Random", i_data, i_data, o_one_position, o_one_position, o_zero_flag);
        $display("=> %4s: Expect: %8h, DUT: %8h ", (Test_LOPD(i_data) == o_one_position) ? "PASS" : "FAIL", o_one_position, Test_LOPD(i_data));
        test_count = test_count + 1;
        test_pass  = (Test_LOPD(i_data) == o_one_position) ? test_pass + 1 : test_pass;
        i_addr = i_addr + 1;
    end

    #10;
    $display("\n================================");
    $display("==========TEST SUMMARY==========");
    $display("Total test cases: %6d    ", test_count);
    $display("Passed          : %6d    ", test_pass);
    $display("Failed          : %6d    ", test_count - test_pass);
    $display("Pass rate       : %0.2f%%", (test_pass * 100.0) / (test_count));
    $display("================================");
    #100;

    $finish;
end

endmodule
