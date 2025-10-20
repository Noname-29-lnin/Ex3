module COMP_parallel_prefix_binary #(
    parameter SIZE_DATA     = 8
)(
    input logic [SIZE_DATA-1:0]     i_data_a    ,
    input logic [SIZE_DATA-1:0]     i_data_b    ,
    output logic                    o_less       
);

logic w_max_0_0, w_max_0_1, w_max_0_2, w_max_0_3;
logic w_min_0_0, w_min_0_1, w_min_0_2, w_min_0_3;
logic w_L_0_0, w_L_0_1, w_G_0_0;

PPBC_black_cell PPBC_black_cell_unit_0 (
    .i_data_a       (i_data_a[7:6]),
    .i_data_b       (i_data_b[7:6]),
    .o_max          (w_max_0_0),
    .o_min          (w_min_0_0) 
);
PPBC_black_cell PPBC_black_cell_unit_1 (
    .i_data_a       (i_data_a[5:4]),
    .i_data_b       (i_data_b[5:4]),
    .o_max          (w_max_0_1),
    .o_min          (w_min_0_1) 
);
PPBC_black_cell PPBC_black_cell_unit_2 (
    .i_data_a       (i_data_a[3:2]),
    .i_data_b       (i_data_b[3:2]),
    .o_max          (w_max_0_2),
    .o_min          (w_min_0_2) 
);
PPBC_black_cell PPBC_black_cell_unit_3 (
    .i_data_a       (i_data_a[1:0]),
    .i_data_b       (i_data_b[1:0]),
    .o_max          (w_max_0_3),
    .o_min          (w_min_0_3) 
);

// propagation
PPBC_gray_cell PPBC_gray_cell_unit_0_0 (
    .i_G_1          (w_min_0_0),
    .i_L_0          (w_max_0_0),
    .i_G_0          (w_min_0_1),
    .o_L            (w_L_0_0) 
);
PPBC_gray_cell PPBC_gray_cell_unit_0_1 (
    .i_G_1          (w_max_0_0),
    .i_L_0          (w_min_0_0),
    .i_G_0          (w_max_0_1),
    .o_L            (w_G_0_0) 
);
PPBC_gray_cell PPBC_gray_cell_unit_0_2 (
    .i_G_1          (w_min_0_2),
    .i_L_0          (w_max_0_2),
    .i_G_0          (w_min_0_3),
    .o_L            (w_L_0_1) 
);

PPBC_gray_cell PPBC_gray_cell_unit_1_0 (
    .i_G_1          (w_L_0_0),
    .i_L_0          (w_G_0_0),
    .i_G_0          (w_L_0_1),
    .o_L            (o_less) 
);
endmodule
