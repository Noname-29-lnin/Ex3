module Question1 #(
    parameter SIZE_DATA = 32
)(
    input  logic [SIZE_DATA-1:0] i_data,
    output logic [SIZE_DATA-1:0] o_data
);

    // ======================
    // Bước 1: tạo 4 vector test
    // ======================
    logic [SIZE_DATA-1:0] test [3:0];

    assign test[0] = {2'b0,  i_data[SIZE_DATA-1:2]};
    assign test[1] = {4'b0,  i_data[SIZE_DATA-1:4]};
    assign test[2] = {6'b0,  i_data[SIZE_DATA-1:6]};
    assign test[3] = {8'b0,  i_data[SIZE_DATA-1:8]};

    // ======================
    // Bước 2: cộng dần các phần tử test
    // ======================
    logic [SIZE_DATA-1:0] sum_stage [3:0];

    // sum_stage[0] = test[0] + test[1]
    SUM_unit #(
        .SIZE_DATA (SIZE_DATA)
    ) u_sum_0 (
        .i_data_a  (test[0]),
        .i_data_b  (test[1]),
        .o_data_sum(sum_stage[0])
    );

    // sum_stage[1] = sum_stage[0] + test[2]
    SUM_unit #(
        .SIZE_DATA (SIZE_DATA)
    ) u_sum_1 (
        .i_data_a  (sum_stage[0]),
        .i_data_b  (test[2]),
        .o_data_sum(sum_stage[1])
    );

    // sum_stage[2] = sum_stage[1] + test[3]
    SUM_unit #(
        .SIZE_DATA (SIZE_DATA)
    ) u_sum_2 (
        .i_data_a  (sum_stage[1]),
        .i_data_b  (test[3]),
        .o_data_sum(sum_stage[2])
    );

    // ======================
    // Bước 3: xuất kết quả
    // ======================
    assign o_data = sum_stage[2];

endmodule
