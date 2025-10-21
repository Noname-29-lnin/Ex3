// //==========================
// // sort_if.sv
// //==========================
// interface sort_if #(parameter NUM_ELEM=8, SIZE_DATA=8) (input logic clk);
//     logic [(NUM_ELEM*SIZE_DATA)-1:0] i_data;
//     logic [(NUM_ELEM*SIZE_DATA)-1:0] o_sorted;
// endinterface
interface tb_if #(parameter NUM_ELEM=8, SIZE_DATA=8)(input logic clk);
    logic rst_n;
    logic [(SIZE_DATA*NUM_ELEM)-1:0] i_data;
    logic [(SIZE_DATA*NUM_ELEM)-1:0] o_data;
endinterface
