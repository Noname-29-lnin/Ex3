package P_INITVALUE;
    parameter IS_ASC    = 1;      // 1 = Ascending, 0 = Descending
    parameter NUM_ELEM  = 8;
    parameter SIZE_DATA = 8;

    task automatic tsk_clock_gen(ref logic i_clk);
        begin
            i_clk = 1'b1;
            forever #(5) i_clk = !i_clk;
        end
    endtask

    // TASK: Reset is low active for a period of "RESETPERIOD"
    task automatic tsk_reset(ref logic i_reset);
    begin
        i_reset = 1'b0;
        #50 i_reset = 1'b1;
    end
    endtask

endpackage
