module div_3_tb_estimate();

    parameter TEST_LOOP = 10000;
    parameter real ESTIMATE = (2.0**-2) + (2.0**-4) + (2.0**-6) + (2.0**-8);

    int value_real;

    logic [31:0] logic_value, logic_result;

    logic [31:0] operator_div, deviation;

    int a = 0 ;
    int b = 0 ; 

    int  value_begin;
    shortreal trans_value;

    div_3_estimate dut_2 (
        .i_a     (logic_value),
        .o_result(logic_result)
    );

    initial begin 
        $shm_open("waves.shm");
        $shm_probe("ASM")     ;
    end

    initial begin
        value_begin  = 32'h7FFF_FFFF;
        logic_value  = value_begin;
        trans_value  = $itor(value_begin);
        value_real   = int'(trans_value * ESTIMATE);
         #10
        $display("TIME: %7t INPUT: %11d, OUTPUT: %11d, CAL_REAL_TO_INT: %11d, Deviation %11d", $time, $signed(logic_value), $signed(logic_result), $signed(value_real), $signed(logic_result - value_real));
       

        value_begin  = 32'hFFFF_FFFF;
        logic_value  = value_begin;
        trans_value  = $itor(value_begin);
        value_real   = int'(trans_value * ESTIMATE);
         #10
        $display("TIME: %7t INPUT: %11d, OUTPUT: %11d, CAL_REAL_TO_INT: %11d, Deviation %11d", $time, $signed(logic_value), $signed(logic_result), $signed(value_real), $signed(logic_result - value_real));

        for(int i = 0; i < TEST_LOOP; i++) begin
            value_begin  = $urandom_range(0, 2**32 - 1);
            logic_value  = value_begin;
            trans_value  = $itor(value_begin);
            value_real   = int'(trans_value * ESTIMATE);
            #10 
            find_max(logic_result - value_real); 
            find_min(logic_result - value_real); 
            $display("TIME: %7t INPUT: %11d, OUTPUT: %11d, CAL_REAL_TO_INT: %11d, Deviation %11d", $time, $signed(logic_value), $signed(logic_result), $signed(value_real), $signed(logic_result - value_real));  
        end
        
        $display("MAX Deviation = %11d, MIN Deviation = %11d", a, b);

        $finish;
    end

    task automatic find_max(
        input int value
    );

    a = (a <= value) ? value : a;

    endtask

    task automatic find_min(
        input int value
    );

    b = (b > value) ? value : b;

    endtask

endmodule