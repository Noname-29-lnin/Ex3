module SUM_unit #(
    parameter SIZE_DATA = 32
)(
    input logic                     i_carry     ,
    input logic [SIZE_DATA-1:0]     i_data_a    ,
    input logic [SIZE_DATA-1:0]     i_data_b    ,
    output logic [SIZE_DATA-1:0]    o_data_sum  ,
    output logic                    o_carry      
);

localparam NUM_DEPTH = SIZE_DATA/4;
logic [NUM_DEPTH:0] w_c;
assign w_c[0] = i_carry;

genvar i;
generate
    for(i = 0; i < SIZE_DATA; i = i + 4) begin
        CLA_4bit CLA_UNIT (
            .a      (i_data_a[i+3:i]),
            .b      (i_data_b[i+3:i]),
            .cin    (w_c[i/4]),
            .sum    (o_data_sum[i+3:i]),
            .cout   (w_c[(i/4)+1])
        );      
    end
endgenerate

assign o_carry = w_c[SIZE_DATA];

endmodule
