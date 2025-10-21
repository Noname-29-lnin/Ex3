interface if_top;
    parameter IS_ASC        = 1;
    parameter SIZE_DATA     = 8;
    parameter NUM_ELEM      = 8;

    logic i_clk, i_rst_n;
    logic [(SIZE_DATA*NUM_ELEM)-1:0] i_data;
    logic [(SIZE_DATA*NUM_ELEM)-1:0] o_data;
    
endinterface //itf_top