// module COMP_2bit(
//     input logic [1:0]   i_data_a,
//     input logic [1:0]   i_data_b,
//     output logic        o_less  ,
//     output logic        o_equal 
// );

// assign o_less = (~i_data_a[1] & ~i_data_a[0] & i_data_b[0]) | (~i_data_a[0] & i_data_b[1] & i_data_b[0]) | (~i_data_a[1] & i_data_b[1]);
// assign o_equal = ~(i_data_a ^ i_data_b);
// endmodule
module COMP_2bit(
    input  logic [1:0] i_data_a,
    input  logic [1:0] i_data_b,
    output logic       o_less,
    output logic       o_equal
);
    assign o_less  = (~i_data_a[1] & ~i_data_a[0] & i_data_b[0]) | (~i_data_a[0] & i_data_b[1] & i_data_b[0]) | (~i_data_a[1] & i_data_b[1]);
    assign o_equal = ~|(i_data_a ^ i_data_b);
endmodule
