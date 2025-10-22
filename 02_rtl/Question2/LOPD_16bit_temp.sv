module LOPD_16bit(
    input logic [15:0]       i_data  ,
    output logic [3:0]      o_pos_one,
    output logic            o_zero_flag
);


////////////////////////////////////////////////////////////
// LOPD_8bit_unit_0
////////////////////////////////////////////////////////////
logic [2:0]         w_pos_one_0;  
logic               w_zero_flag_0;
LOPD_8bit LOPD_8bit_unit_0(
    .i_data         (i_data[7:0]),
    .o_pos_one      (w_pos_one_0),
    .o_zero_flag    (w_zero_flag_0)
);
////////////////////////////////////////////////////////////
// LOPD_8bit_unit_1
////////////////////////////////////////////////////////////
logic [2:0]         w_pos_one_1;  
logic               w_zero_flag_1;
LOPD_8bit LOPD_8bit_unit_1(
    .i_data         (i_data[15:8]),
    .o_pos_one      (w_pos_one_1),
    .o_zero_flag    (w_zero_flag_1)
);

////////////////////////////////////////////////////////////
// LOD_16bit_unit
////////////////////////////////////////////////////////////
assign o_zero_flag = w_zero_flag_0 & w_zero_flag_1;
assign o_pos_one[3] = ~(w_zero_flag_1);
assign o_pos_one[2] = w_zero_flag_1 ? w_pos_one_0[2] : w_pos_one_1[2];
assign o_pos_one[1] = w_zero_flag_1 ? w_pos_one_0[1] : w_pos_one_1[1];
assign o_pos_one[0] = w_zero_flag_1 ? w_pos_one_0[0] : w_pos_one_1[0];

// // Bult on the LOPD-4bit
// logic [1:0] w_one_position_0_0;
// logic       w_zero_flag_0_0;
// LOPD_4bit LOPD4BIT_0_0 (
//     .i_data         (i_data[3:0]),
//     .o_pos_one      (w_one_position_0_0),
//     .o_zero_flag    (w_zero_flag_0_0)
// );
// logic [1:0] w_one_position_0_1;
// logic       w_zero_flag_0_1;
// LOPD_4bit LOPD4BIT_0_1 (
//     .i_data         (i_data[7:4]),
//     .o_pos_one      (w_one_position_0_1),
//     .o_zero_flag    (w_zero_flag_0_1)
// );
// logic [1:0] w_one_position_0_2;
// logic       w_zero_flag_0_2;
// LOPD_4bit LOPD4BIT_0_2 (
//     .i_data         (i_data[11:8]),
//     .o_pos_one      (w_one_position_0_2),
//     .o_zero_flag    (w_zero_flag_0_2)
// );
// logic [1:0] w_one_position_0_3;
// logic       w_zero_flag_0_3;
// LOPD_4bit LOPD4BIT_0_3 (
//     .i_data         (i_data[15:12]),
//     .o_pos_one      (w_one_position_0_3),
//     .o_zero_flag    (w_zero_flag_0_3)
// );

// logic [1:0] w_one_position_1_0;
// LOPD_4bit LOPD4BIT_1_0 (
//     .i_data         ({~w_zero_flag_0_3, ~w_zero_flag_0_2, ~w_zero_flag_0_1, ~w_zero_flag_0_2}),
//     .o_pos_one      (w_one_position_1_0),
//     .o_zero_flag    (o_zero_flag)
// );

// always_comb begin : MUX_4_1_LSB
//     case ({o_pos_one[3], o_pos_one[2]})
//         2'b00:
//             o_pos_one[0] = w_one_position_0_0[0];
//         2'b01:
//             o_pos_one[0] = w_one_position_0_1[0];
//         2'b10:
//             o_pos_one[0] = w_one_position_0_2[0];
//         2'b11:
//             o_pos_one[0] = w_one_position_0_3[0];
//         default: 
//             o_pos_one[0] = 1'b0;
//     endcase
// end
// always_comb begin : MUX_4_1_1
//     case ({o_pos_one[3], o_pos_one[2]})
//         2'b00:
//             o_pos_one[1] = w_one_position_0_0[1];
//         2'b01:
//             o_pos_one[1] = w_one_position_0_1[1];
//         2'b10:
//             o_pos_one[1] = w_one_position_0_2[1];
//         2'b11:
//             o_pos_one[1] = w_one_position_0_3[1];
//         default: 
//             o_pos_one[1] = 1'b0;
//     endcase
// end
// always_comb begin : OUTPUT_MSB
//     o_pos_one[2] = w_one_position_1_0[0];
//     o_pos_one[3] = w_one_position_1_0[1];
// end

endmodule
