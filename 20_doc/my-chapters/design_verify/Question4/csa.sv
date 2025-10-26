module csa #(
    parameter WIDTH   = 12, // WIDTH must %4 == 0 (and >= 4)
    parameter CLA_CRA = 1   // 1 use CLA 4 bit , 0 use CRA 4 bit
)(
    input  logic [WIDTH - 1:0] i_a   ,
    input  logic [WIDTH - 1:0] i_b   ,
    input  logic               i_cin ,
    output logic [WIDTH - 1:0] o_s   ,
    output logic               o_cout
);

    localparam LENGTH = WIDTH/4;
    
    logic [WIDTH  - 1:4] s_cin_1, s_cin_0;
    logic [LENGTH - 1:0] cout_sel;
    logic [LENGTH - 2:0] cout_cin_1, cout_cin_0;

    assign o_cout = cout_sel[LENGTH - 1];

    generate
        if(CLA_CRA == 0)
            cra_4b first_block (
                .i_a   (i_a[3:0]),  
                .i_b   (i_b[3:0]),
                .i_cin (i_cin)   ,
                .o_s   (o_s[3:0]),
                .o_cout(cout_sel[0])
            );

        else
            cla_4 first_block (
                .a   (i_a[3:0]),  
                .b   (i_b[3:0]),
                .cin (i_cin),
                .s   (o_s[3:0]),
                .cout(cout_sel[0])
            );
    endgenerate

    genvar i;
    generate
        for(i = 1; i < LENGTH; i++) begin : gen_block
            if(CLA_CRA == 0) begin
                cra_4b cin_1 (
                    .i_a   (    i_a[(i*4)+:4]),  
                    .i_b   (    i_b[(i*4)+:4]),
                    .i_cin (            1'b1 ),
                    .o_s   (s_cin_1[(i*4)+:4]),
                    .o_cout(cout_cin_1[i - 1])
                );

                cra_4b cin_0 (
                    .i_a   (    i_a[(i*4)+:4]),  
                    .i_b   (    i_b[(i*4)+:4]),
                    .i_cin (            1'b0 ),
                    .o_s   (s_cin_0[(i*4)+:4]),
                    .o_cout(cout_cin_0[i - 1])
                );
            end

            else begin
                cla_4 cin_1 (
                    .a   (    i_a[(i*4)+:4]),  
                    .b   (    i_b[(i*4)+:4]),
                    .cin (            1'b1 ),
                    .s   (s_cin_1[(i*4)+:4]),
                    .cout(cout_cin_1[i - 1])
                );

                cla_4 cin_0 (
                    .a   (    i_a[(i*4)+:4]),  
                    .b   (    i_b[(i*4)+:4]),
                    .cin (            1'b0 ),
                    .s   (s_cin_0[(i*4)+:4]),
                    .cout(cout_cin_0[i - 1])
                );
            end

            assign cout_sel[i]   = cout_sel[i - 1] ? cout_cin_1[i - 1] : cout_cin_0[i - 1];
            assign o_s[(i*4)+:4] = cout_sel[i - 1] ? s_cin_1[(i*4)+:4] : s_cin_0[(i*4)+:4];
        end
    endgenerate

endmodule