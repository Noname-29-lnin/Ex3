module Compare_and_Swap_unit #(
    parameter IS_ASC        = 1 ,
    parameter SIZE_DATA     = 8
)(
    input logic  [SIZE_DATA-1:0]    i_data_a    ,
    input logic  [SIZE_DATA-1:0]    i_data_b    ,
    output logic [SIZE_DATA-1:0]    o_data_max  ,
    output logic [SIZE_DATA-1:0]    o_data_min   
);

logic w_compare;
COMP_less #(
    .SIZE_DATA  (SIZE_DATA)
) COMP_UNIT (
    // o_less = i_data_a < i_data_b
    .i_data_a       (i_data_a),
    .i_data_b       (i_data_b),
    .o_less         (w_compare) 
);
// COMP_parallel_prefix_binary #(
//     .SIZE_DATA  (SIZE_DATA)
// ) COMP_UNT (
//     .i_data_a       (i_data_a),
//     .i_data_b       (i_data_b),
//     .o_less         (w_compare) 
// );

generate
    if(IS_ASC) begin
        assign o_data_max = w_compare ? i_data_b : i_data_a;
        assign o_data_min = w_compare ? i_data_a : i_data_b;
    end else begin
        assign o_data_max = w_compare ? i_data_a : i_data_b;
        assign o_data_min = w_compare ? i_data_b : i_data_a;
    end
endgenerate

endmodule
