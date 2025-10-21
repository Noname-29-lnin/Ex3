// //==========================
// // monitor.sv
// //==========================
// class monitor #(parameter NUM_ELEM=8, SIZE_DATA=8);
//     mailbox #(transaction#(NUM_ELEM,SIZE_DATA)) mbx_drv2mon;
//     mailbox #(transaction#(NUM_ELEM,SIZE_DATA)) mbx_mon2scb;

//     function new(mailbox #(transaction#(NUM_ELEM,SIZE_DATA)) mbx_in,
//                  mailbox #(transaction#(NUM_ELEM,SIZE_DATA)) mbx_out);
//         this.mbx_drv2mon = mbx_in;
//         this.mbx_mon2scb = mbx_out;
//     endfunction

//     task run();
//         transaction#(NUM_ELEM,SIZE_DATA) tr;
//         forever begin
//             mbx_drv2mon.get(tr);
//             $display("[TIME: %5t] [%s] - DUT: %16h, Expect: %16h",
//                      $time, tr.type_test, tr.data_out_dut, tr.data_out_ref);
//             mbx_mon2scb.put(tr);
//         end
//     endtask
// endclass
class monitor #(parameter NUM_ELEM=8, SIZE_DATA=8);
    typedef transaction#(NUM_ELEM, SIZE_DATA) trans_t;
    virtual tb_if #(NUM_ELEM, SIZE_DATA) vif;
    mailbox #(trans_t) mbx_mon2scb;

    function new(virtual tb_if #(NUM_ELEM, SIZE_DATA) vif,
                 mailbox #(trans_t) mbx);
        this.vif = vif;
        this.mbx_mon2scb = mbx;
    endfunction

    task run();
        trans_t tr = new();
        forever begin
            @(posedge vif.clk);
            tr.data = {<<{vif.o_data}};
            mbx_mon2scb.put(tr);
            tr.display("Monitor");
        end
    endtask
endclass
