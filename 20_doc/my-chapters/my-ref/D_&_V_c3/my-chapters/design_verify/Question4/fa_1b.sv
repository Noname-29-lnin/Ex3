module fa_1b (
    input  logic i_a   ,  
    input  logic i_b   ,
    input  logic i_cin ,
    output logic o_s   ,
    output logic o_cout
);

    logic  a_xor_b;
    assign a_xor_b = i_a ^ i_b            ;
    assign o_s     = a_xor_b ^ i_cin      ;
    assign o_cout  = a_xor_b ? i_cin : i_b;

endmodule