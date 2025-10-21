// //==========================
// // transaction.sv
// //==========================
// class transaction #(parameter NUM_ELEM=8, SIZE_DATA=8);
//     rand logic [(NUM_ELEM*SIZE_DATA)-1:0] data_in;
//          logic [(NUM_ELEM*SIZE_DATA)-1:0] data_out_dut;
//          logic [(NUM_ELEM*SIZE_DATA)-1:0] data_out_ref;
//          bit is_pass;
//          string type_test;

//     // Sinh dữ liệu ngẫu nhiên
//     function void randomize_data();
//         logic [SIZE_DATA-1:0] arr [0:NUM_ELEM-1];
//         for (int i=0; i<NUM_ELEM; i++) arr[i] = $urandom_range(0, 2**SIZE_DATA-1);
//         for (int i=0; i<NUM_ELEM; i++) data_in[i*SIZE_DATA +: SIZE_DATA] = arr[i];
//     endfunction

//     // Reference Model (Bubble Sort)
//     function automatic logic [SIZE_DATA*NUM_ELEM-1:0] f_ref_sorted(int f_is_asc, input logic [SIZE_DATA*NUM_ELEM-1:0] f_i_data);
//         logic [SIZE_DATA-1:0] arr [0:NUM_ELEM-1];
//         logic [SIZE_DATA-1:0] temp;
//         for (int i=0; i<NUM_ELEM; i++) arr[i] = f_i_data[i*SIZE_DATA +: SIZE_DATA];
//         for (int i=0; i<NUM_ELEM-1; i++) begin
//             for (int j=0; j<NUM_ELEM-1-i; j++) begin
//                 if (f_is_asc ? arr[j] > arr[j+1] : arr[j] < arr[j+1]) begin
//                     temp = arr[j];
//                     arr[j] = arr[j+1];
//                     arr[j+1] = temp;
//                 end
//             end
//         end
//         for (int i=0; i<NUM_ELEM; i++)
//             f_ref_sorted[i*SIZE_DATA +: SIZE_DATA] = arr[i];
//     endfunction
// endclass
class transaction #(parameter NUM_ELEM=8, SIZE_DATA=8);
    rand bit [SIZE_DATA-1:0] data[NUM_ELEM];
    bit [SIZE_DATA-1:0] expected[NUM_ELEM];

    function void display(string tag);
        $display("[%s] data = %p, expected = %p", tag, data, expected);
    endfunction
endclass
