//      // verilator_coverage annotation
        `timescale 1ns/1ps
        
        module tb_Question5;
            // ==============================
            // DUT signals
            // ==============================
%000004     logic [7:0] A, B;
 000035     logic S1, S0, Cin;
 000041     logic [7:0] F;
 000040     logic Cout;
        
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
%000001     initial begin
%000001         $dumpfile("tb_Question5.vcd");
%000001         $dumpvars(0, tb_Question5);
            end
            // initial begin
            //     $shm_open("waves.shm");
            //     $shm_probe("ASM");
            // end
        
            // ==============================
            // Reference model 
            // ==============================
 000100     function automatic int unsigned ref_model(
                input logic [7:0] A_i,
                input logic [7:0] B_i,
                input logic S1_i,
                input logic S0_i,
                input logic Cin_i
            );
                logic [7:0] B_comp;
                logic [7:0] Op1, Op2;
                int unsigned sum9;
 000100     begin
 000100         B_comp = ~B_i;
        
                // Op1 selection
 000025         if (S1_i && !S0_i)
 000025             Op1 = B_comp;
                else
 000075             Op1 = A_i;
        
                // Op2 selection per {S1,S0}
 000100         case ({S1_i, S0_i})
 000026             2'b00: Op2 = B_i;
 000025             2'b01: Op2 = 8'h00;
 000025             2'b10: Op2 = 8'h00;
 000024             2'b11: Op2 = B_comp;
%000000             default: Op2 = 8'h00;
                endcase
        
 000100         sum9 = Op1 + Op2 + (Cin_i ? 1 : 0);
 000100         return sum9;
            end
            endfunction
        
            // ==============================
            // Task: Apply one test vector & check
            // ==============================
 000100     task automatic apply_and_check(
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
 000100     begin
 000100         A = tvA;
 000100         B = tvB;
 000100         S1 = tvS1;
 000100         S0 = tvS0;
 000100         Cin = tvCin;
 000100         #1; // small settle delay
        
 000100         expected = ref_model(A, B, S1, S0, Cin);
 000100         expF = expected[7:0];
 000100         expC = expected[8];
        
 000100         total_tests++;
 000100         test_count++;
        
%000000         if ((F !== expF) || (Cout !== expC)) begin
%000000             passfail = "FAIL";
%000000             errors++;
 000100         end else begin
 000100             passfail = "PASS";
 000100             test_pass++;
                end
        
           
 000100         $display("[TIME: %6t] [%s] A=%02h B=%02h S1S0=%b%b Cin=%b | F=%02h Cout=%b",
 000100                  $time, test_label, A, B, S1, S0, Cin, F, Cout);
 000100         $display("=> %4s: Expect: %02h (%0d), DUT: %02h (%0d)",
 000100                  passfail, expF, expF, F, F);
        
%000000         if (passfail == "FAIL") begin
%000000             $display("    >>> MISMATCH: Expected F=%02h Cout=%b | Got F=%02h Cout=%b",
%000000                      expF, expC, F, Cout);
                end
 000100         $display("------------------------------------------------------------");
            end
            endtask
        
            // ==============================
            // Task: Main run_test
            // ==============================
%000001     task automatic run_test();
                logic [7:0] edgeA [0:6];
                logic [7:0] edgeB [0:6];
                int idx;
                int s1, s0, c;
                int rctl;
%000001     begin
%000001         total_tests = 0;
%000001         errors = 0;
%000001         test_count = 0;
%000001         test_pass = 0;
        
                // --- Directed edge cases ---
%000001         edgeA[0] = 8'h00; edgeB[0] = 8'h00;
%000001         edgeA[1] = 8'hFF; edgeB[1] = 8'hFF;
%000001         edgeA[2] = 8'hFF; edgeB[2] = 8'h01;
%000001         edgeA[3] = 8'h80; edgeB[3] = 8'h80;
%000001         edgeA[4] = 8'hAA; edgeB[4] = 8'h55;
%000001         edgeA[5] = 8'h55; edgeB[5] = 8'hAA;
%000001         edgeA[6] = 8'h0F; edgeB[6] = 8'hF0;
        
%000001         $display("\n========== STARTING DIRECTED TESTS ==========\n");
%000001         for (idx = 0; idx <= 6; idx++) begin
%000007             for (s1 = 0; s1 < 2; s1++) begin
 000014                 for (s0 = 0; s0 < 2; s0++) begin
 000028                     for (c = 0; c < 2; c++) begin
 000056                         apply_and_check(edgeA[idx], edgeB[idx], s1, s0, c, "Direct");
                            end
                        end
                    end
                end
        
                // Special case: all zero
%000001         $display("\n========== ZERO CASE TEST ==========\n");
%000001         apply_and_check(8'h00, 8'h00, 0, 0, 0, "Zero");
        
                // Randomized tests
%000001         $display("\n========== STARTING RANDOM TESTS ==========\n");
%000001         seed = 32'hCAFEBABE;
 000043         while (total_tests < 100) begin
 000043             A = $urandom(seed) & 8'hFF;
 000043             B = $urandom(seed + 1) & 8'hFF;
 000043             rctl = $urandom(seed + 2) % 8;
 000043             S1 = (rctl >> 2) & 1;
 000043             S0 = (rctl >> 1) & 1;
 000043             Cin = rctl & 1;
 000043             #1;
 000043             apply_and_check(A, B, S1, S0, Cin, "Random");
 000043             seed = seed + 12345;
                end
            end
            endtask
        
            // ==============================
            // Test runner & summary
            // ==============================
%000001     initial begin
                real pass_rate;
        
%000001         $display("=== TB ALU8 start ===");
%000001         total_tests = 0;
%000001         errors = 0;
%000001         test_count = 0;
%000001         test_pass = 0;
        
%000001         run_test();
        
                // ---- SUMMARY ----
%000001         $display("\n============================================");
%000001         $display("=============== TEST SUMMARY ===============");
%000001         $display("Total test cases : %0d", test_count);
%000001         $display("Passed            : %0d", test_pass);
%000001         $display("Failed            : %0d", test_count - test_pass);
%000001         pass_rate = (test_count == 0) ? 0.0 : (100.0 * test_pass) / test_count;
%000001         $display("Pass rate         : %6.2f %%", pass_rate);
%000001         $display("============================================\n");
        
%000001         if (errors == 0) begin
%000001             $display("PASS: All tests succeeded.");
%000001             $finish;
                end else begin
                    $display("FAIL: %0d errors detected.", errors);
                    $fatal;
                end
            end
        
        endmodule
        
