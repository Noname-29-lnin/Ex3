module div_3_tb();

    parameter TEST_LOOP = 100;
    parameter real ESTIMATE = (2.0**-2) + (2.0**-4) + (2.0**-6) + (2.0**-8);

    int value_real;

    logic [31:0] logic_value, logic_result;

    logic [31:0] operator_div;

    int  value_begin;
    shortreal trans_value;

    div_3_estimate dut_2 (
        .i_a     (logic_value),
        .o_result(logic_result)
    );

    initial begin 
        $shm_open("waves.shm");
        $shm_probe("ASM")     ;
    end

    initial begin
        for(int i = 0; i < TEST_LOOP; i++) begin
            value_begin  = $urandom_range(0, 2**32 - 1);
            logic_value  = value_begin;
            trans_value  = $itor(value_begin);
            value_real   = int'(trans_value * ESTIMATE);

            #10  
            printf_compare("DIV_3", logic_result, value_real);
        end
        report();
        
        $finish;
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

endmodule