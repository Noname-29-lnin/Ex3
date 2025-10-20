module scoreboard #(
    parameter SIZE_DATA = 8
)(
    input logic                     is_finish       ,
    input logic [SIZE_DATA-1:0]     i_expect_data   ,
    input logic [SIZE_DATA-1:0]     i_data_out       
);

int test_count = 0;
int test_pass  = 0;

// task printf_compare (input string type_tb, input int tb_value, input int dut_value);
//     $display("[TIME: %5t] [%s] - %4s: Expect: %8h, DUT: %8h ", $time, type_tb, (tb_value == dut_value) ? "PASS" : "FAIL", tb_value, dut_value);
//     test_count = test_count + 1;
//     test_pass  = (tb_value == dut_value) ? test_pass + 1 : test_pass;
// endtask
// task report();
//     $display("\n================================");
//     $display("==========TEST SUMMARY==========");
//     $display("Total test cases: %6d    ", test_count);
//     $display("Passed          : %6d    ", test_pass);
//     $display("Failed          : %6d    ", test_count - test_pass);
//     $display("Pass rate       : %0.2f%%", (test_pass * 100.0) / (test_count));
//     $display("================================");
// endtask

initial begin
    if(!is_finish) begin
        $display("[TIME: %5t] [%s] - %4s: Expect: %8h, DUT: %8h ", $time, type_tb, (tb_value == dut_value) ? "PASS" : "FAIL", i_data_out, i_expect_data);
        test_count = test_count + 1;
        test_pass  = (i_expect_data == i_data_out) ? test_pass + 1 : test_pass;
    end else begin
        $display("\n================================");
        $display("==========TEST SUMMARY==========");
        $display("Total test cases: %6d    ", test_count);
        $display("Passed          : %6d    ", test_pass);
        $display("Failed          : %6d    ", test_count - test_pass);
        $display("Pass rate       : %0.2f%%", (test_pass * 100.0) / (test_count));
        $display("================================");
    end
end

endmodule
