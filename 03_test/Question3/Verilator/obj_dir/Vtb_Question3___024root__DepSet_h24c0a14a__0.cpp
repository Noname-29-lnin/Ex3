// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question3.h for the primary calling header

#include "Vtb_Question3__pch.h"
#include "Vtb_Question3___024root.h"

VL_ATTR_COLD void Vtb_Question3___024root___eval_initial__TOP(Vtb_Question3___024root* vlSelf);
VlCoroutine Vtb_Question3___024root___eval_initial__TOP__Vtiming__0(Vtb_Question3___024root* vlSelf);
VlCoroutine Vtb_Question3___024root___eval_initial__TOP__Vtiming__1(Vtb_Question3___024root* vlSelf);
VlCoroutine Vtb_Question3___024root___eval_initial__TOP__Vtiming__2(Vtb_Question3___024root* vlSelf);

void Vtb_Question3___024root___eval_initial(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___eval_initial\n"); );
    // Body
    Vtb_Question3___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_Question3___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_Question3___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_Question3___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_Question3__DOT__DUT__DOT__Cblk__0 
        = vlSelf->tb_Question3__DOT__DUT__DOT__Cblk;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question3__DOT__DUT__DOT__Cblk__1 
        = vlSelf->tb_Question3__DOT__DUT__DOT__Cblk;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question3__DOT__clk__0 
        = vlSelf->tb_Question3__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question3__DOT__rst_n__0 
        = vlSelf->tb_Question3__DOT__rst_n;
}

void Vtb_Question3___024root___timing_resume(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___timing_resume\n"); );
    // Body
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h67325541__0.resume("@(posedge tb_Question3.rst_n)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hb4c71d24__0.resume("@(posedge tb_Question3.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_Question3___024root___timing_commit(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___timing_commit\n"); );
    // Body
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h67325541__0.commit("@(posedge tb_Question3.rst_n)");
    }
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hb4c71d24__0.commit("@(posedge tb_Question3.clk)");
    }
}

void Vtb_Question3___024root___eval_triggers__act(Vtb_Question3___024root* vlSelf);
void Vtb_Question3___024root___eval_act(Vtb_Question3___024root* vlSelf);

bool Vtb_Question3___024root___eval_phase__act(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_Question3___024root___eval_triggers__act(vlSelf);
    Vtb_Question3___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_Question3___024root___timing_resume(vlSelf);
        Vtb_Question3___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtb_Question3___024root___eval_nba(Vtb_Question3___024root* vlSelf);

bool Vtb_Question3___024root___eval_phase__nba(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_Question3___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question3___024root___dump_triggers__nba(Vtb_Question3___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question3___024root___dump_triggers__act(Vtb_Question3___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_Question3___024root___eval(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_Question3___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_Question3___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_Question3___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_Question3___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_Question3___024root___eval_debug_assertions(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
