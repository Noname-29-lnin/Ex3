module cra_4b (
    input  logic [3:0] i_a   ,  
    input  logic [3:0] i_b   ,
    input  logic       i_cin ,
    output logic [3:0] o_s   ,
    output logic       o_cout
);

    logic [4:0] c;
    assign c[0]   = i_cin;
    assign o_cout = c[4] ;

    genvar i;
    generate
        for(i = 0; i < 4; i++) begin : gen_4_block
            fa_1b FA (
                .i_a   (i_a[i])  ,  
                .i_b   (i_b[i])  ,
                .i_cin (  c[i])  ,
                .o_s   (o_s[i])  ,
                .o_cout(c[i + 1])
            );
        end
    endgenerate

endmodule