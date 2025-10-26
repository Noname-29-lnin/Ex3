module csa_tb;

    parameter WIDTH     = 32 ; // WIDTH must %4 == 0 (and >= 4)
    parameter CLA_CRA   = 0  ; // 1 use CLA, 0 use CRA
    parameter TEST_LOOP = 100;

    logic [WIDTH - 1:0] a, b;
    logic               cin;
    logic [WIDTH - 1:0] s, s_expect;
    logic               cout, cout_expect;

    csa #(
        .WIDTH(WIDTH),
        .CLA_CRA(CLA_CRA)
    ) DUT (
        .i_a(a), 
        .i_b(b), 
        .i_cin(cin),
        .o_s(s), 
        .o_cout(cout)
    );

    initial begin 
        $shm_open("waves.shm");
        $shm_probe("ASM");
    end

    int test_count = 0;
    int test_pass  = 0;

    task printf_compare (input string type_tb, input int tb_value, input int dut_value);
        $display("[TIME: %5t] [%s] - %4s: Expect: %8h, DUT: %8h ", $time, type_tb, (tb_value == dut_value) ? "PASS" : "FAIL", tb_value, dut_value);
        test_count = test_count + 1;
        test_pass  = (tb_value == dut_value) ? test_pass + 1 : test_pass;
    endtask

    task report();
        $display("\n================================");
        $display("==========TEST SUMMARY==========");
        $display("Total test cases: %6d    ", test_count);
        $display("Passed          : %6d    ", test_pass);
        $display("Failed          : %6d    ", test_count - test_pass);
        $display("Pass rate       : %0.2f%%", (test_pass * 100.0) / (test_count));
        $display("================================");
    endtask

    initial begin
        for (int i = 0; i < TEST_LOOP; i++) begin
            a   = $urandom_range(0, 2**WIDTH - 1);
            b   = $urandom_range(0, 2**WIDTH - 1);
            cin = $urandom_range(0,            1);
            {cout_expect, s_expect} = a + b + cin;
            #10
            $display("[TIME: %5t] a = %8h, b = %8h, Cin = %1h", $time, a, b, cin);
            printf_compare("CSA - RESULT", s_expect   , s   );
            printf_compare(" CSA - COUT ", cout_expect, cout);
            $display("\n");
        end

        report();
        #10
        $finish;
    end
endmodule