//      // verilator_coverage annotation
        `timescale 1ns/1ps
        module tb_Question3;
        
            // ===== DUT signals =====
 000405     logic        clk;
%000001     logic        rst_n;
 000036     logic [31:0] A_tb, B_tb;
 000056     logic        Cin_tb;
 000035     logic [31:0] Sum_tb;
 000040     logic        Cout_tb;
        
            // ===== Instantiate DUT =====
            cla_32bit DUT (
                .clk  (clk),
                .rst_n(rst_n),
                .A    (A_tb),
                .B    (B_tb),
                .Cin  (Cin_tb),
                .Sum  (Sum_tb),
                .Cout (Cout_tb)
            );
        
            // ===== Clock generation =====
%000001     initial clk = 0;
 000405     always #5 clk = ~clk;   // 10ns period
        
            // ===== Dump waveform =====
%000001     initial begin
%000001         $dumpfile("tb_Question3.vcd");
%000001         $dumpvars(0, tb_Question3);
            end
            // initial begin
            //     $shm_open("waves.shm");
            //     $shm_probe("ASM");
            // end
        
            // ===== Reset =====
%000001     initial begin
%000001         rst_n  = 1'b0;
%000001         A_tb   = '0;
%000001         B_tb   = '0;
%000001         Cin_tb = 1'b0;
%000001         #20;
%000001         rst_n = 1'b1;
%000001         #10;
            end
        
            // ===== Scoreboard =====
%000001     int pass_count = 0;
%000001     int fail_count = 0;
        
            // ===== Task run_test =====
%000001     task run_test();
        
                int idx;
                logic [31:0] tv_a, tv_b;
                logic        tv_cin;
                logic [32:0] expected, got;
        
%000001         begin
%000001             $display("=== Start run_test (100 samples) ===");
%000001             for (idx = 0; idx < 100; idx++) begin
                        // --- generate testcase ---
 000100                 tv_a   = $urandom();
 000100                 tv_b   = $urandom();
 000100                 tv_cin = $urandom_range(0,1);
 000100                 A_tb   = tv_a;
 000100                 B_tb   = tv_b;
 000100                 Cin_tb = tv_cin;
 000100                 @(posedge clk);
 000100                 @(posedge clk);
 000100                 #1;
                        // --- compute expected ---
 000100                 expected = {1'b0, tv_a} + {1'b0, tv_b} + tv_cin;
 000100                 got      = {Cout_tb, Sum_tb};
                        // --- compare and display ---
%000000                 if (got == expected) begin
 000100                     pass_count++;
 000100                     $display("PASS [%0d] A=0x%08h B=0x%08h Cin=%0d => {Cout,Sum}=0x%09h",
 000100                              idx, tv_a, tv_b, tv_cin, got);
%000000                 end else begin
%000000                     fail_count++;
%000000                     $display("FAIL [%0d] A=0x%08h B=0x%08h Cin=%0d => got=0x%09h (exp=0x%09h)",
%000000                              idx, tv_a, tv_b, tv_cin, got, expected);
                        end
                    end
        
                    // --- summary ---
%000001             $display("=== Test summary ===");
%000001             $display("Total samples = %0d", pass_count + fail_count);
%000001             $display("PASS = %0d", pass_count);
%000001             $display("FAIL = %0d", fail_count);
%000001             $display("=== End run_test ===");
                end
            endtask
        
            // ===== Main process =====
%000001     initial begin
%000001         @(posedge rst_n);
%000001         @(posedge clk);
%000001         run_test();
%000001         $finish;
            end
        
        endmodule
        
