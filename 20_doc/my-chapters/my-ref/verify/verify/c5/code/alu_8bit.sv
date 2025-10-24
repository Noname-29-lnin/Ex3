module alu_8bit (
    input  logic [7:0] A,
    input  logic [7:0] B,
    input  logic       S1,
    input  logic       S0,
    input  logic       Cin,
    output logic [7:0] F,
    output logic       Cout
);
    
    logic [7:0] B_comp;
    assign      B_comp = ~B;

    logic  sel_op1; 
    assign sel_op1 = S1 & (~S0);

    logic [7:0] Op1;

    genvar i;
    generate
        for (i = 0; i < 8; i = i + 1) begin : OP1_MUX
            assign Op1[i] = sel_op1 ? B_comp[i] : A[i];
        end
    endgenerate

    logic [7:0] Op2;
    always_comb begin
        case ({S1, S0})
            2'b00: Op2 = B;
            2'b01: Op2 = 8'b0;
            2'b10: Op2 = 8'b0;
            2'b11: Op2 = B_comp;
            default: Op2 = 8'b0;
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
