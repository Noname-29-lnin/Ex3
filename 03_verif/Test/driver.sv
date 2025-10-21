// //==========================
// // driver.sv
// //==========================
// class driver #(parameter NUM_ELEM=8, SIZE_DATA=8);
//     virtual sort_if #(NUM_ELEM, SIZE_DATA) vif;
//     mailbox #(transaction#(NUM_ELEM,SIZE_DATA)) mbx_drv2mon;

//     function new(virtual sort_if #(NUM_ELEM,SIZE_DATA) vif,
//                  mailbox #(transaction#(NUM_ELEM,SIZE_DATA)) mbx);
//         this.vif = vif;
//         this.mbx_drv2mon = mbx;
//     endfunction

//     task run();
//         transaction#(NUM_ELEM,SIZE_DATA) tr;
//         forever begin
//             tr = new();
//             tr.randomize_data();
//             tr.data_out_ref = tr.f_ref_sorted(1, tr.data_in); // IS_ASC = 1
//             tr.type_test = "RANDOM_SORT";

//             // Apply input
//             vif.i_data <= tr.data_in;
//             @(posedge vif.clk); // wait for DUT to process
//             tr.data_out_dut = vif.o_sorted;

//             mbx_drv2mon.put(tr);
//         end
//     endtask
// endclass
`include "transaction.sv"

class driver #(parameter NUM_ELEM=8, SIZE_DATA=8);
    typedef transaction#(NUM_ELEM, SIZE_DATA) trans_t;
    virtual tb_if #(NUM_ELEM, SIZE_DATA) vif;
    mailbox #(trans_t) mbx_drv2mon;

    function new(virtual tb_if #(NUM_ELEM, SIZE_DATA) vif,
                 mailbox #(trans_t) mbx);
        this.vif = vif;
        this.mbx_drv2mon = mbx;
    endfunction

    task run();
        trans_t tr;
        tr = new();
        foreach (tr.data[i])
            tr.data[i] = $urandom_range(0, 255);
        tr.display("Driver");
        mbx_drv2mon.put(tr);
        // Gửi đến DUT
        vif.i_data = {>>{tr.data}};
        @(posedge vif.clk);
    endtask
endclass
