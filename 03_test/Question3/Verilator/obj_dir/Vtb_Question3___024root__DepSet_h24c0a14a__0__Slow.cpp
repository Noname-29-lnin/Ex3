// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question3.h for the primary calling header

#include "Vtb_Question3__pch.h"
#include "Vtb_Question3___024root.h"

VL_ATTR_COLD void Vtb_Question3___024root___eval_static__TOP(Vtb_Question3___024root* vlSelf);

VL_ATTR_COLD void Vtb_Question3___024root___eval_static(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___eval_static\n"); );
    // Body
    Vtb_Question3___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb_Question3___024root___eval_final(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question3___024root___dump_triggers__stl(Vtb_Question3___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_Question3___024root___eval_phase__stl(Vtb_Question3___024root* vlSelf);

VL_ATTR_COLD void Vtb_Question3___024root___eval_settle(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_Question3___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_Question3___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question3___024root___dump_triggers__stl(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tb_Question3.DUT.Cblk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_Question3___024root___eval_triggers__stl(Vtb_Question3___024root* vlSelf);
VL_ATTR_COLD void Vtb_Question3___024root___eval_stl(Vtb_Question3___024root* vlSelf);

VL_ATTR_COLD bool Vtb_Question3___024root___eval_phase__stl(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_Question3___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_Question3___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question3___024root___dump_triggers__act(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tb_Question3.DUT.Cblk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_Question3.clk or negedge tb_Question3.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge tb_Question3.rst_n)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge tb_Question3.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question3___024root___dump_triggers__nba(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tb_Question3.DUT.Cblk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_Question3.clk or negedge tb_Question3.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge tb_Question3.rst_n)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge tb_Question3.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_Question3___024root___ctor_var_reset(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_Question3__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_Question3__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_Question3__DOT__A_tb = VL_RAND_RESET_I(32);
    vlSelf->tb_Question3__DOT__B_tb = VL_RAND_RESET_I(32);
    vlSelf->tb_Question3__DOT__Cin_tb = VL_RAND_RESET_I(1);
    vlSelf->tb_Question3__DOT__Sum_tb = VL_RAND_RESET_I(32);
    vlSelf->tb_Question3__DOT__Cout_tb = VL_RAND_RESET_I(1);
    vlSelf->tb_Question3__DOT__pass_count = 0;
    vlSelf->tb_Question3__DOT__fail_count = 0;
    vlSelf->tb_Question3__DOT__run_test__Vstatic__idx = 0;
    vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_a = VL_RAND_RESET_I(32);
    vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_b = VL_RAND_RESET_I(32);
    vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_cin = VL_RAND_RESET_I(1);
    vlSelf->tb_Question3__DOT__run_test__Vstatic__expected = VL_RAND_RESET_Q(33);
    vlSelf->tb_Question3__DOT__run_test__Vstatic__got = VL_RAND_RESET_Q(33);
    vlSelf->tb_Question3__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_Question3__DOT____Vtogcov__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_Question3__DOT____Vtogcov__A_tb = VL_RAND_RESET_I(32);
    vlSelf->tb_Question3__DOT____Vtogcov__B_tb = VL_RAND_RESET_I(32);
    vlSelf->tb_Question3__DOT____Vtogcov__Cin_tb = VL_RAND_RESET_I(1);
    vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb = VL_RAND_RESET_I(32);
    vlSelf->tb_Question3__DOT____Vtogcov__Cout_tb = VL_RAND_RESET_I(1);
    vlSelf->tb_Question3__DOT__DUT__DOT__A_r = VL_RAND_RESET_I(32);
    vlSelf->tb_Question3__DOT__DUT__DOT__B_r = VL_RAND_RESET_I(32);
    vlSelf->tb_Question3__DOT__DUT__DOT__Cin_r = VL_RAND_RESET_I(1);
    vlSelf->tb_Question3__DOT__DUT__DOT__Pblk = VL_RAND_RESET_I(8);
    vlSelf->tb_Question3__DOT__DUT__DOT__Gblk = VL_RAND_RESET_I(8);
    vlSelf->tb_Question3__DOT__DUT__DOT__Cblk = VL_RAND_RESET_I(9);
    vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c = VL_RAND_RESET_I(32);
    vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r = VL_RAND_RESET_I(32);
    vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r = VL_RAND_RESET_I(32);
    vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cin_r = VL_RAND_RESET_I(1);
    vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk = VL_RAND_RESET_I(8);
    vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk = VL_RAND_RESET_I(8);
    vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk = VL_RAND_RESET_I(9);
    vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_Question3__DOT__DUT__DOT__Cblk__0 = VL_RAND_RESET_I(9);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question3__DOT__DUT__DOT__Cblk__1 = VL_RAND_RESET_I(9);
    vlSelf->__Vtrigprevexpr___TOP__tb_Question3__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_Question3__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
