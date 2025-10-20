`timescale 1ns/1ps

module tb_Question6();

    //================================================================
    // Parameter
    //================================================================
    parameter IS_ASC    = 0;      // 1 = tăng dần, 0 = giảm dần
    parameter NUM_ELEM  = 8;
    parameter SIZE_DATA = 8;

    //================================================================
    // Internal Signals
    //================================================================
    logic                     i_clk;
    logic                     i_rst_n;
    logic [SIZE_DATA-1:0]     i_data   [0:NUM_ELEM-1];
    logic [SIZE_DATA-1:0]     o_sorted [0:NUM_ELEM-1];

    //================================================================
    // DUT Instance
    //================================================================
    Question6 #(
        .IS_ASC    (IS_ASC),
        .NUM_ELEM  (NUM_ELEM),
        .SIZE_DATA (SIZE_DATA)
    ) dut (
        .i_clk     (i_clk),
        .i_rst_n   (i_rst_n),
        .i_data    (i_data),
        .o_sorted  (o_sorted)
    );

    //================================================================
    // Clock Generation (10ns period)
    //================================================================
    initial i_clk = 0;
    always #5 i_clk = ~i_clk; // 100 MHz clock

    //================================================================
    // Test Procedure
    //================================================================
    integer k;
    int test_count = 0;
    int test_pass  = 0;
    
    initial begin
        // Khởi tạo
        i_rst_n = 0;
        for (k = 0; k < NUM_ELEM; k++) begin
            i_data[k] = '0;
        end

        // Reset trong 20ns
        #20;
        i_rst_n = 1;

        //================================================================
        // Gán giá trị đầu vào (có thể ngẫu nhiên hoặc cố định)
        //================================================================
        // Ví dụ cố định để dễ xem kết quả:
        i_data[0] = 8'd135;
        i_data[1] = 8'd220;
        i_data[2] = 8'd110;
        i_data[3] = 8'd0;
        i_data[4] = 8'd155;
        i_data[5] = 8'd135;
        i_data[6] = 8'd77;
        i_data[7] = 8'd5;

        // In giá trị đầu vào
        $display("========================================");
        $display("Input data before sorting:");
        for (k = 0; k < NUM_ELEM; k++) begin
            $display("  i_data[%0d] = %0d", k, i_data[k]);
        end
        $display("========================================");

        //================================================================
        // Chờ vài chu kỳ để dữ liệu được xử lý
        //================================================================
        #50;  // chờ 5 chu kỳ clock (tuỳ kiến trúc Bitonic_Sort của bạn)

        // In giá trị đầu ra đã sắp xếp
        $display("Sorted output data:");
        for (k = 0; k < NUM_ELEM; k++) begin
            $display("  o_sorted[%0d] = %0d", k, o_sorted[k]);
        end
        $display("========================================");

        // Kết thúc mô phỏng
        #20;
        $finish;
    end

endmodule
