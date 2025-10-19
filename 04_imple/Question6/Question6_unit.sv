module Question6_unit #(
    parameter IS_ASC        = 1 ,
    parameter NUM_ELEM      = 8 ,
    parameter SIZE_DATA     = 8
)(
    input logic                     i_clk   ,
    input logic                     i_rst_n ,
    input  logic [(NUM_ELEM*SIZE_DATA)-1:0] i_data  ,
    output logic [(NUM_ELEM*SIZE_DATA)-1:0] o_sorted
);

logic [(NUM_ELEM*SIZE_DATA)-1:0] w_i_data;
logic [(NUM_ELEM*SIZE_DATA)-1:0] w_o_sorted;

always_ff @( posedge i_clk or negedge i_rst_n ) begin : procc_time_analysis
    if(~i_rst_n) begin
        w_i_data    <= '0;
        o_sorted    <= '0; 
    end else begin
        w_i_data    <= i_data;
        o_sorted    <= w_o_sorted;
    end
end

Bitonic_Sort #(
    .IS_ASC     (IS_ASC),
    .NUM_ELEM   (NUM_ELEM),
    .SIZE_DATA  (SIZE_DATA)
) DUT (
    .i_data     (w_i_data),
    .o_sorted   (w_o_sorted)
);

endmodule
// module Question6_unit #(
//     parameter IS_ASC    = 1,
//     parameter NUM_ELEM  = 8,
//     parameter SIZE_DATA = 8
// )(
//     input  logic                      i_clk,
//     input  logic                      i_rst_n,
//     input  wire [SIZE_DATA-1:0]       i_data   [0:NUM_ELEM-1],
//     output reg  [SIZE_DATA-1:0]       o_sorted [0:NUM_ELEM-1]
// );

// logic [(NUM_ELEM*SIZE_DATA)-1:0] w_o_sorted, w_i_data;
// logic [SIZE_DATA-1:0]             t_o_sorted [0:NUM_ELEM-1];

// genvar i;
// generate
//     for (i = 0; i < NUM_ELEM; i++) begin : pack_input
//         assign w_i_data[i*SIZE_DATA +: SIZE_DATA] = i_data[i];
//         assign t_o_sorted[i] = w_o_sorted[i*SIZE_DATA +: SIZE_DATA];
//     end
// endgenerate

// genvar j;
// generate
//     for (j = 0; j < NUM_ELEM; j++) begin : procc_time_analysis
//         always_ff @(posedge i_clk or negedge i_rst_n) begin
//             if (~i_rst_n)
//                 o_sorted[j] <= '0;
//             else
//                 o_sorted[j] <= t_o_sorted[j];
//         end
//     end
// endgenerate

// Bitonic_Sort #(
//     .IS_ASC    (IS_ASC),
//     .NUM_ELEM  (NUM_ELEM),
//     .SIZE_DATA (SIZE_DATA)
// ) DUT (
//     .i_data    (w_i_data),
//     .o_sorted  (w_o_sorted)
// );

// endmodule

