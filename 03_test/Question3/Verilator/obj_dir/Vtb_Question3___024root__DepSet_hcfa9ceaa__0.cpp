// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question3.h for the primary calling header

#include "Vtb_Question3__pch.h"
#include "Vtb_Question3__Syms.h"
#include "Vtb_Question3___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_Question3___024root___eval_initial__TOP__Vtiming__0(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_Question3__DOT__rst_n = 0U;
    vlSelf->tb_Question3__DOT__A_tb = 0U;
    vlSelf->tb_Question3__DOT__B_tb = 0U;
    vlSelf->tb_Question3__DOT__Cin_tb = 0U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 
                                       43);
    vlSelf->tb_Question3__DOT__rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 
                                       45);
    ++(vlSymsp->__Vcoverage[103]);
}

VL_INLINE_OPT VlCoroutine Vtb_Question3___024root___eval_initial__TOP__Vtiming__1(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    co_await vlSelf->__VtrigSched_h67325541__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question3.rst_n)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4c71d24__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question3.clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 
                                                       100);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=== Start run_test (100 samples) ===\n",0);
    vlSelf->tb_Question3__DOT__run_test__Vstatic__idx = 0U;
    while (VL_GTS_III(32, 0x64U, vlSelf->tb_Question3__DOT__run_test__Vstatic__idx)) {
        vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_a 
            = VL_RANDOM_I();
        vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_b 
            = VL_RANDOM_I();
        vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_cin 
            = (1U & VL_URANDOM_RANGE_I(0U, 1U));
        vlSelf->tb_Question3__DOT__A_tb = vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_a;
        vlSelf->tb_Question3__DOT__B_tb = vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_b;
        vlSelf->tb_Question3__DOT__Cin_tb = vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_cin;
        co_await vlSelf->__VtrigSched_hb4c71d24__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_Question3.clk)", 
                                                           "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 
                                                           70);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VtrigSched_hb4c71d24__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_Question3.clk)", 
                                                           "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 
                                                           71);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 
                                           72);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_Question3__DOT__run_test__Vstatic__expected 
            = (0x1ffffffffULL & (((QData)((IData)(vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_a)) 
                                  + (QData)((IData)(vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_b))) 
                                 + (QData)((IData)(vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_cin))));
        vlSelf->tb_Question3__DOT__run_test__Vstatic__got 
            = (((QData)((IData)(vlSelf->tb_Question3__DOT__Cout_tb)) 
                << 0x20U) | (QData)((IData)(vlSelf->tb_Question3__DOT__Sum_tb)));
        if ((vlSelf->tb_Question3__DOT__run_test__Vstatic__got 
             == vlSelf->tb_Question3__DOT__run_test__Vstatic__expected)) {
            vlSelf->tb_Question3__DOT__pass_count = 
                ((IData)(1U) + vlSelf->tb_Question3__DOT__pass_count);
            VL_WRITEF_NX("PASS [%0d] A=0x%08x B=0x%08x Cin=%0# => {Cout,Sum}=0x%09x\n",0,
                         32,vlSelf->tb_Question3__DOT__run_test__Vstatic__idx,
                         32,vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_a,
                         32,vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_b,
                         1,(IData)(vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_cin),
                         33,vlSelf->tb_Question3__DOT__run_test__Vstatic__got);
            ++(vlSymsp->__Vcoverage[106]);
        } else {
            vlSelf->tb_Question3__DOT__fail_count = 
                ((IData)(1U) + vlSelf->tb_Question3__DOT__fail_count);
            VL_WRITEF_NX("FAIL [%0d] A=0x%08x B=0x%08x Cin=%0# => got=0x%09x (exp=0x%09x)\n",0,
                         32,vlSelf->tb_Question3__DOT__run_test__Vstatic__idx,
                         32,vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_a,
                         32,vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_b,
                         1,(IData)(vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_cin),
                         33,vlSelf->tb_Question3__DOT__run_test__Vstatic__got,
                         33,vlSelf->tb_Question3__DOT__run_test__Vstatic__expected);
            ++(vlSymsp->__Vcoverage[107]);
        }
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->tb_Question3__DOT__run_test__Vstatic__idx 
            = ((IData)(1U) + vlSelf->tb_Question3__DOT__run_test__Vstatic__idx);
    }
    VL_WRITEF_NX("=== Test summary ===\nTotal samples = %0d\nPASS = %0d\nFAIL = %0d\n=== End run_test ===\n",0,
                 32,(vlSelf->tb_Question3__DOT__pass_count 
                     + vlSelf->tb_Question3__DOT__fail_count),
                 32,vlSelf->tb_Question3__DOT__pass_count,
                 32,vlSelf->tb_Question3__DOT__fail_count);
    ++(vlSymsp->__Vcoverage[109]);
    VL_FINISH_MT("/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 102, "");
    ++(vlSymsp->__Vcoverage[110]);
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_Question3___024root___eval_initial__TOP__Vtiming__2(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 
                                           25);
        vlSelf->tb_Question3__DOT__clk = (1U & (~ (IData)(vlSelf->tb_Question3__DOT__clk)));
        ++(vlSymsp->__Vcoverage[101]);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question3___024root___dump_triggers__act(Vtb_Question3___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_Question3___024root___eval_triggers__act(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Question3__DOT__DUT__DOT__Cblk__1)));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->tb_Question3__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Question3__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->tb_Question3__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Question3__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->tb_Question3__DOT__rst_n) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Question3__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->tb_Question3__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Question3__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_Question3__DOT__DUT__DOT__Cblk__1 
        = vlSelf->tb_Question3__DOT__DUT__DOT__Cblk;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question3__DOT__clk__0 
        = vlSelf->tb_Question3__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question3__DOT__rst_n__0 
        = vlSelf->tb_Question3__DOT__rst_n;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_Question3___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtb_Question3___024root___act_sequent__TOP__0(Vtb_Question3___024root* vlSelf);
