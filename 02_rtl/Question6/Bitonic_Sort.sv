module Bitonic_Sort #(
    parameter IS_ASC    = 1,
    parameter NUM_ELEM  = 8,
    parameter SIZE_DATA = 8
)(
    input  logic [(NUM_ELEM*SIZE_DATA)-1:0] i_data  ,
    output logic [(NUM_ELEM*SIZE_DATA)-1:0] o_sorted
);

    // Split flat bus into array
    wire [SIZE_DATA-1:0] w_i_data [0:NUM_ELEM-1];
    wire [SIZE_DATA-1:0] w_0_data [0:NUM_ELEM-1];
    wire [SIZE_DATA-1:0] w_sorted [0:NUM_ELEM-1];

    genvar i;
    generate
        for (i = 0; i < NUM_ELEM; i++) begin : UNPACK_INPUT
            assign w_i_data[i] = i_data[i*SIZE_DATA +: SIZE_DATA];
        end
    endgenerate

    Bitonic_Block4 #(
        .IS_ASC         (IS_ASC),
        .SIZE_DATA      (SIZE_DATA)
    ) BN_4_UNIT_0 (
        .i_data_0       (w_i_data[0]),
        .i_data_1       (w_i_data[1]),
        .i_data_2       (w_i_data[2]),
        .i_data_3       (w_i_data[3]),

        .o_data_0       (w_0_data[0]),
        .o_data_1       (w_0_data[1]),
        .o_data_2       (w_0_data[2]),
        .o_data_3       (w_0_data[3]) 
    );
    Bitonic_Block4 #(
        .IS_ASC         (IS_ASC),
        .SIZE_DATA      (SIZE_DATA)
    ) BN_4_UNIT_1 (
        .i_data_0       (w_i_data[4]),
        .i_data_1       (w_i_data[5]),
        .i_data_2       (w_i_data[6]),
        .i_data_3       (w_i_data[7]),

        .o_data_0       (w_0_data[4]),
        .o_data_1       (w_0_data[5]),
        .o_data_2       (w_0_data[6]),
        .o_data_3       (w_0_data[7]) 
    );

    Bitonic_Block8 #(
        .IS_ASC         (IS_ASC),
        .SIZE_DATA      (SIZE_DATA)
    ) BN_8_UNIT_0 (
        .i_data_0       (w_0_data[0]),
        .i_data_1       (w_0_data[4]),
        .i_data_2       (w_0_data[1]),
        .i_data_3       (w_0_data[5]),
        .i_data_4       (w_0_data[2]),
        .i_data_5       (w_0_data[6]),
        .i_data_6       (w_0_data[3]),
        .i_data_7       (w_0_data[7]),

        .o_data_0       (w_sorted[0]),
        .o_data_1       (w_sorted[1]),
        .o_data_2       (w_sorted[2]),
        .o_data_3       (w_sorted[3]),
        .o_data_4       (w_sorted[4]),
        .o_data_5       (w_sorted[5]),
        .o_data_6       (w_sorted[6]),
        .o_data_7       (w_sorted[7])      
    );

    generate
        for (i = 0; i < NUM_ELEM; i++) begin : PACK_OUTPUT
            assign o_sorted[i*SIZE_DATA +: SIZE_DATA] = w_sorted[i];
        end
    endgenerate

endmodule
