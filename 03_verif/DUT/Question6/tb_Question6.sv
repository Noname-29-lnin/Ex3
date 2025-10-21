`timescale 1ns/1ps

module tb_Question6 #(
    parameter IS_ASC    = 0,      // 1 = Ascending, 0 = Descending
    parameter NUM_ELEM  = 8,
    parameter SIZE_DATA = 8 
)(
    input logic                             i_clk       ,
    input logic                             i_rst_n     ,
    input logic [(SIZE_DATA*NUM_ELEM)-1:0]  i_data      ,
    output logic [(SIZE_DATA*NUM_ELEM)-1:0] o_data       
);

    logic [(SIZE_DATA*NUM_ELEM)-1:0] w_o_data;
    always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_output_logic
        if(~i_rst_n) 
            o_data    <= '0;
        else 
            o_data    <= w_o_data;
    end
    //================================================================
    // DUT Instance
    //================================================================
    Bitonic_Sort #(
        .IS_ASC    (IS_ASC),
        .NUM_ELEM  (NUM_ELEM),
        .SIZE_DATA (SIZE_DATA)
    ) DUT (
        .i_data    (i_data),
        .o_sorted  (w_o_data)
    );
endmodule
