//==========================
// environment.sv
//==========================
class environment #(parameter NUM_ELEM=8, SIZE_DATA=8);
    driver     #(NUM_ELEM,SIZE_DATA) drv;
    monitor    #(NUM_ELEM,SIZE_DATA) mon;
    scoreboard #(NUM_ELEM,SIZE_DATA) scb;

    mailbox #(transaction#(NUM_ELEM,SIZE_DATA)) mbx_drv2mon;
    mailbox #(transaction#(NUM_ELEM,SIZE_DATA)) mbx_mon2scb;

    virtual sort_if #(NUM_ELEM,SIZE_DATA) vif;

    function new(virtual sort_if #(NUM_ELEM,SIZE_DATA) vif);
        this.vif = vif;
        mbx_drv2mon = new();
        mbx_mon2scb = new();

        drv = new(vif, mbx_drv2mon);
        mon = new(mbx_drv2mon, mbx_mon2scb);
        scb = new(mbx_mon2scb);
    endfunction

    task run();
        fork
            drv.run();
            mon.run();
            scb.run();
        join_none
    endtask
endclass
