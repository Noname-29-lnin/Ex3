module Bitonic_Block8 #(
    parameter IS_ASC        = 1 ,
    parameter SIZE_DATA     = 8
)(
    input logic [SIZE_DATA-1:0]     i_data_0    ,
    input logic [SIZE_DATA-1:0]     i_data_1    ,
    input logic [SIZE_DATA-1:0]     i_data_2    ,
    input logic [SIZE_DATA-1:0]     i_data_3    ,
    input logic [SIZE_DATA-1:0]     i_data_4    ,
    input logic [SIZE_DATA-1:0]     i_data_5    ,
    input logic [SIZE_DATA-1:0]     i_data_6    ,
    input logic [SIZE_DATA-1:0]     i_data_7    ,
    output logic [SIZE_DATA-1:0]    o_data_0    ,
    output logic [SIZE_DATA-1:0]    o_data_1    ,
    output logic [SIZE_DATA-1:0]    o_data_2    ,
    output logic [SIZE_DATA-1:0]    o_data_3    ,
    output logic [SIZE_DATA-1:0]    o_data_4    ,
    output logic [SIZE_DATA-1:0]    o_data_5    ,
    output logic [SIZE_DATA-1:0]    o_data_6    ,
    output logic [SIZE_DATA-1:0]    o_data_7          
);

////////////////////////////////////////////////////////
// Internal Logics
////////////////////////////////////////////////////////
wire [SIZE_DATA-1:0] w_data_max_0_0, w_data_max_0_1, w_data_max_0_2, w_data_max_0_3;
wire [SIZE_DATA-1:0] w_data_min_0_0, w_data_min_0_1, w_data_min_0_2, w_data_min_0_3;
wire [SIZE_DATA-1:0] w_data_max_1_0, w_data_max_1_1, w_data_max_1_2; 
wire [SIZE_DATA-1:0] w_data_min_1_0, w_data_min_1_1, w_data_min_1_2;
wire [SIZE_DATA-1:0] w_data_max_2_0, w_data_max_2_1;
wire [SIZE_DATA-1:0] w_data_min_2_0, w_data_min_2_1;
wire [SIZE_DATA-1:0] w_data_min_3_0, w_data_max_3_0;
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
) CAS_0_2 (
    .i_data_a       (i_data_4),
    .i_data_b       (i_data_5),
    .o_data_max     (w_data_max_0_2),
    .o_data_min     (w_data_min_0_2) 
);
Compare_and_Swap_unit #(
    .IS_ASC         (IS_ASC),
    .SIZE_DATA      (SIZE_DATA)
) CAS_0_3 (
    .i_data_a       (i_data_6),
    .i_data_b       (i_data_7),
    .o_data_max     (w_data_max_0_3),
    .o_data_min     (w_data_min_0_3) 
);

Compare_and_Swap_unit #(
    .IS_ASC         (IS_ASC),
    .SIZE_DATA      (SIZE_DATA)
) CAS_1_0 (
    .i_data_a       (w_data_min_0_0),
    .i_data_b       (w_data_max_0_1),
    .o_data_max     (w_data_max_1_0),
    .o_data_min     (w_data_min_1_0) 
);
Compare_and_Swap_unit #(
    .IS_ASC         (IS_ASC),
    .SIZE_DATA      (SIZE_DATA)
) CAS_1_1 (
    .i_data_a       (w_data_min_0_1),
    .i_data_b       (w_data_max_0_2),
    .o_data_max     (w_data_max_1_1),
    .o_data_min     (w_data_min_1_1) 
);
Compare_and_Swap_unit #(
    .IS_ASC         (IS_ASC),
    .SIZE_DATA      (SIZE_DATA)
) CAS_1_2 (
    .i_data_a       (w_data_min_0_2),
    .i_data_b       (w_data_max_0_3),
    .o_data_max     (w_data_max_1_2),
    .o_data_min     (w_data_min_1_2) 
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
Compare_and_Swap_unit #(
    .IS_ASC         (IS_ASC),
    .SIZE_DATA      (SIZE_DATA)
) CAS_2_1 (
    .i_data_a       (w_data_min_1_1),
    .i_data_b       (w_data_max_1_2),
    .o_data_max     (w_data_max_2_1),
    .o_data_min     (w_data_min_2_1) 
);

Compare_and_Swap_unit #(
    .IS_ASC         (IS_ASC),
    .SIZE_DATA      (SIZE_DATA)
) CAS_3_0 (
    .i_data_a       (w_data_min_2_0),
    .i_data_b       (w_data_max_2_1),
    .o_data_max     (w_data_max_3_0),
    .o_data_min     (w_data_min_3_0) 
);

assign o_data_0 = w_data_max_0_0;
assign o_data_1 = w_data_max_1_0;
assign o_data_2 = w_data_max_2_0;
assign o_data_3 = w_data_max_3_0;
assign o_data_4 = w_data_min_3_0;
assign o_data_5 = w_data_min_2_1;
assign o_data_6 = w_data_min_1_2;
assign o_data_7 = w_data_min_0_3;
endmodule
