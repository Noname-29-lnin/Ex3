// module driver #(
//     parameter NUM_REPEAT    = 100,
//     parameter NUM_ELEM      = 8,
//     parameter SIZE_DATA     = 8 
// )(
//     input logic                             i_clk           ,
//     input logic                             i_rst_n         ,
//     output logic [(SIZE_DATA*NUM_ELEM)-1:0] o_data_simulus  ,
//     output logic                            o_start         ,
//     output logic                            o_finsish        
// );

// function automatic logic [(SIZE_DATA*NUM_ELEM)-1:0] f_random_value;
//     int i;
//     logic [SIZE_DATA-1:0]   f_arr [0:NUM_ELEM-1];
//     begin
//         for(i = 0; i < NUM_ELEM; i++) begin
//             // Random value each of element
//             f_arr[i] = $urandom_range(0, 2**SIZE_DATA - 1);
//         end
//         for(i = 0; i < NUM_ELEM; i++) begin
//             // Merger data
//             o_data_simulus[i*SIZE_DATA +: SIZE_DATA] = f_arr[i];
//         end
//     end
// endfunction

// initial begin
//     o_finsish = 0;
//     o_start   = 0;
//     o_data_simulus = '0; // Initial data
//     wait (i_rst_n == 1'b1);
//     o_finsish = 0;
//     repeat (NUM_REPEAT) begin
//         @(posedge i_clk);
//         #1;
//         o_start = 1;
//         o_data_simulus = f_random_value();
//     end
//     @(posedge i_clk);
//     o_start   = 0;
//     o_finsish = 1;
//     o_data_simulus = '0;
// end

// always_ff @( posedge i_clk or negedge i_rst_n ) begin : Detect_reset_active_low
//     if(~i_rst_n)
//         o_data_simulus  <= '0;
// end

// endmodule
module driver #(
    parameter int NUM_REPEAT = 100,
    parameter int NUM_ELEM   = 8,
    parameter int SIZE_DATA  = 8
)(
    input  logic                             i_clk,
    input  logic                             i_rst_n,
    output logic [(SIZE_DATA*NUM_ELEM)-1:0]  o_data_simulus
);

    // ============================================================
    // Function generate data
    // ============================================================
    function automatic logic [(SIZE_DATA*NUM_ELEM)-1:0] f_random_value();
        logic [SIZE_DATA-1:0] f_arr [0:NUM_ELEM-1];
        logic [(SIZE_DATA*NUM_ELEM)-1:0] f_out;
        int i;
        begin
            for (i = 0; i < NUM_ELEM; i++) begin
                f_arr[i] = $urandom_range(0, 2**SIZE_DATA - 1);
            end
            for (i = 0; i < NUM_ELEM; i++) begin
                f_out[i*SIZE_DATA +: SIZE_DATA] = f_arr[i];
            end
            return f_out;
        end
    endfunction

    

endmodule
