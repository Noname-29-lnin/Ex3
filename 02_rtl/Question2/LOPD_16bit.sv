module LOPD_16bit(
    input logic [15:0]       i_data  ,
    output logic [3:0]      o_pos_one,
    output logic            o_zero_flag
);


// ////////////////////////////////////////////////////////////
// // LOPD_4bit_unit
// ////////////////////////////////////////////////////////////
logic [1:0] w_one_position_0_0;
logic       w_zero_flag_0_0;
LOPD_4bit LOPD4BIT_0_0 (
    .i_data         (i_data[3:0]),
    .o_pos_one      (w_one_position_0_0),
    .o_zero_flag    (w_zero_flag_0_0)
);
logic [1:0] w_one_position_0_1;
logic       w_zero_flag_0_1;
LOPD_4bit LOPD4BIT_0_1 (
    .i_data         (i_data[7:4]),
    .o_pos_one      (w_one_position_0_1),
    .o_zero_flag    (w_zero_flag_0_1)
);
logic [1:0] w_one_position_0_2;
logic       w_zero_flag_0_2;
LOPD_4bit LOPD4BIT_0_2 (
    .i_data         (i_data[11:8]),
    .o_pos_one      (w_one_position_0_2),
    .o_zero_flag    (w_zero_flag_0_2)
);
logic [1:0] w_one_position_0_3;
logic       w_zero_flag_0_3;
LOPD_4bit LOPD4BIT_0_3 (
    .i_data         (i_data[15:12]),
    .o_pos_one      (w_one_position_0_3),
    .o_zero_flag    (w_zero_flag_0_3)
);

logic [1:0] w_one_position_1_0;
LOPD_4bit LOPD4BIT_1_0 (
    .i_data         ({~w_zero_flag_0_3, ~w_zero_flag_0_2, ~w_zero_flag_0_1, ~w_zero_flag_0_2}),
    .o_pos_one      (w_one_position_1_0),
    .o_zero_flag    (o_zero_flag)
);

// ////////////////////////////////////////////////////////////
// // LOD_16bit_unit
// ////////////////////////////////////////////////////////////
MUX_4_1 #(
    .SIZE_DATA  (1)
) MUX_4_1_0(
    .i_data_0       (w_one_position_0_0[0]),
    .i_data_1       (w_one_position_0_1[0]),
    .i_data_2       (w_one_position_0_2[0]),
    .i_data_3       (w_one_position_0_3[0]),
    .i_select       ({o_pos_one[3], o_pos_one[2]}),
    .o_data         (o_pos_one[0]) 
);
MUX_4_1 #(
    .SIZE_DATA  (1)
) MUX_4_1_1(
    .i_data_0       (w_one_position_0_0[1]),
    .i_data_1       (w_one_position_0_1[1]),
    .i_data_2       (w_one_position_0_2[1]),
    .i_data_3       (w_one_position_0_3[1]),
    .i_select       ({o_pos_one[3], o_pos_one[2]}),
    .o_data         (o_pos_one[1]) 
);

assign o_pos_one[2] = w_one_position_1_0[0];
assign o_pos_one[3] = w_one_position_1_0[1];

endmodule

module MUX_4_1 #(
    parameter SIZE_DATA = 1
)(
    input logic [SIZE_DATA-1:0]     i_data_0    ,
    input logic [SIZE_DATA-1:0]     i_data_1    ,
    input logic [SIZE_DATA-1:0]     i_data_2    ,
    input logic [SIZE_DATA-1:0]     i_data_3    ,
    input logic [1:0]               i_select    ,
    output logic [SIZE_DATA-1:0]    o_data       
);
reg [SIZE_DATA-1:0] w_o_mux;
always_comb begin : MUX_4_1_1
    case (i_select)
        2'b00:
            w_o_mux = i_data_0;
        2'b01:
            w_o_mux = i_data_1;
        2'b10:
            w_o_mux = i_data_2;
        2'b11:
            w_o_mux = i_data_3;
        default: 
            w_o_mux = '0;
    endcase
end
assign o_data = w_o_mux;

endmodule
