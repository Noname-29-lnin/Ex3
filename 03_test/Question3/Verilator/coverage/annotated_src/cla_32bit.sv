//      // verilator_coverage annotation
        module cla_32bit (
 000405     input  logic        clk,
%000001     input  logic        rst_n,  
 000039     input  logic [31:0] A,
 000036     input  logic [31:0] B,
 000056     input  logic        Cin,
 000035     output logic [31:0] Sum,
 000040     output logic        Cout
        );
         
 000036     logic [31:0] A_r, B_r;
 000056     logic        Cin_r;
        
 000203     always_ff @(posedge clk or negedge rst_n) begin
%000002         if (!rst_n) begin
%000002             A_r   <= '0;
%000002             B_r   <= '0;
%000002             Cin_r <= 1'b0;
 000201         end else begin
 000201             A_r   <= A;
 000201             B_r   <= B;
 000201             Cin_r <= Cin;
                end
            end
        
%000004     logic [7:0] Pblk, Gblk;
 000043     logic [8:0] Cblk;   
 000035     logic [31:0] Sum_c;
 000048     logic        Cout_c;
            
            genvar i;
            generate
                assign Cblk[0] = Cin_r;
                for (i = 0; i < 8; i++) begin : BLK
                    cla_4bit u4 (
                        .A      (A_r[4*i +: 4]),
                        .B      (B_r[4*i +: 4]),
                        .Cin    (Cblk[i]),
                        .Gblk   (Gblk[i]),
                        .Pblk   (Pblk[i]),
                        .S      (Sum_c[4*i +: 4]),
                        .Cout   ()
                    );
                    assign Cblk[i+1] = Gblk[i] | (Pblk[i] & Cblk[i]);
                end
            endgenerate
        
            assign Cout_c = Cblk[8];
        
        
 000203     always_ff @(posedge clk or negedge rst_n) begin
%000002         if (!rst_n) begin
%000002             Sum  <= '0;
%000002             Cout <= 1'b0;
 000201         end else begin
 000201             Sum  <= Sum_c;
 000201             Cout <= Cout_c;
                end
            end
        endmodule
        
