//      // verilator_coverage annotation
        module Question2_unit #(
            parameter SIZE_DATA     = 24 ,
            parameter SIZE_LOP      = 5
        )(
 002073     input logic                     i_clk   ,
%000001     input logic                     i_rst_n ,
%000002     input logic [SIZE_DATA-1:0]     i_addr  ,
 000376     input logic [SIZE_DATA-1:0]     i_data  ,
%000002     output logic [SIZE_DATA-1:0]    o_addr  ,
 000282     output logic [SIZE_LOP-1:0]     o_one_position,
%000002     output logic                    o_zero_flag    
        );
        
        // logic [SIZE_DATA-1:0] w_i_addr, w_i_data;
%000000 logic [SIZE_DATA-1:0] w_o_addr;
 000282 logic [SIZE_LOP-1:0] w_one_position;
%000002 logic w_zero_flag;
 001037 always_ff @( posedge i_clk or negedge i_rst_n ) begin : flipflop_proc
%000002     if(~i_rst_n) begin
                // w_i_addr        <= '0;
                // w_i_data        <= '0;
%000002         o_addr          <= '0;
%000002         o_one_position  <= '0;
%000002         o_zero_flag     <= '0;
 001035     end else begin
                // w_i_addr        <= i_addr;
                // w_i_data        <= i_data;
 001035         o_addr          <= i_addr;
 001035         o_one_position  <= w_one_position;
 001035         o_zero_flag     <= w_zero_flag;
            end
        end
        
        // assign w_o_addr = w_i_addr;
        
        Question2 #(
            .SIZE_DATA      (24    ),
            .SIZE_LOPD      (5     ) 
        ) DUT (
            .i_data         (i_data),
            .o_one_position (w_one_position),
            .o_zero_flag    (w_zero_flag) 
        );
        
        endmodule
        
