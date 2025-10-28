`timescale 1ns/1ps

module tb_Question5;
    // ==============================
    // DUT signals
    // ==============================
    logic [7:0] A, B;
    logic S1, S0, Cin;
    logic [7:0] F;
    logic Cout;

    // ==============================
    // Instantiate DUT 
    // ==============================
    alu_8bit dut (
        .A(A), .B(B), .S1(S1), .S0(S0), .Cin(Cin),
        .F(F), .Cout(Cout)
    );

    // ==============================
    // Test control / statistics
    // ==============================
    integer total_tests;
    integer errors;
    integer test_count;
    integer test_pass;
    int unsigned seed;

    // ==============================
    // Waveform dump 
    // ==============================
    initial begin
        $dumpfile("tb_Question5.vcd");
        $dumpvars(0, tb_Question5);
    end
    // initial begin
    //     $shm_open("waves.shm");
    //     $shm_probe("ASM");
    // end

    // ==============================
    // Reference model 
    // ==============================
    function automatic int unsigned ref_model(
        input logic [7:0] A_i,
        input logic [7:0] B_i,
        input logic S1_i,
        input logic S0_i,
        input logic Cin_i
    );
        logic [7:0] B_comp;
        logic [7:0] Op1, Op2;
        int unsigned sum9;
    begin
        B_comp = ~B_i;

        // Op1 selection
        if (S1_i && !S0_i)
            Op1 = B_comp;
        else
            Op1 = A_i;

        // Op2 selection per {S1,S0}
        case ({S1_i, S0_i})
            2'b00: Op2 = B_i;
            2'b01: Op2 = 8'h00;
            2'b10: Op2 = 8'h00;
            2'b11: Op2 = B_comp;
            default: Op2 = 8'h00;
        endcase

        sum9 = Op1 + Op2 + (Cin_i ? 1 : 0);
        return sum9;
    end
    endfunction

    // ==============================
    // Task: Apply one test vector & check
    // ==============================
    task automatic apply_and_check(
        input logic [7:0] tvA,
        input logic [7:0] tvB,
        input logic tvS1,
        input logic tvS0,
        input logic tvCin,
        input string  test_label   // "Zero", "Direct", "Random"
    );
        int unsigned expected;
        logic [7:0] expF;
        logic expC;
        string passfail;
    begin
        A = tvA;
        B = tvB;
        S1 = tvS1;
        S0 = tvS0;
        Cin = tvCin;
        #1; // small settle delay

        expected = ref_model(A, B, S1, S0, Cin);
        expF = expected[7:0];
        expC = expected[8];

        total_tests++;
        test_count++;

        if ((F !== expF) || (Cout !== expC)) begin
            passfail = "FAIL";
            errors++;
        end else begin
            passfail = "PASS";
            test_pass++;
        end

   
        $display("[TIME: %6t] [%s] A=%02h B=%02h S1S0=%b%b Cin=%b | F=%02h Cout=%b",
                 $time, test_label, A, B, S1, S0, Cin, F, Cout);
        $display("=> %4s: Expect: %02h (%0d), DUT: %02h (%0d)",
                 passfail, expF, expF, F, F);

        if (passfail == "FAIL") begin
            $display("    >>> MISMATCH: Expected F=%02h Cout=%b | Got F=%02h Cout=%b",
                     expF, expC, F, Cout);
        end
        $display("------------------------------------------------------------");
    end
    endtask

    // ==============================
    // Task: Main run_test
    // ==============================
    task automatic run_test();
        logic [7:0] edgeA [0:6];
        logic [7:0] edgeB [0:6];
        int idx;
        int s1, s0, c;
        int rctl;
    begin
        total_tests = 0;
        errors = 0;
        test_count = 0;
        test_pass = 0;

        // --- Directed edge cases ---
        edgeA[0] = 8'h00; edgeB[0] = 8'h00;
        edgeA[1] = 8'hFF; edgeB[1] = 8'hFF;
        edgeA[2] = 8'hFF; edgeB[2] = 8'h01;
        edgeA[3] = 8'h80; edgeB[3] = 8'h80;
        edgeA[4] = 8'hAA; edgeB[4] = 8'h55;
        edgeA[5] = 8'h55; edgeB[5] = 8'hAA;
        edgeA[6] = 8'h0F; edgeB[6] = 8'hF0;

        $display("\n========== STARTING DIRECTED TESTS ==========\n");
        for (idx = 0; idx <= 6; idx++) begin
            for (s1 = 0; s1 < 2; s1++) begin
                for (s0 = 0; s0 < 2; s0++) begin
                    for (c = 0; c < 2; c++) begin
                        apply_and_check(edgeA[idx], edgeB[idx], s1, s0, c, "Direct");
                    end
                end
            end
        end

        // Special case: all zero
        $display("\n========== ZERO CASE TEST ==========\n");
        apply_and_check(8'h00, 8'h00, 0, 0, 0, "Zero");

        // Randomized tests
        $display("\n========== STARTING RANDOM TESTS ==========\n");
        seed = 32'hCAFEBABE;
        while (total_tests < 100) begin
            A = $urandom(seed) & 8'hFF;
            B = $urandom(seed + 1) & 8'hFF;
            rctl = $urandom(seed + 2) % 8;
            S1 = (rctl >> 2) & 1;
            S0 = (rctl >> 1) & 1;
            Cin = rctl & 1;
            #1;
            apply_and_check(A, B, S1, S0, Cin, "Random");
            seed = seed + 12345;
        end
    end
    endtask

    // ==============================
    // Test runner & summary
    // ==============================
    initial begin
        real pass_rate;

        $display("=== TB ALU8 start ===");
        total_tests = 0;
        errors = 0;
        test_count = 0;
        test_pass = 0;

        run_test();

        // ---- SUMMARY ----
        $display("\n============================================");
        $display("=============== TEST SUMMARY ===============");
        $display("Total test cases : %0d", test_count);
        $display("Passed            : %0d", test_pass);
        $display("Failed            : %0d", test_count - test_pass);
        pass_rate = (test_count == 0) ? 0.0 : (100.0 * test_pass) / test_count;
        $display("Pass rate         : %6.2f %%", pass_rate);
        $display("============================================\n");

        if (errors == 0) begin
            $display("PASS: All tests succeeded.");
            $finish;
        end else begin
            $display("FAIL: %0d errors detected.", errors);
            $fatal;
        end
    end

endmodule
