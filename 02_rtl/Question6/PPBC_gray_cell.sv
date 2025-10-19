module PPBC_gray_cell(
    input logic             i_G_1   ,
    input logic             i_L_0   ,
    input logic             i_G_0   ,
    output logic            o_L      
);

assign o_L = i_G_1 | ((~i_L_0) & i_G_0);

endmodule
