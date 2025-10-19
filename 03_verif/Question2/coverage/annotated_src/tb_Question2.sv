//      // verilator_coverage annotation
        `timescale 1ns/1ps
        
        module tb_Question2();
        
        parameter SIZE_DATA = 24;
        parameter SIZE_LOP  = 5;
        
%000001 logic i_clk, i_rst_n;
%000002 logic [SIZE_DATA-1:0] i_addr;
 000376 logic [SIZE_DATA-1:0] i_data;
%000002 logic [SIZE_DATA-1:0] o_addr;  
 000282 logic [SIZE_LOP-1:0]  o_one_position;
%000002 logic                 o_zero_flag;
        
        //===================== DUT =====================//
        Question2_unit #(
            .SIZE_DATA (SIZE_DATA),
            .SIZE_LOP  (SIZE_LOP)
        ) DUT (
            .i_clk          (i_clk),
            .i_rst_n        (i_rst_n),
            .i_addr         (i_addr),
            .i_data         (i_data),
            .o_addr         (o_addr),
            .o_one_position (o_one_position),
            .o_zero_flag    (o_zero_flag)
        );
        
        //===================== CLOCK =====================//
%000000 initial begin
%000000     i_clk = 0;
 002073     forever #5 i_clk = ~i_clk; // 10ns period = 100MHz
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
 000024         #1;
 000024         i_addr = i_addr + 1;
 000024         i_data  = bit_pos;   
 000024         @(posedge i_clk);
 000024         bit_pos = bit_pos << 1'b1;
            end
%000001     repeat (1000) begin
 001000         #1;
                
                // Chọn vị trí bit 1 ngẫu nhiên từ 0 → 23
 001000         bit_pos = $urandom_range(0, SIZE_DATA-1);
                
                // Tạo dữ liệu chỉ có một bit 1 tại vị trí đó
 001000         i_data = 24'b1 << bit_pos;
                
                // Có thể thêm vài bit 1 ngẫu nhiên khác (tùy muốn)
 000486         if ($urandom_range(0, 1)) begin
 000486             i_data |= $urandom_range(0, (1 << SIZE_DATA) - 1);
                end
                
                // Random địa chỉ cho vui
 001000         i_addr = i_addr + 1;
 001000         @(posedge i_clk);
        end
        
        
%000001     #100;
%000001     $finish;
        end
        
        //===================== MONITOR / DISPLAY =====================//
 001037 always @(*) begin
 001037     @(posedge i_clk); // Clock input addr
 001037     $display("[%0t] i_addr = %h | i_data = %b (%0d)", $time, i_addr, i_data, i_data);
 001037     $display("o_addr = %h \t| o_one_position = %b (%0d) \t| o_zero_flag = %b", o_addr, o_one_position, o_one_position, o_zero_flag);    
            // @(posedge i_clk); // Clock processing data
        end
        
        endmodule
        
