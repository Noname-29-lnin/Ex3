module cla_8bit (
    input  logic [7:0] A,
    input  logic [7:0] B,
    input  logic        Cin,
    output logic [7:0] Sum,
    output logic        Cout
);
    logic [1:0] Gblk, Pblk;
    logic [2:0] Cblk;   
    assign Cblk[0] = Cin;

    genvar i;
    generate
        for (i = 0; i < 2; i = i + 1) begin : BLK
            cla_4bit u4 (
                .A   (A[4*i +: 4]),
                .B   (B[4*i +: 4]),
                .cin (Cblk[i]),
                .sum (Sum[4*i +: 4]),
                .cout(),
                .Gblk(Gblk[i]),
                .Pblk(Pblk[i])
            );
        
            assign Cblk[i+1] = Gblk[i] | (Pblk[i] & Cblk[i]);
        end
    endgenerate

    assign Cout = Cblk[2];
endmodule
