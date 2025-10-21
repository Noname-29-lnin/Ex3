// //==========================
// // tb_top.sv
// //==========================
// `timescale 1ns/1ps
// `include "sort_if.sv"
// `include "transaction.sv"
// `include "driver.sv"
// `include "monitor.sv"
// `include "scoreboard.sv"
// `include "environment.sv"

// module tb_top;

//     logic clk;
//     always #5 clk = ~clk;

//     initial begin
//         clk = 0;
//     end

//     // Interface
//     sort_if #(8,8) sort_if_inst(clk);

//     // DUT
//     Bitonic_Sort #(
//         .IS_ASC(1),
//         .NUM_ELEM(8),
//         .SIZE_DATA(8)
//     ) DUT (
//         .i_data(sort_if_inst.i_data),
//         .o_sorted(sort_if_inst.o_sorted)
//     );

//     // Environment
//     environment #(8,8) env;

//     initial begin
//         env = new(sort_if_inst);
//         env.run();
//         #200;
//         env.scb.summary();
//         $finish;
//     end

// endmodule
`include "tb_if.sv"
`include "transaction.sv"
`include "driver.sv"
`include "monitor.sv"
`include "scoreboard.sv"

module tb_top;
    import P_INITVALUE::*; // nếu có

    parameter NUM_ELEM = 8;
    parameter SIZE_DATA = 8;

    logic clk;
    always #5 clk = ~clk;

    tb_if #(NUM_ELEM, SIZE_DATA) tb_if_inst(clk);

    // Mailboxes
    typedef transaction#(NUM_ELEM, SIZE_DATA) trans_t;
    mailbox #(trans_t) mbx_drv2mon = new();
    mailbox #(trans_t) mbx_mon2scb = new();

    // Class handles
    driver     #(NUM_ELEM, SIZE_DATA) drv;
    monitor    #(NUM_ELEM, SIZE_DATA) mon;
    scoreboard #(NUM_ELEM, SIZE_DATA) scb;

    // DUT
    top DUT(
        .i_clk(tb_if_inst.clk),
        .i_rst_n(tb_if_inst.rst_n),
        .i_data(tb_if_inst.i_data),
        .o_data(tb_if_inst.o_data)
    );

    initial begin
        clk = 0;
        tb_if_inst.rst_n = 0;
        #20 tb_if_inst.rst_n = 1;

        drv = new(tb_if_inst, mbx_drv2mon);
        mon = new(tb_if_inst, mbx_mon2scb);
        scb = new(mbx_mon2scb);

        fork
            drv.run();
            mon.run();
            scb.run();
        join_any
        $finish;
    end
endmodule
