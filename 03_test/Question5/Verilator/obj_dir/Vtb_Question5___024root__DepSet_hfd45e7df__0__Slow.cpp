// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question5.h for the primary calling header

#include "Vtb_Question5__pch.h"
#include "Vtb_Question5__Syms.h"
#include "Vtb_Question5___024root.h"

VL_ATTR_COLD void Vtb_Question5___024root___eval_initial__TOP(Vtb_Question5___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x696f6e35U;
    __Vtemp_1[2U] = 0x75657374U;
    __Vtemp_1[3U] = 0x74625f51U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    ++(vlSymsp->__Vcoverage[28]);
    ++(vlSymsp->__Vcoverage[80]);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question5___024root___dump_triggers__stl(Vtb_Question5___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_Question5___024root___eval_triggers__stl(Vtb_Question5___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk__0)));
    vlSelf->__Vtrigprevexpr___TOP__tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk__0 
        = vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_Question5___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtb_Question5___024root___configure_coverage(Vtb_Question5___024root* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root___configure_coverage\n"); );
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 7, 17, ".tb_Question5", "v_toggle/tb_Question5", "A[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 7, 17, ".tb_Question5", "v_toggle/tb_Question5", "A[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 7, 17, ".tb_Question5", "v_toggle/tb_Question5", "A[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 7, 17, ".tb_Question5", "v_toggle/tb_Question5", "A[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 7, 17, ".tb_Question5", "v_toggle/tb_Question5", "A[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 7, 17, ".tb_Question5", "v_toggle/tb_Question5", "A[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 7, 17, ".tb_Question5", "v_toggle/tb_Question5", "A[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 7, 17, ".tb_Question5", "v_toggle/tb_Question5", "A[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 7, 20, ".tb_Question5", "v_toggle/tb_Question5", "B[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 7, 20, ".tb_Question5", "v_toggle/tb_Question5", "B[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 7, 20, ".tb_Question5", "v_toggle/tb_Question5", "B[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 7, 20, ".tb_Question5", "v_toggle/tb_Question5", "B[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 7, 20, ".tb_Question5", "v_toggle/tb_Question5", "B[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 7, 20, ".tb_Question5", "v_toggle/tb_Question5", "B[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 7, 20, ".tb_Question5", "v_toggle/tb_Question5", "B[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 7, 20, ".tb_Question5", "v_toggle/tb_Question5", "B[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 8, 11, ".tb_Question5", "v_toggle/tb_Question5", "S1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 8, 15, ".tb_Question5", "v_toggle/tb_Question5", "S0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 8, 19, ".tb_Question5", "v_toggle/tb_Question5", "Cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 9, 17, ".tb_Question5", "v_toggle/tb_Question5", "F[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 9, 17, ".tb_Question5", "v_toggle/tb_Question5", "F[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 9, 17, ".tb_Question5", "v_toggle/tb_Question5", "F[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 9, 17, ".tb_Question5", "v_toggle/tb_Question5", "F[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 9, 17, ".tb_Question5", "v_toggle/tb_Question5", "F[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 9, 17, ".tb_Question5", "v_toggle/tb_Question5", "F[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 9, 17, ".tb_Question5", "v_toggle/tb_Question5", "F[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 9, 17, ".tb_Question5", "v_toggle/tb_Question5", "F[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 10, 11, ".tb_Question5", "v_toggle/tb_Question5", "Cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 32, 5, ".tb_Question5", "v_line/tb_Question5", "block", "32-34");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 58, 9, ".tb_Question5", "v_branch/tb_Question5", "if", "58-59");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 58, 10, ".tb_Question5", "v_branch/tb_Question5", "else", "61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 65, 18, ".tb_Question5", "v_line/tb_Question5", "case", "65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 66, 18, ".tb_Question5", "v_line/tb_Question5", "case", "66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 67, 18, ".tb_Question5", "v_line/tb_Question5", "case", "67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 68, 18, ".tb_Question5", "v_line/tb_Question5", "case", "68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 69, 13, ".tb_Question5", "v_line/tb_Question5", "case", "69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 44, 37, ".tb_Question5", "v_line/tb_Question5", "block", "44,54-55,64,72-73");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 107, 9, ".tb_Question5", "v_branch/tb_Question5", "if", "107-109");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 107, 10, ".tb_Question5", "v_branch/tb_Question5", "else", "110-112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 121, 9, ".tb_Question5", "v_branch/tb_Question5", "if", "121-123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 121, 10, ".tb_Question5", "v_branch/tb_Question5", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 80, 20, ".tb_Question5", "v_line/tb_Question5", "block", "80,92-98,100-102,104-105,116-119,125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 157, 21, ".tb_Question5", "v_line/tb_Question5", "block", "157-158");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 156, 17, ".tb_Question5", "v_line/tb_Question5", "block", "156-157");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 155, 13, ".tb_Question5", "v_line/tb_Question5", "block", "155-156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 154, 9, ".tb_Question5", "v_line/tb_Question5", "block", "154-155");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 171, 9, ".tb_Question5", "v_line/tb_Question5", "block", "171-180");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 132, 20, ".tb_Question5", "v_line/tb_Question5", "block", "132,138-142,145-151,153-154,165-166,169-170");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 209, 9, ".tb_Question5", "v_line/tb_Question5", "if", "209-211");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 188, 5, ".tb_Question5", "v_line/tb_Question5", "block", "188,191-195,197,200-207");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 2, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "A[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 2, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "A[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 2, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "A[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 2, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "A[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 2, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "A[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 2, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "A[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 2, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "A[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 2, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "A[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 3, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "B[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 3, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "B[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 3, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "B[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 3, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "B[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 3, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "B[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 3, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "B[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 3, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "B[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 3, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "B[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 4, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "S1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 5, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "S0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 6, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "Cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 7, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "F[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 7, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "F[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 7, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "F[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 7, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "F[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 7, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "F[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 7, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "F[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 7, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "F[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 7, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "F[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 8, 24, ".tb_Question5.dut", "v_toggle/alu_8bit", "Cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 11, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "B_comp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 11, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "B_comp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 11, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "B_comp[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 11, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "B_comp[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 11, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "B_comp[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 11, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "B_comp[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 11, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "B_comp[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 11, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "B_comp[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 14, 12, ".tb_Question5.dut", "v_toggle/alu_8bit", "sel_op1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 17, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "Op1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 17, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "Op1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 17, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "Op1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 17, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "Op1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 17, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "Op1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 17, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "Op1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 17, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "Op1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 17, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "Op1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 26, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "Op2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 26, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "Op2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 26, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "Op2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 26, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "Op2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 26, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "Op2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 26, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "Op2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 26, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "Op2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 26, 17, ".tb_Question5.dut", "v_toggle/alu_8bit", "Op2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 29, 18, ".tb_Question5.dut", "v_line/alu_8bit", "case", "29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 30, 18, ".tb_Question5.dut", "v_line/alu_8bit", "case", "30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 31, 18, ".tb_Question5.dut", "v_line/alu_8bit", "case", "31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 32, 18, ".tb_Question5.dut", "v_line/alu_8bit", "case", "32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 33, 13, ".tb_Question5.dut", "v_line/alu_8bit", "case", "33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/alu_8bit.sv", 27, 5, ".tb_Question5.dut", "v_line/alu_8bit", "block", "27-28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 2, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "A[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 2, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "A[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 2, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "A[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 2, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "A[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 2, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "A[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 2, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "A[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 2, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "A[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 2, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "A[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 3, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "B[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 3, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "B[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 3, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "B[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 3, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "B[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 3, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "B[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 3, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "B[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 3, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "B[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 3, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "B[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 4, 25, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "Cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 5, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "Sum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 5, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "Sum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 5, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "Sum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 5, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "Sum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 5, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "Sum[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 5, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "Sum[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 5, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "Sum[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 5, 24, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "Sum[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 6, 25, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "Cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 8, 17, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "Gblk[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 8, 17, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "Gblk[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 8, 23, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "Pblk[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 8, 23, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "Pblk[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 9, 17, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "Cblk[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 9, 17, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "Cblk[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_8bit.sv", 9, 17, ".tb_Question5.dut.u_adder", "v_toggle/cla_8bit", "Cblk[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 2, 23, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "A[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 2, 23, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "A[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 2, 23, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "A[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 2, 23, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "A[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 3, 21, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "B[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 3, 21, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "B[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 3, 21, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "B[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 3, 21, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "B[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 4, 16, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 5, 16, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 5, 21, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "Pblk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 5, 26, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "Gblk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 6, 21, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "sum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 6, 21, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "sum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 6, 21, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "sum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 6, 21, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "sum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 8, 15, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "g[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 8, 15, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "g[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 8, 15, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "g[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 8, 15, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "g[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 8, 17, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "p[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 8, 17, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "p[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 8, 17, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "p[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 8, 17, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "p[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 12, 9, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "c1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 12, 12, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "c2", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 12, 15, ".tb_Question5.dut.u_adder.BLK[0].u4", "v_toggle/cla_4bit", "c3", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 2, 23, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "A[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 2, 23, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "A[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 2, 23, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "A[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 2, 23, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "A[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 3, 21, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "B[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 3, 21, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "B[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 3, 21, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "B[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 3, 21, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "B[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 4, 16, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 5, 16, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 5, 21, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "Pblk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 5, 26, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "Gblk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 6, 21, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "sum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 6, 21, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "sum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 6, 21, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "sum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 6, 21, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "sum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 8, 15, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "g[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 8, 15, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "g[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 8, 15, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "g[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 8, 15, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "g[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 8, 17, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "p[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 8, 17, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "p[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 8, 17, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "p[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 8, 17, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "p[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 12, 9, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "c1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 12, 12, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "c2", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question5/cla_4bit.sv", 12, 15, ".tb_Question5.dut.u_adder.BLK[1].u4", "v_toggle/cla_4bit", "c3", "");
}
