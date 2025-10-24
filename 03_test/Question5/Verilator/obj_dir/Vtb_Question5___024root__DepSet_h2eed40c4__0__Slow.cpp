// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question5.h for the primary calling header

#include "Vtb_Question5__pch.h"
#include "Vtb_Question5___024root.h"

VL_ATTR_COLD void Vtb_Question5___024root___eval_static(Vtb_Question5___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_Question5___024root___eval_final(Vtb_Question5___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question5___024root___dump_triggers__stl(Vtb_Question5___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_Question5___024root___eval_phase__stl(Vtb_Question5___024root* vlSelf);

VL_ATTR_COLD void Vtb_Question5___024root___eval_settle(Vtb_Question5___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root___eval_settle\n"); );
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
            Vtb_Question5___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_Question5___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question5___024root___dump_triggers__stl(Vtb_Question5___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tb_Question5.dut.u_adder.Cblk)\n");
    }
}
#endif  // VL_DEBUG

void Vtb_Question5___024root___act_sequent__TOP__0(Vtb_Question5___024root* vlSelf);
void Vtb_Question5___024root___act_comb__TOP__0(Vtb_Question5___024root* vlSelf);

VL_ATTR_COLD void Vtb_Question5___024root___eval_stl(Vtb_Question5___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_Question5___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_Question5___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_Question5___024root___eval_triggers__stl(Vtb_Question5___024root* vlSelf);

VL_ATTR_COLD bool Vtb_Question5___024root___eval_phase__stl(Vtb_Question5___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_Question5___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_Question5___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question5___024root___dump_triggers__act(Vtb_Question5___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tb_Question5.dut.u_adder.Cblk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question5___024root___dump_triggers__nba(Vtb_Question5___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tb_Question5.dut.u_adder.Cblk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_Question5___024root___ctor_var_reset(Vtb_Question5___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_Question5__DOT__A = VL_RAND_RESET_I(8);
    vlSelf->tb_Question5__DOT__B = VL_RAND_RESET_I(8);
    vlSelf->tb_Question5__DOT__S1 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__S0 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__Cin = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__F = VL_RAND_RESET_I(8);
    vlSelf->tb_Question5__DOT__total_tests = VL_RAND_RESET_I(32);
    vlSelf->tb_Question5__DOT__errors = VL_RAND_RESET_I(32);
    vlSelf->tb_Question5__DOT__test_count = VL_RAND_RESET_I(32);
    vlSelf->tb_Question5__DOT__test_pass = VL_RAND_RESET_I(32);
    vlSelf->tb_Question5__DOT__seed = 0;
    vlSelf->tb_Question5__DOT____Vtogcov__A = VL_RAND_RESET_I(8);
    vlSelf->tb_Question5__DOT____Vtogcov__B = VL_RAND_RESET_I(8);
    vlSelf->tb_Question5__DOT____Vtogcov__S1 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT____Vtogcov__S0 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT____Vtogcov__Cin = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT____Vtogcov__F = VL_RAND_RESET_I(8);
    vlSelf->tb_Question5__DOT____Vtogcov__Cout = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__unnamedblk1__DOT__pass_rate = 0;
    vlSelf->tb_Question5__DOT__dut__DOT__sel_op1 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__Op1 = VL_RAND_RESET_I(8);
    vlSelf->tb_Question5__DOT__dut__DOT__Op2 = VL_RAND_RESET_I(8);
    vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp = VL_RAND_RESET_I(8);
    vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__sel_op1 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1 = VL_RAND_RESET_I(8);
    vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2 = VL_RAND_RESET_I(8);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Gblk = VL_RAND_RESET_I(2);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Pblk = VL_RAND_RESET_I(2);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk = VL_RAND_RESET_I(3);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Gblk = VL_RAND_RESET_I(2);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Pblk = VL_RAND_RESET_I(2);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Cblk = VL_RAND_RESET_I(3);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Pblk = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Gblk = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__sum = VL_RAND_RESET_I(4);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__0__KET____DOT__u4__A = VL_RAND_RESET_I(4);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Pblk = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Gblk = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__sum = VL_RAND_RESET_I(4);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__1__KET____DOT__u4__A = VL_RAND_RESET_I(4);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g = VL_RAND_RESET_I(4);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p = VL_RAND_RESET_I(4);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c3 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__A = VL_RAND_RESET_I(4);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__Pblk = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__Gblk = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__sum = VL_RAND_RESET_I(4);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__g = VL_RAND_RESET_I(4);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__p = VL_RAND_RESET_I(4);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__c1 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__c2 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__c3 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g = VL_RAND_RESET_I(4);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p = VL_RAND_RESET_I(4);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c3 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__A = VL_RAND_RESET_I(4);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__Pblk = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__Gblk = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__sum = VL_RAND_RESET_I(4);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__g = VL_RAND_RESET_I(4);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__p = VL_RAND_RESET_I(4);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__c1 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__c2 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__c3 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_8 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk__0 = VL_RAND_RESET_I(3);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk__1 = VL_RAND_RESET_I(3);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
