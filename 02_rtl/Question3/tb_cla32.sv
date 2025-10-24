`timescale 1ns/1ps
module tb_cla32;

    // ===== DUT signals =====
    logic        clk;
    logic        rst_n;
    logic [31:0] A_tb, B_tb;
    logic        Cin_tb;
    logic [31:0] Sum_tb;
    logic        Cout_tb;

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
    initial clk = 0;
    always #5 clk = ~clk;   // 10ns period

    // ===== Dump waveform =====
    initial begin
        $dumpfile("tb_cla32.vcd");
        $dumpvars(0, tb_cla32);
    end
    initial begin
        $shm_open("waves.shm");
        $shm_probe("ASM");
    end

    // ===== Reset =====
    initial begin
        rst_n  = 1'b0;
        A_tb   = '0;
        B_tb   = '0;
        Cin_tb = 1'b0;
        #20;
        rst_n = 1'b1;
        #10;
    end

    // ===== Scoreboard =====
    int pass_count = 0;
    int fail_count = 0;

    // ===== Task run_test =====
    task run_test();

        int idx;
        logic [31:0] tv_a, tv_b;
        logic        tv_cin;
        logic [32:0] expected, got;

        begin
            $display("=== Start run_test (100 samples) ===");
            for (idx = 0; idx < 100; idx++) begin
                // --- generate testcase ---
                tv_a   = $urandom();
                tv_b   = $urandom();
                tv_cin = $urandom_range(0,1);
                A_tb   = tv_a;
                B_tb   = tv_b;
                Cin_tb = tv_cin;
                @(posedge clk);
                @(posedge clk);
                #1;
                // --- compute expected ---
                expected = {1'b0, tv_a} + {1'b0, tv_b} + tv_cin;
                got      = {Cout_tb, Sum_tb};
                // --- compare and display ---
                if (got == expected) begin
                    pass_count++;
                    $display("PASS [%0d] A=0x%08h B=0x%08h Cin=%0d => {Cout,Sum}=0x%09h",
                             idx, tv_a, tv_b, tv_cin, got);
                end else begin
                    fail_count++;
                    $display("FAIL [%0d] A=0x%08h B=0x%08h Cin=%0d => got=0x%09h (exp=0x%09h)",
                             idx, tv_a, tv_b, tv_cin, got, expected);
                end
            end

            // --- summary ---
            $display("=== Test summary ===");
            $display("Total samples = %0d", pass_count + fail_count);
            $display("PASS = %0d", pass_count);
            $display("FAIL = %0d", fail_count);
            $display("=== End run_test ===");
        end
    endtask

    // ===== Main process =====
    initial begin
        @(posedge rst_n);
        @(posedge clk);
        run_test();
        $finish;
    end

endmodule
