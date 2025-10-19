// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question2.h for the primary calling header

#include "Vtb_Question2__pch.h"
#include "Vtb_Question2_LOPD_16bit.h"
#include "Vtb_Question2__Syms.h"

VL_ATTR_COLD void Vtb_Question2_LOPD_16bit___configure_coverage(Vtb_Question2_LOPD_16bit* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_Question2_LOPD_16bit___configure_coverage\n"); );
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, "", "v_toggle/LOPD_16bit", "i_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, "", "v_toggle/LOPD_16bit", "i_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, "", "v_toggle/LOPD_16bit", "i_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, "", "v_toggle/LOPD_16bit", "i_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, "", "v_toggle/LOPD_16bit", "i_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, "", "v_toggle/LOPD_16bit", "i_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, "", "v_toggle/LOPD_16bit", "i_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, "", "v_toggle/LOPD_16bit", "i_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, "", "v_toggle/LOPD_16bit", "i_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, "", "v_toggle/LOPD_16bit", "i_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, "", "v_toggle/LOPD_16bit", "i_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, "", "v_toggle/LOPD_16bit", "i_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, "", "v_toggle/LOPD_16bit", "i_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, "", "v_toggle/LOPD_16bit", "i_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, "", "v_toggle/LOPD_16bit", "i_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, "", "v_toggle/LOPD_16bit", "i_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 3, 29, "", "v_toggle/LOPD_16bit", "o_pos_one[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 3, 29, "", "v_toggle/LOPD_16bit", "o_pos_one[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 3, 29, "", "v_toggle/LOPD_16bit", "o_pos_one[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 3, 29, "", "v_toggle/LOPD_16bit", "o_pos_one[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 4, 29, "", "v_toggle/LOPD_16bit", "o_zero_flag", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 11, 21, "", "v_toggle/LOPD_16bit", "w_pos_one_0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 11, 21, "", "v_toggle/LOPD_16bit", "w_pos_one_0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 11, 21, "", "v_toggle/LOPD_16bit", "w_pos_one_0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 12, 21, "", "v_toggle/LOPD_16bit", "w_zero_flag_0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 21, 21, "", "v_toggle/LOPD_16bit", "w_pos_one_1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 21, 21, "", "v_toggle/LOPD_16bit", "w_pos_one_1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 21, 21, "", "v_toggle/LOPD_16bit", "w_pos_one_1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 22, 21, "", "v_toggle/LOPD_16bit", "w_zero_flag_1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "i_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "i_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "i_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "i_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "i_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "i_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "i_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "i_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 3, 29, ".LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "o_pos_one[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 3, 29, ".LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "o_pos_one[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 3, 29, ".LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "o_pos_one[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 4, 29, ".LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "o_zero_flag", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 10, 7, ".LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "w_zero_flag_0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 11, 13, ".LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "w_pos_one_0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 11, 13, ".LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "w_pos_one_0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 21, 7, ".LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "w_zero_flag_1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 22, 13, ".LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "w_pos_one_1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 22, 13, ".LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "w_pos_one_1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".LOPD_8bit_unit_0.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "i_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".LOPD_8bit_unit_0.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "i_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".LOPD_8bit_unit_0.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "i_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".LOPD_8bit_unit_0.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "i_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 3, 29, ".LOPD_8bit_unit_0.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "o_pos_one[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 3, 29, ".LOPD_8bit_unit_0.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "o_pos_one[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 4, 29, ".LOPD_8bit_unit_0.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "o_zero_flag", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".LOPD_8bit_unit_0.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "i_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".LOPD_8bit_unit_0.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "i_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".LOPD_8bit_unit_0.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "i_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".LOPD_8bit_unit_0.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "i_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 3, 29, ".LOPD_8bit_unit_0.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "o_pos_one[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 3, 29, ".LOPD_8bit_unit_0.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "o_pos_one[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 4, 29, ".LOPD_8bit_unit_0.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "o_zero_flag", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "i_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "i_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "i_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "i_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "i_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "i_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "i_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "i_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 3, 29, ".LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "o_pos_one[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 3, 29, ".LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "o_pos_one[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 3, 29, ".LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "o_pos_one[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 4, 29, ".LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "o_zero_flag", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 10, 7, ".LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "w_zero_flag_0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 11, 13, ".LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "w_pos_one_0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 11, 13, ".LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "w_pos_one_0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 21, 7, ".LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "w_zero_flag_1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 22, 13, ".LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "w_pos_one_1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 22, 13, ".LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "w_pos_one_1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".LOPD_8bit_unit_1.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "i_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".LOPD_8bit_unit_1.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "i_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".LOPD_8bit_unit_1.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "i_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".LOPD_8bit_unit_1.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "i_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 3, 29, ".LOPD_8bit_unit_1.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "o_pos_one[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 3, 29, ".LOPD_8bit_unit_1.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "o_pos_one[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 4, 29, ".LOPD_8bit_unit_1.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "o_zero_flag", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".LOPD_8bit_unit_1.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "i_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".LOPD_8bit_unit_1.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "i_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".LOPD_8bit_unit_1.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "i_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".LOPD_8bit_unit_1.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "i_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 3, 29, ".LOPD_8bit_unit_1.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "o_pos_one[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 3, 29, ".LOPD_8bit_unit_1.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "o_pos_one[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 4, 29, ".LOPD_8bit_unit_1.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "o_zero_flag", "");
}
