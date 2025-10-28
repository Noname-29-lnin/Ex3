module div_3_estimate (
    input  logic [31:0] i_a ,
    output logic [31:0] o_result
);

    logic [33:0] n ;
    logic [35:0] n_sr2, result;
    
    cra #(
        .WIDTH  (34) 
    ) stage_i (
        .i_a   ({{2{i_a[31]}}, i_a[31:0]}),
        .i_b   ({{4{i_a[31]}}, i_a[31:2]}),
        .i_cin (1'b0),
        .o_s   (n),
        .o_cout()
    );

    assign n_sr2  = {{4{n[33]}}, n[33:2]};   

    csa #(
        .WIDTH  (36), // WIDTH must %4 == 0 (and >= 4)
        .CLA_CRA(0)  // 1 use CLA 4 bit , 0 use CRA 4 bit
    ) stage_ii (
        .i_a   ({n, i_a[1:0]}),
        .i_b   (n_sr2),
        .i_cin (1'b0),
        .o_s   (result),
        .o_cout()
    );

    assign o_result = result[35:4];

endmodule

