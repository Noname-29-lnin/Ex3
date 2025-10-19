module PPBC_black_cell(
    input logic [1:0]       i_data_a    ,
    input logic [1:0]       i_data_b    ,
    output logic            o_max       ,
    output logic            o_min        
);

assign o_max = (i_data_a[1])&(~i_data_b[1]) | ~(i_data_a[1]&(~i_data_b[1]) | (~i_data_a[1]&i_data_b[1])) & (i_data_a[0] & (~i_data_b[0]));
assign o_min = (i_data_b[1])&(~i_data_a[1]) | ~(i_data_a[1]&(~i_data_b[1]) | (~i_data_a[1]&i_data_b[1])) & (i_data_b[0] & (~i_data_a[0]));

endmodule
