module Bitonic_Block4 #(
    parameter IS_ASC        = 1 ,
    parameter SIZE_DATA     = 8
)(
    input logic [SIZE_DATA-1:0]     i_data_0    ,
    input logic [SIZE_DATA-1:0]     i_data_1    ,
    input logic [SIZE_DATA-1:0]     i_data_2    ,
    input logic [SIZE_DATA-1:0]     i_data_3    ,
    output logic [SIZE_DATA-1:0]    o_data_0    ,
    output logic [SIZE_DATA-1:0]    o_data_1    ,
    output logic [SIZE_DATA-1:0]    o_data_2    ,
    output logic [SIZE_DATA-1:0]    o_data_3     
);

////////////////////////////////////////////////////////
// Internal Logics
////////////////////////////////////////////////////////
wire [SIZE_DATA-1:0] w_data_max_0_0, w_data_max_0_1; 
wire [SIZE_DATA-1:0] w_data_min_0_0, w_data_min_0_1;
wire [SIZE_DATA-1:0] w_data_max_1_0, w_data_max_1_1; 
wire [SIZE_DATA-1:0] w_data_min_1_0, w_data_min_1_1;
wire [SIZE_DATA-1:0] w_data_max_2_0, w_data_min_2_0;

////////////////////////////////////////////////////////
// SubModules
////////////////////////////////////////////////////////

Compare_and_Swap_unit #(
    .IS_ASC         (IS_ASC),
    .SIZE_DATA      (SIZE_DATA)
) CAS_0_0 (
    .i_data_a       (i_data_0),
    .i_data_b       (i_data_1),
    .o_data_max     (w_data_max_0_0),
    .o_data_min     (w_data_min_0_0) 
);

Compare_and_Swap_unit #(
    .IS_ASC         (IS_ASC),
    .SIZE_DATA      (SIZE_DATA)
) CAS_0_1 (
    .i_data_a       (i_data_2),
    .i_data_b       (i_data_3),
    .o_data_max     (w_data_max_0_1),
    .o_data_min     (w_data_min_0_1) 
);

Compare_and_Swap_unit #(
    .IS_ASC         (IS_ASC),
    .SIZE_DATA      (SIZE_DATA)
) CAS_1_0 (
    .i_data_a       (w_data_max_0_0),
    .i_data_b       (w_data_max_0_1),
    .o_data_max     (w_data_max_1_0),
    .o_data_min     (w_data_min_1_0) 
);

Compare_and_Swap_unit #(
    .IS_ASC         (IS_ASC),
    .SIZE_DATA      (SIZE_DATA)
) CAS_1_1 (
    .i_data_a       (w_data_min_0_0),
    .i_data_b       (w_data_min_0_1),
    .o_data_max     (w_data_max_1_1),
    .o_data_min     (w_data_min_1_1) 
);

Compare_and_Swap_unit #(
    .IS_ASC         (IS_ASC),
    .SIZE_DATA      (SIZE_DATA)
) CAS_2_0 (
    .i_data_a       (w_data_min_1_0),
    .i_data_b       (w_data_max_1_1),
    .o_data_max     (w_data_max_2_0),
    .o_data_min     (w_data_min_2_0) 
);

assign o_data_0 = w_data_max_1_0;
assign o_data_1 = w_data_max_2_0;
assign o_data_2 = w_data_min_2_0;
assign o_data_3 = w_data_min_1_1;

endmodule
