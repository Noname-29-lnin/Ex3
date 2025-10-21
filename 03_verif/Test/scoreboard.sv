// //==========================
// // scoreboard.sv
// //==========================
// class scoreboard #(parameter NUM_ELEM=8, SIZE_DATA=8);
//     mailbox #(transaction#(NUM_ELEM,SIZE_DATA)) mbx_mon2scb;
//     int test_count, test_pass;

//     function new(mailbox #(transaction#(NUM_ELEM,SIZE_DATA)) mbx);
//         this.mbx_mon2scb = mbx;
//     endfunction

//     task run();
//         transaction#(NUM_ELEM,SIZE_DATA) tr;
//         forever begin
//             mbx_mon2scb.get(tr);
//             test_count++;

//             if (tr.data_out_dut === tr.data_out_ref) begin
//                 test_pass++;
//                 $display("[PASS] Data: %16h", tr.data_in);
//             end else begin
//                 $display("[FAIL] Data: %16h", tr.data_in);
//             end
//         end
//     endtask

//     function void summary();
//         $display("\n================================");
//         $display("==========TEST SUMMARY==========");
//         $display("Total test cases: %6d", test_count);
//         $display("Passed          : %6d", test_pass);
//         $display("Failed          : %6d", test_count - test_pass);
//         if (test_count > 0)
//             $display("Pass rate       : %0.2f%%", (test_pass * 100.0) / test_count);
//         else
//             $display("Pass rate       : N/A (no tests)");
//         $display("================================");
//     endfunction
// endclass
class scoreboard #(parameter NUM_ELEM=8, SIZE_DATA=8);
    typedef transaction#(NUM_ELEM, SIZE_DATA) trans_t;
    mailbox #(trans_t) mbx_mon2scb;

    function new(mailbox #(trans_t) mbx);
        this.mbx_mon2scb = mbx;
    endfunction

    task run();
        trans_t tr;
        forever begin
            mbx_mon2scb.get(tr);
            tr.display("Scoreboard");
        end
    endtask
endclass
