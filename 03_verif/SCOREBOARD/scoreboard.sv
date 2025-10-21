// module scoreboard #(
//     parameter IS_ASC    = 0,      // 1 = Ascending, 0 = Descending
//     parameter NUM_ELEM  = 8,
//     parameter SIZE_DATA = 8 
// )(
//     input logic                             i_clk       ,
//     input logic                             i_rst_n     ,
//     input logic                             i_start     ,
//     input logic                             i_finsish   ,
//     input logic [(SIZE_DATA*NUM_ELEM)-1:0]  i_expect    ,
//     input logic [(SIZE_DATA*NUM_ELEM)-1:0]  i_data       
// );

// int test_count = 0;
// int test_pass  = 0;

// function automatic logic [SIZE_DATA*NUM_ELEM-1:0] f_ARR_sorted(
//     int                                  f_is_acs   ,
//     input logic [SIZE_DATA*NUM_ELEM-1:0] f_i_data
// );
//     logic [SIZE_DATA-1:0] arr   [0:NUM_ELEM-1];
//     logic [SIZE_DATA-1:0] temp;
//     int i, j;

//     begin
//         for (i = 0; i < NUM_ELEM; i++) begin
//             arr[i] = f_i_data[i*SIZE_DATA +: SIZE_DATA];
//         end

//         for (i = 0; i < NUM_ELEM-1; i++) begin
//             for (j = 0; j < NUM_ELEM-1-i; j++) begin
//                 if(f_is_acs) begin
//                     if (arr[j] > arr[j+1]) begin
//                         temp     = arr[j];
//                         arr[j]   = arr[j+1];
//                         arr[j+1] = temp;
//                     end 
//                 end else begin
//                     if (arr[j] < arr[j+1]) begin
//                         temp     = arr[j];
//                         arr[j]   = arr[j+1];
//                         arr[j+1] = temp;
//                     end
//                 end
//             end
//         end

//         for (i = 0; i < NUM_ELEM; i++) begin
//             f_ARR_sorted[i*SIZE_DATA +: SIZE_DATA] = arr[i];
//         end
//     end
// endfunction

// initial begin
//     if(~i_finsish) begin
//         if(i_start) begin
//             @(negedge i_clk);
//             #1;
//             $display("[TIME: %5t] [%s] - %4s: Expect: %8h, DUT: %8h ", $time, "Random", (i_data == f_ARR_sorted(IS_ASC, i_expect)) ? "PASS" : "FAIL", i_data, f_ARR_sorted(IS_ASC, i_expect));
//             test_count = test_count + 1;
//             test_pass = (i_data == f_ARR_sorted(IS_ASC, i_expect)) ? test_pass + 1 : test_pass;
//         end
//     end else begin
//         #100;
//         $display("\n================================");
//         $display("==========TEST SUMMARY==========");
//         $display("Total test cases: %6d    ", test_count);
//         $display("Passed          : %6d    ", test_pass);
//         $display("Failed          : %6d    ", test_count - test_pass);
//         $display("Pass rate       : %0.2f%%", (test_pass * 100.0) / (test_count));
//         $display("================================");
//         #100;
//         $finish;
//     end
// end

// endmodule
module scoreboard #(
    parameter IS_ASC    = 0,      // 1 = Ascending, 0 = Descending
    parameter NUM_ELEM  = 8,
    parameter SIZE_DATA = 8 
)(
    input logic                             i_clk       ,
    input logic                             i_rst_n     ,
    input logic                             i_start     ,
    input logic                             i_finish    ,
    input logic [(SIZE_DATA*NUM_ELEM)-1:0]  i_expect    ,
    input logic [(SIZE_DATA*NUM_ELEM)-1:0]  i_data       
);

int test_count;
int test_pass;

logic [(SIZE_DATA*NUM_ELEM)-1:0] expected_sorted;
logic test_complete;

function automatic logic [SIZE_DATA*NUM_ELEM-1:0] f_ARR_sorted(
    int                                  f_is_acs   ,
    input logic [SIZE_DATA*NUM_ELEM-1:0] f_i_data
);
    logic [SIZE_DATA-1:0] arr   [0:NUM_ELEM-1];
    logic [SIZE_DATA-1:0] temp;
    int i, j;

    begin
        for (i = 0; i < NUM_ELEM; i++) begin
            arr[i] = f_i_data[i*SIZE_DATA +: SIZE_DATA];
        end

        for (i = 0; i < NUM_ELEM-1; i++) begin
            for (j = 0; j < NUM_ELEM-1-i; j++) begin
                if(f_is_acs) begin
                    if (arr[j] > arr[j+1]) begin
                        temp     = arr[j];
                        arr[j]   = arr[j+1];
                        arr[j+1] = temp;
                    end 
                end else begin
                    if (arr[j] < arr[j+1]) begin
                        temp     = arr[j];
                        arr[j]   = arr[j+1];
                        arr[j+1] = temp;
                    end
                end
            end
        end

        for (i = 0; i < NUM_ELEM; i++) begin
            f_ARR_sorted[i*SIZE_DATA +: SIZE_DATA] = arr[i];
        end
    end
endfunction

// Initialize variables
initial begin
    test_count = 0;
    test_pass = 0;
    test_complete = 0;
end

// Calculate expected sorted value
always @* begin
    expected_sorted = f_ARR_sorted(IS_ASC, i_expect);
end

// Main test logic
always @(posedge i_clk or negedge i_rst_n) begin
    if (!i_rst_n) begin
        test_count <= 0;
        test_pass <= 0;
        test_complete <= 0;
    end else if (i_finish && !test_complete) begin
        // Finish condition - display summary
        #100;
        $display("\n================================");
        $display("==========TEST SUMMARY==========");
        $display("Total test cases: %6d    ", test_count);
        $display("Passed          : %6d    ", test_pass);
        $display("Failed          : %6d    ", test_count - test_pass);
        if (test_count > 0) begin
            $display("Pass rate       : %0.2f%%", (test_pass * 100.0) / (test_count));
        end else begin
            $display("Pass rate       : N/A (no tests)");
        end
        $display("================================");
        #100;
        test_complete <= 1;
        $finish;
    end else if (i_start && !i_finish) begin
        // Test evaluation
        @(negedge i_clk);
        #1;
        if (i_data == expected_sorted) begin
            $display("[TIME: %5t] [%s] - PASS: Expect: %8h, DUT: %8h ", $time, "Random", i_data, expected_sorted);
            test_pass <= test_pass + 1;
        end else begin
            $display("[TIME: %5t] [%s] - FAIL: Expect: %8h, DUT: %8h ", $time, "Random", i_data, expected_sorted);
        end
        test_count <= test_count + 1;
    end
end

endmodule
