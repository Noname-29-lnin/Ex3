module cla_32bit (
    input  logic        clk,
    input  logic        rst_n,  
    input  logic [31:0] A,
    input  logic [31:0] B,
    input  logic        Cin,
    output logic [31:0] Sum,
    output logic        Cout
);
 
    logic [31:0] A_r, B_r;
    logic        Cin_r;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            A_r   <= '0;
            B_r   <= '0;
            Cin_r <= 1'b0;
        end else begin
            A_r   <= A;
            B_r   <= B;
            Cin_r <= Cin;
        end
    end

    logic [7:0] Pblk, Gblk;
    logic [8:0] Cblk;   
    logic [31:0] Sum_c;
    logic        Cout_c;

    assign Cblk[0] = Cin_r;

    genvar i;
    generate
        for (i = 0; i < 8; i++) begin : BLK
            cla_4bit u4 (
                .A    (A_r[4*i +: 4]),
                .B    (B_r[4*i +: 4]),
                .cin  (Cblk[i]),
                .sum  (Sum_c[4*i +: 4]),
                .cout (),
                .Gblk (Gblk[i]),
                .Pblk (Pblk[i])
            );
            assign Cblk[i+1] = Gblk[i] | (Pblk[i] & Cblk[i]);
        end
    endgenerate

    assign Cout_c = Cblk[8];


    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            Sum  <= '0;
            Cout <= 1'b0;
        end else begin
            Sum  <= Sum_c;
            Cout <= Cout_c;
        end
    end
endmodule