void Vtb_Question3___024root___act_comb__TOP__0(Vtb_Question3___024root* vlSelf);
void Vtb_Question3___024root___act_sequent__TOP__1(Vtb_Question3___024root* vlSelf);
void Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
void Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
void Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
void Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
void Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
void Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
void Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
void Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
void Vtb_Question3___024root___act_sequent__TOP__2(Vtb_Question3___024root* vlSelf);

void Vtb_Question3___024root___eval_act(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question3___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x1cULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question3___024root___act_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question3___024root___act_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4));
        Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4));
        Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4));
        Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4));
        Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4));
        Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4));
        Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4));
        Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4));
        Vtb_Question3___024root___act_sequent__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_Question3___024root___act_sequent__TOP__0(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___act_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->tb_Question3__DOT__clk) ^ (IData)(vlSelf->tb_Question3__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->tb_Question3__DOT____Vtogcov__clk = vlSelf->tb_Question3__DOT__clk;
    }
    if (((IData)(vlSelf->tb_Question3__DOT__rst_n) 
         ^ (IData)(vlSelf->tb_Question3__DOT____Vtogcov__rst_n))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->tb_Question3__DOT____Vtogcov__rst_n 
            = vlSelf->tb_Question3__DOT__rst_n;
    }
}

VL_INLINE_OPT void Vtb_Question3___024root___act_comb__TOP__0(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___act_comb__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->tb_Question3__DOT__Cin_tb) 
         ^ (IData)(vlSelf->tb_Question3__DOT____Vtogcov__Cin_tb))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->tb_Question3__DOT____Vtogcov__Cin_tb 
            = vlSelf->tb_Question3__DOT__Cin_tb;
    }
    if ((1U & (vlSelf->tb_Question3__DOT__A_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xfffffffeU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (1U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((2U & (vlSelf->tb_Question3__DOT__A_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xfffffffdU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (2U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((4U & (vlSelf->tb_Question3__DOT__A_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xfffffffbU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (4U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((8U & (vlSelf->tb_Question3__DOT__A_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xfffffff7U & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (8U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x10U & (vlSelf->tb_Question3__DOT__A_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xffffffefU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x10U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x20U & (vlSelf->tb_Question3__DOT__A_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xffffffdfU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x20U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x40U & (vlSelf->tb_Question3__DOT__A_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xffffffbfU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x40U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x80U & (vlSelf->tb_Question3__DOT__A_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xffffff7fU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x80U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x100U & (vlSelf->tb_Question3__DOT__A_tb 
                   ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xfffffeffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x100U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x200U & (vlSelf->tb_Question3__DOT__A_tb 
                   ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xfffffdffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x200U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x400U & (vlSelf->tb_Question3__DOT__A_tb 
                   ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xfffffbffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x400U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x800U & (vlSelf->tb_Question3__DOT__A_tb 
                   ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xfffff7ffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x800U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x1000U & (vlSelf->tb_Question3__DOT__A_tb 
                    ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xffffefffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x1000U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x2000U & (vlSelf->tb_Question3__DOT__A_tb 
                    ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xffffdfffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x2000U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x4000U & (vlSelf->tb_Question3__DOT__A_tb 
                    ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xffffbfffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x4000U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x8000U & (vlSelf->tb_Question3__DOT__A_tb 
                    ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xffff7fffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x8000U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x10000U & (vlSelf->tb_Question3__DOT__A_tb 
                     ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xfffeffffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x10000U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x20000U & (vlSelf->tb_Question3__DOT__A_tb 
                     ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xfffdffffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x20000U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x40000U & (vlSelf->tb_Question3__DOT__A_tb 
                     ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xfffbffffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x40000U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x80000U & (vlSelf->tb_Question3__DOT__A_tb 
                     ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xfff7ffffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x80000U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x100000U & (vlSelf->tb_Question3__DOT__A_tb 
                      ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xffefffffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x100000U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x200000U & (vlSelf->tb_Question3__DOT__A_tb 
                      ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xffdfffffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x200000U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x400000U & (vlSelf->tb_Question3__DOT__A_tb 
                      ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xffbfffffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x400000U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x800000U & (vlSelf->tb_Question3__DOT__A_tb 
                      ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xff7fffffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x800000U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x1000000U & (vlSelf->tb_Question3__DOT__A_tb 
                       ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xfeffffffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x1000000U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x2000000U & (vlSelf->tb_Question3__DOT__A_tb 
                       ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xfdffffffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x2000000U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x4000000U & (vlSelf->tb_Question3__DOT__A_tb 
                       ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xfbffffffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x4000000U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x8000000U & (vlSelf->tb_Question3__DOT__A_tb 
                       ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xf7ffffffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x8000000U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x10000000U & (vlSelf->tb_Question3__DOT__A_tb 
                        ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xefffffffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x10000000U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x20000000U & (vlSelf->tb_Question3__DOT__A_tb 
                        ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xdfffffffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x20000000U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((0x40000000U & (vlSelf->tb_Question3__DOT__A_tb 
                        ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0xbfffffffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x40000000U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if (((vlSelf->tb_Question3__DOT__A_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->tb_Question3__DOT____Vtogcov__A_tb 
            = ((0x7fffffffU & vlSelf->tb_Question3__DOT____Vtogcov__A_tb) 
               | (0x80000000U & vlSelf->tb_Question3__DOT__A_tb));
    }
    if ((1U & (vlSelf->tb_Question3__DOT__B_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xfffffffeU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (1U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((2U & (vlSelf->tb_Question3__DOT__B_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xfffffffdU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (2U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((4U & (vlSelf->tb_Question3__DOT__B_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xfffffffbU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (4U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((8U & (vlSelf->tb_Question3__DOT__B_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xfffffff7U & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (8U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x10U & (vlSelf->tb_Question3__DOT__B_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xffffffefU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x10U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x20U & (vlSelf->tb_Question3__DOT__B_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xffffffdfU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x20U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x40U & (vlSelf->tb_Question3__DOT__B_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xffffffbfU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x40U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x80U & (vlSelf->tb_Question3__DOT__B_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xffffff7fU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x80U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x100U & (vlSelf->tb_Question3__DOT__B_tb 
                   ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xfffffeffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x100U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x200U & (vlSelf->tb_Question3__DOT__B_tb 
                   ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xfffffdffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x200U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x400U & (vlSelf->tb_Question3__DOT__B_tb 
                   ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xfffffbffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x400U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x800U & (vlSelf->tb_Question3__DOT__B_tb 
                   ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xfffff7ffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x800U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x1000U & (vlSelf->tb_Question3__DOT__B_tb 
                    ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xffffefffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x1000U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x2000U & (vlSelf->tb_Question3__DOT__B_tb 
                    ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xffffdfffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x2000U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x4000U & (vlSelf->tb_Question3__DOT__B_tb 
                    ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xffffbfffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x4000U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x8000U & (vlSelf->tb_Question3__DOT__B_tb 
                    ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xffff7fffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x8000U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x10000U & (vlSelf->tb_Question3__DOT__B_tb 
                     ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xfffeffffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x10000U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x20000U & (vlSelf->tb_Question3__DOT__B_tb 
                     ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xfffdffffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x20000U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x40000U & (vlSelf->tb_Question3__DOT__B_tb 
                     ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xfffbffffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x40000U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x80000U & (vlSelf->tb_Question3__DOT__B_tb 
                     ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xfff7ffffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x80000U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x100000U & (vlSelf->tb_Question3__DOT__B_tb 
                      ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xffefffffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x100000U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x200000U & (vlSelf->tb_Question3__DOT__B_tb 
                      ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xffdfffffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x200000U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x400000U & (vlSelf->tb_Question3__DOT__B_tb 
                      ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xffbfffffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x400000U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x800000U & (vlSelf->tb_Question3__DOT__B_tb 
                      ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xff7fffffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x800000U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x1000000U & (vlSelf->tb_Question3__DOT__B_tb 
                       ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xfeffffffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x1000000U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x2000000U & (vlSelf->tb_Question3__DOT__B_tb 
                       ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xfdffffffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x2000000U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x4000000U & (vlSelf->tb_Question3__DOT__B_tb 
                       ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xfbffffffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x4000000U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x8000000U & (vlSelf->tb_Question3__DOT__B_tb 
                       ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xf7ffffffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x8000000U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x10000000U & (vlSelf->tb_Question3__DOT__B_tb 
                        ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xefffffffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x10000000U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x20000000U & (vlSelf->tb_Question3__DOT__B_tb 
                        ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xdfffffffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x20000000U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if ((0x40000000U & (vlSelf->tb_Question3__DOT__B_tb 
                        ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0xbfffffffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x40000000U & vlSelf->tb_Question3__DOT__B_tb));
    }
    if (((vlSelf->tb_Question3__DOT__B_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->tb_Question3__DOT____Vtogcov__B_tb 
            = ((0x7fffffffU & vlSelf->tb_Question3__DOT____Vtogcov__B_tb) 
               | (0x80000000U & vlSelf->tb_Question3__DOT__B_tb));
    }
}

VL_INLINE_OPT void Vtb_Question3___024root___act_sequent__TOP__1(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___act_sequent__TOP__1\n"); );
    // Init
    SData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x100U & (((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk) 
                             | ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk) 
                                & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk))) 
                            << 1U)) | ((0x80U & (((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk) 
                                                  | ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk) 
                                                     & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk))) 
                                                 << 1U)) 
                                       | ((0x40U & 
                                           (((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk) 
                                             | ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk) 
                                                & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk))) 
                                            << 1U)) 
                                          | ((0x20U 
                                              & (((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk) 
                                                  | ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk) 
                                                     & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk))) 
                                                 << 1U)) 
                                             | ((0x10U 
                                                 & (((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk) 
                                                     | ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk) 
                                                        & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk))) 
                                                    << 1U)) 
                                                | ((8U 
                                                    & (((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk) 
                                                        | ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk) 
                                                           & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk))) 
                                                       << 1U)) 
                                                   | ((4U 
                                                       & (((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk) 
                                                           | ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk) 
                                                              & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk))) 
                                                          << 1U)) 
                                                      | ((2U 
                                                          & (((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk) 
                                                              | ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk) 
                                                                 & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk))) 
                                                             << 1U)) 
                                                         | (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cin_r)))))))));
    vlSelf->tb_Question3__DOT__DUT__DOT__Cblk = __Vtemp_1;
    if ((1U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
               ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk)))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk 
            = ((0x1feU & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk)) 
               | (1U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
               ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk)))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk 
            = ((0x1fdU & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk)) 
               | (2U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
               ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk)))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk 
            = ((0x1fbU & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk)) 
               | (4U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
               ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk)))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk 
            = ((0x1f7U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk)) 
               | (8U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                  ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk 
            = ((0x1efU & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk)) 
               | (0x10U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                  ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk)))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk 
            = ((0x1dfU & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk)) 
               | (0x20U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                  ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk)))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk 
            = ((0x1bfU & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk)) 
               | (0x40U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                  ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk)))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk 
            = ((0x17fU & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk)) 
               | (0x80U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk)));
    }
    if ((0x100U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                   ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk)))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk 
            = ((0xffU & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk)) 
               | (0x100U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk)));
    }
}

VL_INLINE_OPT void Vtb_Question3___024root___act_sequent__TOP__2(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___act_sequent__TOP__2\n"); );
    // Body
    vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c = (((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.S) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.S) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.S) 
                                                         << 0x14U) 
                                                        | (((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.S) 
                                                            << 0x10U) 
                                                           | (((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.S) 
                                                               << 0xcU) 
                                                              | (((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.S) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.S) 
                                                                     << 4U) 
                                                                    | (IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.S))))))));
    if ((1U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
               ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xfffffffeU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (1U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((2U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
               ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xfffffffdU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (2U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((4U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
               ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xfffffffbU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (4U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((8U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
               ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xfffffff7U & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (8U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x10U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                  ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xffffffefU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x10U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x20U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                  ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xffffffdfU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x20U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x40U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                  ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xffffffbfU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x40U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x80U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                  ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xffffff7fU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x80U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x100U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                   ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xfffffeffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x100U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x200U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                   ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xfffffdffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x200U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x400U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                   ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xfffffbffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x400U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x800U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                   ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xfffff7ffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x800U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x1000U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                    ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xffffefffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x1000U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x2000U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                    ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xffffdfffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x2000U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x4000U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                    ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xffffbfffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x4000U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x8000U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                    ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xffff7fffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x8000U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x10000U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                     ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xfffeffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x10000U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x20000U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                     ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xfffdffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x20000U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x40000U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                     ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xfffbffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x40000U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x80000U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                     ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xfff7ffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x80000U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x100000U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                      ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xffefffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x100000U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x200000U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                      ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xffdfffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x200000U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x400000U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                      ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xffbfffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x400000U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x800000U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                      ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xff7fffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x800000U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x1000000U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                       ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xfeffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x1000000U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x2000000U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                       ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xfdffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x2000000U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x4000000U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                       ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xfbffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x4000000U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x8000000U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                       ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xf7ffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x8000000U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x10000000U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                        ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xefffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x10000000U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x20000000U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                        ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xdfffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x20000000U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if ((0x40000000U & (vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
                        ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0xbfffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x40000000U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
    if (((vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c 
          ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c 
            = ((0x7fffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c) 
               | (0x80000000U & vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c));
    }
}

void Vtb_Question3___024root___nba_sequent__TOP__0(Vtb_Question3___024root* vlSelf);
void Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
void Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
void Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
void Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
void Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
void Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
void Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
void Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
void Vtb_Question3___024root___nba_sequent__TOP__1(Vtb_Question3___024root* vlSelf);

void Vtb_Question3___024root___eval_nba(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_Question3___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4));
        Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4));
        Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4));
        Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4));
        Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4));
        Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4));
        Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4));
        Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4));
        Vtb_Question3___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_Question3___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x1cULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_Question3___024root___act_comb__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_Question3___024root___act_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4));
        Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4));
        Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4));
        Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4));
        Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4));
        Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4));
        Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4));
        Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4));
        Vtb_Question3___024root___act_sequent__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_Question3___024root___nba_sequent__TOP__0(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___nba_sequent__TOP__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[178]);
    ++(vlSymsp->__Vcoverage[238]);
    if (vlSelf->tb_Question3__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[177]);
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->tb_Question3__DOT__Sum_tb = vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c;
        vlSelf->tb_Question3__DOT__DUT__DOT__B_r = vlSelf->tb_Question3__DOT__B_tb;
        vlSelf->tb_Question3__DOT__DUT__DOT__A_r = vlSelf->tb_Question3__DOT__A_tb;
    } else {
        vlSelf->tb_Question3__DOT__Sum_tb = 0U;
        vlSelf->tb_Question3__DOT__DUT__DOT__B_r = 0U;
        vlSelf->tb_Question3__DOT__DUT__DOT__A_r = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->tb_Question3__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[176]);
        ++(vlSymsp->__Vcoverage[236]);
    }
    vlSelf->tb_Question3__DOT__Cout_tb = ((IData)(vlSelf->tb_Question3__DOT__rst_n) 
                                          && (1U & 
                                              ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                               >> 8U)));
    vlSelf->tb_Question3__DOT__DUT__DOT__Cin_r = ((IData)(vlSelf->tb_Question3__DOT__rst_n) 
                                                  && (IData)(vlSelf->tb_Question3__DOT__Cin_tb));
    if ((1U & (vlSelf->tb_Question3__DOT__Sum_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xfffffffeU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (1U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((2U & (vlSelf->tb_Question3__DOT__Sum_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xfffffffdU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (2U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((4U & (vlSelf->tb_Question3__DOT__Sum_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xfffffffbU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (4U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((8U & (vlSelf->tb_Question3__DOT__Sum_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xfffffff7U & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (8U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x10U & (vlSelf->tb_Question3__DOT__Sum_tb 
                  ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xffffffefU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x10U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x20U & (vlSelf->tb_Question3__DOT__Sum_tb 
                  ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xffffffdfU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x20U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x40U & (vlSelf->tb_Question3__DOT__Sum_tb 
                  ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xffffffbfU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x40U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x80U & (vlSelf->tb_Question3__DOT__Sum_tb 
                  ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xffffff7fU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x80U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x100U & (vlSelf->tb_Question3__DOT__Sum_tb 
                   ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xfffffeffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x100U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x200U & (vlSelf->tb_Question3__DOT__Sum_tb 
                   ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xfffffdffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x200U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x400U & (vlSelf->tb_Question3__DOT__Sum_tb 
                   ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xfffffbffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x400U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x800U & (vlSelf->tb_Question3__DOT__Sum_tb 
                   ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xfffff7ffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x800U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x1000U & (vlSelf->tb_Question3__DOT__Sum_tb 
                    ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xffffefffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x1000U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x2000U & (vlSelf->tb_Question3__DOT__Sum_tb 
                    ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xffffdfffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x2000U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x4000U & (vlSelf->tb_Question3__DOT__Sum_tb 
                    ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xffffbfffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x4000U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x8000U & (vlSelf->tb_Question3__DOT__Sum_tb 
                    ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xffff7fffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x8000U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x10000U & (vlSelf->tb_Question3__DOT__Sum_tb 
                     ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xfffeffffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x10000U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x20000U & (vlSelf->tb_Question3__DOT__Sum_tb 
                     ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xfffdffffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x20000U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x40000U & (vlSelf->tb_Question3__DOT__Sum_tb 
                     ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xfffbffffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x40000U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x80000U & (vlSelf->tb_Question3__DOT__Sum_tb 
                     ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xfff7ffffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x80000U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x100000U & (vlSelf->tb_Question3__DOT__Sum_tb 
                      ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xffefffffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x100000U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x200000U & (vlSelf->tb_Question3__DOT__Sum_tb 
                      ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xffdfffffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x200000U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x400000U & (vlSelf->tb_Question3__DOT__Sum_tb 
                      ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xffbfffffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x400000U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x800000U & (vlSelf->tb_Question3__DOT__Sum_tb 
                      ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xff7fffffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x800000U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x1000000U & (vlSelf->tb_Question3__DOT__Sum_tb 
                       ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xfeffffffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x1000000U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x2000000U & (vlSelf->tb_Question3__DOT__Sum_tb 
                       ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xfdffffffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x2000000U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x4000000U & (vlSelf->tb_Question3__DOT__Sum_tb 
                       ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xfbffffffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x4000000U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x8000000U & (vlSelf->tb_Question3__DOT__Sum_tb 
                       ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xf7ffffffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x8000000U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x10000000U & (vlSelf->tb_Question3__DOT__Sum_tb 
                        ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xefffffffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x10000000U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x20000000U & (vlSelf->tb_Question3__DOT__Sum_tb 
                        ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xdfffffffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x20000000U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if ((0x40000000U & (vlSelf->tb_Question3__DOT__Sum_tb 
                        ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0xbfffffffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x40000000U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if (((vlSelf->tb_Question3__DOT__Sum_tb ^ vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb 
            = ((0x7fffffffU & vlSelf->tb_Question3__DOT____Vtogcov__Sum_tb) 
               | (0x80000000U & vlSelf->tb_Question3__DOT__Sum_tb));
    }
    if (((IData)(vlSelf->tb_Question3__DOT__Cout_tb) 
         ^ (IData)(vlSelf->tb_Question3__DOT____Vtogcov__Cout_tb))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->tb_Question3__DOT____Vtogcov__Cout_tb 
            = vlSelf->tb_Question3__DOT__Cout_tb;
    }
    if (((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cin_r) 
         ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cin_r))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Cin_r 
            = vlSelf->tb_Question3__DOT__DUT__DOT__Cin_r;
    }
    if ((1U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
               ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xfffffffeU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (1U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((2U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
               ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xfffffffdU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (2U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((4U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
               ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xfffffffbU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (4U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((8U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
               ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xfffffff7U & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (8U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x10U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                  ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xffffffefU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x10U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x20U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                  ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xffffffdfU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x20U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x40U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                  ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xffffffbfU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x40U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x80U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                  ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xffffff7fU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x80U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x100U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                   ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xfffffeffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x100U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x200U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                   ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xfffffdffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x200U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x400U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                   ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xfffffbffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x400U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x800U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                   ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xfffff7ffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x800U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x1000U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                    ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xffffefffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x1000U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x2000U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                    ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xffffdfffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x2000U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x4000U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                    ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xffffbfffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x4000U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x8000U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                    ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xffff7fffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x8000U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x10000U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                     ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xfffeffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x10000U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x20000U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                     ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xfffdffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x20000U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x40000U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                     ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xfffbffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x40000U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x80000U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                     ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xfff7ffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x80000U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x100000U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                      ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xffefffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x100000U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x200000U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                      ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xffdfffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x200000U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x400000U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                      ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xffbfffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x400000U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x800000U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                      ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xff7fffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x800000U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x1000000U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                       ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xfeffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x1000000U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x2000000U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                       ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xfdffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x2000000U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x4000000U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                       ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xfbffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x4000000U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x8000000U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                       ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xf7ffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x8000000U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x10000000U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                        ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xefffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x10000000U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x20000000U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                        ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xdfffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x20000000U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((0x40000000U & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                        ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0xbfffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x40000000U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if (((vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
          ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r 
            = ((0x7fffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__B_r) 
               | (0x80000000U & vlSelf->tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((1U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
               ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xfffffffeU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (1U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((2U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
               ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xfffffffdU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (2U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((4U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
               ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xfffffffbU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (4U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((8U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
               ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xfffffff7U & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (8U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x10U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                  ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xffffffefU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x10U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x20U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                  ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xffffffdfU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x20U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x40U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                  ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xffffffbfU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x40U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x80U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                  ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xffffff7fU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x80U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x100U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                   ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xfffffeffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x100U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x200U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                   ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xfffffdffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x200U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x400U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                   ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xfffffbffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x400U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x800U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                   ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xfffff7ffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x800U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x1000U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                    ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xffffefffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x1000U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x2000U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                    ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xffffdfffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x2000U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x4000U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                    ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xffffbfffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x4000U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x8000U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                    ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xffff7fffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x8000U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x10000U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                     ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xfffeffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x10000U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x20000U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                     ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xfffdffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x20000U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x40000U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                     ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xfffbffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x40000U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x80000U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                     ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xfff7ffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x80000U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x100000U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                      ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xffefffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x100000U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x200000U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                      ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xffdfffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x200000U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x400000U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                      ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xffbfffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x400000U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x800000U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                      ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xff7fffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x800000U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x1000000U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                       ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xfeffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x1000000U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x2000000U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                       ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xfdffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x2000000U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x4000000U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                       ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xfbffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x4000000U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x8000000U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                       ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xf7ffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x8000000U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x10000000U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                        ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xefffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x10000000U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x20000000U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                        ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xdfffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x20000000U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((0x40000000U & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                        ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0xbfffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x40000000U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
    if (((vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
          ^ vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r 
            = ((0x7fffffffU & vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__A_r) 
               | (0x80000000U & vlSelf->tb_Question3__DOT__DUT__DOT__A_r));
    }
}

VL_INLINE_OPT void Vtb_Question3___024root___nba_sequent__TOP__1(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->tb_Question3__DOT__DUT__DOT__Pblk = (((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.Pblk) 
                                                  << 7U) 
                                                 | (((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.Pblk) 
                                                     << 6U) 
                                                    | (((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.Pblk) 
                                                        << 5U) 
                                                       | (((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.Pblk) 
                                                           << 4U) 
                                                          | (((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.Pblk) 
                                                              << 3U) 
                                                             | (((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.Pblk) 
                                                                 << 2U) 
                                                                | (((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.Pblk) 
                                                                    << 1U) 
                                                                   | (IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.Pblk))))))));
    vlSelf->tb_Question3__DOT__DUT__DOT__Gblk = (((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.Gblk) 
                                                  << 7U) 
                                                 | (((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.Gblk) 
                                                     << 6U) 
                                                    | (((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.Gblk) 
                                                        << 5U) 
                                                       | (((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.Gblk) 
                                                           << 4U) 
                                                          | (((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.Gblk) 
                                                              << 3U) 
                                                             | (((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.Gblk) 
                                                                 << 2U) 
                                                                | (((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.Gblk) 
                                                                    << 1U) 
                                                                   | (IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.Gblk))))))));
    if ((1U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk) 
               ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk)))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk 
            = ((0xfeU & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk)) 
               | (1U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk) 
               ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk)))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk 
            = ((0xfdU & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk)) 
               | (2U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk) 
               ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk)))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk 
            = ((0xfbU & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk)) 
               | (4U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk) 
               ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk)))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk 
            = ((0xf7U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk)) 
               | (8U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk) 
                  ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk)))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk 
            = ((0xefU & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk)) 
               | (0x10U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk) 
                  ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk)))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk 
            = ((0xdfU & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk)) 
               | (0x20U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk) 
                  ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk)))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk 
            = ((0xbfU & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk)) 
               | (0x40U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk) 
                  ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk)))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk 
            = ((0x7fU & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk)) 
               | (0x80U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk)));
    }
    if ((1U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk) 
               ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk)))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk 
            = ((0xfeU & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk)) 
               | (1U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk) 
               ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk)))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk 
            = ((0xfdU & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk)) 
               | (2U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk) 
               ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk)))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk 
            = ((0xfbU & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk)) 
               | (4U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk) 
               ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk)))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk 
            = ((0xf7U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk)) 
               | (8U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk) 
                  ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk)))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk 
            = ((0xefU & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk)) 
               | (0x10U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk) 
                  ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk)))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk 
            = ((0xdfU & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk)) 
               | (0x20U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk) 
                  ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk)))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk 
            = ((0xbfU & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk)) 
               | (0x40U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk) 
                  ^ (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk)))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk 
            = ((0x7fU & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk)) 
               | (0x80U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk)));
    }
}
