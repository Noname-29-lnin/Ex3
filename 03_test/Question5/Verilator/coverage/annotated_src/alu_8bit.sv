//      // verilator_coverage annotation
        module alu_8bit (
%000004     input  logic [7:0] A,
%000004     input  logic [7:0] B,
 000035     input  logic       S1,
 000070     input  logic       S0,
 000056     input  logic       Cin,
 000041     output logic [7:0] F,
 000040     output logic       Cout
        );
            
%000005     logic [7:0] B_comp;
            assign      B_comp = ~B;
        
 000035     logic  sel_op1; 
            assign sel_op1 = S1 & (~S0);
        
 000023     logic [7:0] Op1;
        
            genvar i;
            generate
                for (i = 0; i < 8; i = i + 1) begin : OP1_MUX
                    assign Op1[i] = sel_op1 ? B_comp[i] : A[i];
                end
            endgenerate
        
 000018     logic [7:0] Op2;
%000001     always_comb begin
%000001         case ({S1, S0})
 000073             2'b00: Op2 = B;
 000072             2'b01: Op2 = 8'b0;
 000074             2'b10: Op2 = 8'b0;
 000068             2'b11: Op2 = B_comp;
%000000             default: Op2 = 8'b0;
                endcase
            end
        
            cla_8bit u_adder (
                .A   (Op1),
                .B   (Op2),
                .Cin (Cin),
                .Sum (F),
                .Cout(Cout)
            );
        
        endmodule
        
