`timescale 1ns/1ps
module tb_Question6();

parameter IS_ASC    = 1;      // 1 = Ascending, 0 = Descending
parameter NUM_ELEM  = 8;
parameter SIZE_DATA = 8;

int test_count = 0;
int test_pass  = 0;

logic i_clk, i_rst_n;
logic [(SIZE_DATA*NUM_ELEM)-1:0]    i_data;
logic [(SIZE_DATA*NUM_ELEM)-1:0]    o_data;

function automatic logic [SIZE_DATA*NUM_ELEM-1:0] f_ARR_sorted(
    input  int                                  f_is_acs,
    input  logic [SIZE_DATA*NUM_ELEM-1:0]       f_i_data
);
    logic [SIZE_DATA-1:0] arr [0:NUM_ELEM-1];
    logic [SIZE_DATA-1:0] temp;
    int i, j;

    begin
        for (i = 0; i < NUM_ELEM; i++) begin
            arr[i] = f_i_data[i*SIZE_DATA +: SIZE_DATA];
        end

        for (i = 0; i < NUM_ELEM-1; i++) begin
            for (j = 0; j < NUM_ELEM-1-i; j++) begin
                if (!f_is_acs) begin
                    if (arr[j] > arr[j+1]) begin
                        temp     = arr[j];
                        arr[j]   = arr[j+1];
                        arr[j+1] = temp;
                    end
                end else begin
                    if (arr[j] <= arr[j+1]) begin
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


task automatic Display_Result(
    string                               t_type,
    input logic [SIZE_DATA*NUM_ELEM-1:0] t_arr
);
    logic [SIZE_DATA-1:0] t_t_arr   [0:NUM_ELEM-1];
    int i, j;
    begin
        for (i = 0; i < NUM_ELEM; i++) begin
            t_t_arr[i] = t_arr[i*SIZE_DATA +: SIZE_DATA];
        end

        for (j = 0; j < NUM_ELEM; j++) begin
            $display("%s[%d] \t= %8h (%d)", t_type, j, t_t_arr[j], t_t_arr[j]);
        end
    end
endtask //automatic

//===================== DUT =====================//

Bitonic_Sort #(
        .IS_ASC    (IS_ASC),
        .NUM_ELEM  (NUM_ELEM),
        .SIZE_DATA (SIZE_DATA)
    ) DUT (
        .i_data    (i_data),
        .o_sorted  (o_data)
    );

//===================== CLOCK =====================//
initial begin
    i_clk = 0;
    forever #5 i_clk = ~i_clk; // 10ns period = 100MHz
end

//===================== DUMP WAVE =====================//
initial begin
    $dumpfile("tb_Question6.vcd");
    $dumpvars(0, tb_Question6);
end
//===================== TEST SEQUENCE =====================//
initial begin
    i_rst_n = 0;
    i_data  = '0;

    // Reset phase
    #20;
    i_rst_n = 1;
    #10;

    $display("\n===DESCENDING===\n");
    repeat (1) begin
        @(posedge i_clk);
        #1;
        i_data  = $urandom;
        i_data = '0;
        $display("\n");
        Display_Result("Input", i_data);
        @(negedge i_clk);
        #1;
        $display("\n");
        Display_Result("Output", o_data);
        $display("[TIME: %5t] [%s] i_data = %h (%d) \t| o_data = %h (%d)", $time, "Zero", i_data, i_data, o_data, o_data);
        $display("=> %4s: Expect: %8h, DUT: %8h ", (f_ARR_sorted(IS_ASC, i_data) == o_data) ? "PASS" : "FAIL", f_ARR_sorted(IS_ASC, i_data), o_data);
        test_count = test_count + 1;
        test_pass  = (f_ARR_sorted(IS_ASC, i_data) == o_data) ? test_pass + 1 : test_pass;
    end

    repeat (1) begin
        @(posedge i_clk);
        #1;
        i_data  = $urandom;
        $display("\n");
        Display_Result("Input", i_data);
        @(negedge i_clk);
        #1;
        $display("\n");
        Display_Result("Output", o_data);
        $display("[TIME: %5t] [%s] i_data = %h (%d) \t| o_data = %h (%d)", $time, "Random", i_data, i_data, o_data, o_data);
        $display("=> %4s: Expect: %8h, DUT: %8h ", (f_ARR_sorted(IS_ASC, i_data) == o_data) ? "PASS" : "FAIL", f_ARR_sorted(IS_ASC, i_data), o_data);
        test_count = test_count + 1;
        test_pass  = (f_ARR_sorted(IS_ASC, i_data) == o_data) ? test_pass + 1 : test_pass;
    end

    repeat (100) begin
        @(posedge i_clk);
        #1;
        i_data  = $urandom_range(0, 2**(SIZE_DATA*NUM_ELEM)-1);
        // $display("\n");
        // Display_Result("Input", i_data);
        @(negedge i_clk);
        #1;
        // $display("\n");
        // Display_Result("Output", o_data);
        $display("[TIME: %5t] [%s] i_data = %h (%d) \t| o_data = %h (%d)", $time, "Random", i_data, i_data, o_data, o_data);
        $display("=> %4s: Expect: %8h, DUT: %8h ", (f_ARR_sorted(IS_ASC, i_data) == o_data) ? "PASS" : "FAIL", f_ARR_sorted(IS_ASC, i_data), o_data);
        test_count = test_count + 1;
        test_pass  = (f_ARR_sorted(IS_ASC, i_data) == o_data) ? test_pass + 1 : test_pass;
    end
    
    #10;
    $display("\n================================");
    $display("==========TEST SUMMARY==========");
    $display("Total test cases: %6d    ", test_count);
    $display("Passed          : %6d    ", test_pass);
    $display("Failed          : %6d    ", test_count - test_pass);
    $display("Pass rate       : %0.2f%%", (test_pass * 100.0) / (test_count));
    $display("================================");
    #100;

    $finish;
end

endmodule
