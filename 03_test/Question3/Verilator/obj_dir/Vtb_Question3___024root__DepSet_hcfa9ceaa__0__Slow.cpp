// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question3.h for the primary calling header

#include "Vtb_Question3__pch.h"
#include "Vtb_Question3__Syms.h"
#include "Vtb_Question3___024root.h"

VL_ATTR_COLD void Vtb_Question3___024root___eval_static__TOP(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_Question3__DOT__pass_count = 0U;
    ++(vlSymsp->__Vcoverage[104]);
    vlSelf->tb_Question3__DOT__fail_count = 0U;
    ++(vlSymsp->__Vcoverage[105]);
}

VL_ATTR_COLD void Vtb_Question3___024root___eval_initial__TOP(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    vlSelf->tb_Question3__DOT__clk = 0U;
    ++(vlSymsp->__Vcoverage[100]);
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x696f6e33U;
    __Vtemp_1[2U] = 0x75657374U;
    __Vtemp_1[3U] = 0x74625f51U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    ++(vlSymsp->__Vcoverage[102]);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question3___024root___dump_triggers__stl(Vtb_Question3___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_Question3___024root___eval_triggers__stl(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Question3__DOT__DUT__DOT__Cblk__0)));
    vlSelf->__Vtrigprevexpr___TOP__tb_Question3__DOT__DUT__DOT__Cblk__0 
        = vlSelf->tb_Question3__DOT__DUT__DOT__Cblk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_Question3___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtb_Question3___024root___stl_sequent__TOP__0(Vtb_Question3___024root* vlSelf);
VL_ATTR_COLD void Vtb_Question3_cla_4bit___stl_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
VL_ATTR_COLD void Vtb_Question3_cla_4bit___stl_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
VL_ATTR_COLD void Vtb_Question3_cla_4bit___stl_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
VL_ATTR_COLD void Vtb_Question3_cla_4bit___stl_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
VL_ATTR_COLD void Vtb_Question3_cla_4bit___stl_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
VL_ATTR_COLD void Vtb_Question3_cla_4bit___stl_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
VL_ATTR_COLD void Vtb_Question3_cla_4bit___stl_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
VL_ATTR_COLD void Vtb_Question3_cla_4bit___stl_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf);
void Vtb_Question3___024root___nba_sequent__TOP__1(Vtb_Question3___024root* vlSelf);
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

VL_ATTR_COLD void Vtb_Question3___024root___eval_stl(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_Question3___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vtb_Question3_cla_4bit___stl_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4));
        Vtb_Question3_cla_4bit___stl_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4));
        Vtb_Question3_cla_4bit___stl_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4));
        Vtb_Question3_cla_4bit___stl_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4));
        Vtb_Question3_cla_4bit___stl_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4));
        Vtb_Question3_cla_4bit___stl_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4));
        Vtb_Question3_cla_4bit___stl_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4));
        Vtb_Question3_cla_4bit___stl_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4__0((&vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4));
        Vtb_Question3___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_Question3___024root___act_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
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

VL_ATTR_COLD void Vtb_Question3___024root___stl_sequent__TOP__0(Vtb_Question3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___stl_sequent__TOP__0\n"); );
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
    if (((IData)(vlSelf->tb_Question3__DOT__Cin_tb) 
         ^ (IData)(vlSelf->tb_Question3__DOT____Vtogcov__Cin_tb))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->tb_Question3__DOT____Vtogcov__Cin_tb 
            = vlSelf->tb_Question3__DOT__Cin_tb;
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
}

VL_ATTR_COLD void Vtb_Question3___024root___configure_coverage(Vtb_Question3___024root* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root___configure_coverage\n"); );
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 5, 18, ".tb_Question3", "v_toggle/tb_Question3", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 6, 18, ".tb_Question3", "v_toggle/tb_Question3", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 18, ".tb_Question3", "v_toggle/tb_Question3", "A_tb[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 7, 24, ".tb_Question3", "v_toggle/tb_Question3", "B_tb[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 8, 18, ".tb_Question3", "v_toggle/tb_Question3", "Cin_tb", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 9, 18, ".tb_Question3", "v_toggle/tb_Question3", "Sum_tb[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 10, 18, ".tb_Question3", "v_toggle/tb_Question3", "Cout_tb", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 24, 5, ".tb_Question3", "v_line/tb_Question3", "block", "24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 25, 5, ".tb_Question3", "v_line/tb_Question3", "block", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 28, 5, ".tb_Question3", "v_line/tb_Question3", "block", "28-30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 38, 5, ".tb_Question3", "v_line/tb_Question3", "block", "38-45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 49, 22, ".tb_Question3", "v_line/tb_Question3", "block", "49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 50, 22, ".tb_Question3", "v_line/tb_Question3", "block", "50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 77, 17, ".tb_Question3", "v_branch/tb_Question3", "if", "77-80");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 77, 18, ".tb_Question3", "v_branch/tb_Question3", "else", "81-84");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 62, 13, ".tb_Question3", "v_line/tb_Question3", "block", "62,64-72,74-75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 53, 10, ".tb_Question3", "v_line/tb_Question3", "block", "53,60-62,89-93");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/noname/Documents/project_tiny/Ex3/03_test/Question3/tb_Question3.sv", 98, 5, ".tb_Question3", "v_line/tb_Question3", "block", "98-102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 2, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 3, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 4, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 5, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 6, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 7, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 8, 25, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "A_r[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 11, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "B_r[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 12, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Cin_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 15, 9, ".tb_Question3.DUT", "v_branch/cla_32bit", "if", "15-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 15, 10, ".tb_Question3.DUT", "v_branch/cla_32bit", "else", "19-22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 14, 5, ".tb_Question3.DUT", "v_line/cla_32bit", "block", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 26, 17, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Pblk[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 26, 17, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Pblk[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 26, 17, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Pblk[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 26, 17, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Pblk[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 26, 17, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Pblk[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 26, 17, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Pblk[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 26, 17, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Pblk[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 26, 17, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Pblk[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 26, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Gblk[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 26, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Gblk[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 26, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Gblk[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 26, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Gblk[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 26, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Gblk[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 26, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Gblk[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 26, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Gblk[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 26, 23, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Gblk[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 27, 17, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Cblk[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 27, 17, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Cblk[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 27, 17, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Cblk[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 27, 17, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Cblk[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 27, 17, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Cblk[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 27, 17, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Cblk[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 27, 17, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Cblk[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 27, 17, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Cblk[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 27, 17, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Cblk[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 28, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Sum_c[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 29, 18, ".tb_Question3.DUT", "v_toggle/cla_32bit", "Cout_c", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 52, 9, ".tb_Question3.DUT", "v_branch/cla_32bit", "if", "52-54");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 52, 10, ".tb_Question3.DUT", "v_branch/cla_32bit", "else", "55-57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question3/cla_32bit.sv", 51, 5, ".tb_Question3.DUT", "v_line/cla_32bit", "block", "51");
}
