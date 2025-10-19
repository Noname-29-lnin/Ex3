`timescale 1ns/1ps

module tb_Question2();

parameter SIZE_DATA = 24;
parameter SIZE_LOP  = 5;

logic i_clk, i_rst_n;
logic [SIZE_DATA-1:0] i_addr;
logic [SIZE_DATA-1:0] i_data;
logic [SIZE_DATA-1:0] o_addr;  
logic [SIZE_LOP-1:0]  o_one_position;
logic                 o_zero_flag;

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
initial begin
    i_clk = 0;
    forever #5 i_clk = ~i_clk; // 10ns period = 100MHz
end

//===================== DUMP WAVE =====================//
initial begin
    $dumpfile("tb_Question2.vcd");
    $dumpvars(0, tb_Question2);
end
int bit_pos;
//===================== TEST SEQUENCE =====================//
initial begin
    i_rst_n = 0;
    i_addr  = '0;
    i_data  = '0;

    // Reset phase
    #20;
    i_rst_n = 1;
    #10;

    // Random test 100 lần
    bit_pos = 1;
    repeat (24) begin
        #1;
        i_addr = i_addr + 1;
        i_data  = bit_pos;   
        @(posedge i_clk);
        bit_pos = bit_pos << 1'b1;
    end
    repeat (1000) begin
        #1;
        
        // Chọn vị trí bit 1 ngẫu nhiên từ 0 → 23
        bit_pos = $urandom_range(0, SIZE_DATA-1);
        
        // Tạo dữ liệu chỉ có một bit 1 tại vị trí đó
        i_data = 24'b1 << bit_pos;
        
        // Có thể thêm vài bit 1 ngẫu nhiên khác (tùy muốn)
        if ($urandom_range(0, 1)) begin
            i_data |= $urandom_range(0, (1 << SIZE_DATA) - 1);
        end
        
        // Random địa chỉ cho vui
        i_addr = i_addr + 1;
        @(posedge i_clk);
end


    #100;
    $finish;
end

//===================== MONITOR / DISPLAY =====================//
always @(*) begin
    @(posedge i_clk); // Clock input addr
    $display("[%0t] i_addr = %h | i_data = %b (%0d)", $time, i_addr, i_data, i_data);
    $display("o_addr = %h \t| o_one_position = %b (%0d) \t| o_zero_flag = %b", o_addr, o_one_position, o_one_position, o_zero_flag);    
    // @(posedge i_clk); // Clock processing data
end

endmodule
