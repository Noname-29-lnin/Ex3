// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question6.h for the primary calling header

#include "Vtb_Question6__pch.h"
#include "Vtb_Question6___024root.h"

VL_ATTR_COLD void Vtb_Question6___024root___eval_initial__TOP(Vtb_Question6___024root* vlSelf);
VlCoroutine Vtb_Question6___024root___eval_initial__TOP__Vtiming__0(Vtb_Question6___024root* vlSelf);
VlCoroutine Vtb_Question6___024root___eval_initial__TOP__Vtiming__1(Vtb_Question6___024root* vlSelf);

void Vtb_Question6___024root___eval_initial(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___eval_initial\n"); );
    // Body
    Vtb_Question6___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_Question6___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_Question6___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_Question6__DOT__i_clk__0 
        = vlSelf->tb_Question6__DOT__i_clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question6__DOT__i_rst_n__0 
        = vlSelf->tb_Question6__DOT__i_rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_Question6___024root___eval_initial__TOP__Vtiming__0(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_Question6__DOT__i_rst_n = 0U;
    vlSelf->tb_Question6__DOT__i_data[0U] = 0U;
    vlSelf->tb_Question6__DOT__i_data[1U] = 0U;
    vlSelf->tb_Question6__DOT__i_data[2U] = 0U;
    vlSelf->tb_Question6__DOT__i_data[3U] = 0U;
    vlSelf->tb_Question6__DOT__i_data[4U] = 0U;
    vlSelf->tb_Question6__DOT__i_data[5U] = 0U;
    vlSelf->tb_Question6__DOT__i_data[6U] = 0U;
    vlSelf->tb_Question6__DOT__i_data[7U] = 0U;
    vlSelf->tb_Question6__DOT__k = 8U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question6/tb_Question6.sv", 
                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question6__DOT__i_rst_n = 1U;
    vlSelf->tb_Question6__DOT__i_data[0U] = 0x87U;
    vlSelf->tb_Question6__DOT__i_data[1U] = 0xdcU;
    vlSelf->tb_Question6__DOT__i_data[2U] = 0x6eU;
    vlSelf->tb_Question6__DOT__i_data[3U] = 0U;
    vlSelf->tb_Question6__DOT__i_data[4U] = 0x9bU;
    vlSelf->tb_Question6__DOT__i_data[5U] = 0x87U;
    vlSelf->tb_Question6__DOT__i_data[6U] = 0x4dU;
    vlSelf->tb_Question6__DOT__i_data[7U] = 5U;
    VL_WRITEF_NX("========================================\nInput data before sorting:\n  i_data[0] = %0#\n",0,
                 8,vlSelf->tb_Question6__DOT__i_data
                 [0U]);
    vlSelf->tb_Question6__DOT__k = 1U;
    VL_WRITEF_NX("  i_data[1] = %0#\n",0,8,vlSelf->tb_Question6__DOT__i_data
                 [1U]);
    vlSelf->tb_Question6__DOT__k = 2U;
    VL_WRITEF_NX("  i_data[2] = %0#\n",0,8,vlSelf->tb_Question6__DOT__i_data
                 [2U]);
    vlSelf->tb_Question6__DOT__k = 3U;
    VL_WRITEF_NX("  i_data[3] = %0#\n",0,8,vlSelf->tb_Question6__DOT__i_data
                 [3U]);
    vlSelf->tb_Question6__DOT__k = 4U;
    VL_WRITEF_NX("  i_data[4] = %0#\n",0,8,vlSelf->tb_Question6__DOT__i_data
                 [4U]);
    vlSelf->tb_Question6__DOT__k = 5U;
    VL_WRITEF_NX("  i_data[5] = %0#\n",0,8,vlSelf->tb_Question6__DOT__i_data
                 [5U]);
    vlSelf->tb_Question6__DOT__k = 6U;
    VL_WRITEF_NX("  i_data[6] = %0#\n",0,8,vlSelf->tb_Question6__DOT__i_data
                 [6U]);
    vlSelf->tb_Question6__DOT__k = 7U;
    VL_WRITEF_NX("  i_data[7] = %0#\n",0,8,vlSelf->tb_Question6__DOT__i_data
                 [7U]);
    vlSelf->tb_Question6__DOT__k = 8U;
    VL_WRITEF_NX("========================================\n",0);
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question6/tb_Question6.sv", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Sorted output data:\n  o_sorted[0] = %0#\n",0,
                 8,vlSelf->tb_Question6__DOT__o_sorted
                 [0U]);
    vlSelf->tb_Question6__DOT__k = 1U;
    VL_WRITEF_NX("  o_sorted[1] = %0#\n",0,8,vlSelf->tb_Question6__DOT__o_sorted
                 [1U]);
    vlSelf->tb_Question6__DOT__k = 2U;
    VL_WRITEF_NX("  o_sorted[2] = %0#\n",0,8,vlSelf->tb_Question6__DOT__o_sorted
                 [2U]);
    vlSelf->tb_Question6__DOT__k = 3U;
    VL_WRITEF_NX("  o_sorted[3] = %0#\n",0,8,vlSelf->tb_Question6__DOT__o_sorted
                 [3U]);
    vlSelf->tb_Question6__DOT__k = 4U;
    VL_WRITEF_NX("  o_sorted[4] = %0#\n",0,8,vlSelf->tb_Question6__DOT__o_sorted
                 [4U]);
    vlSelf->tb_Question6__DOT__k = 5U;
    VL_WRITEF_NX("  o_sorted[5] = %0#\n",0,8,vlSelf->tb_Question6__DOT__o_sorted
                 [5U]);
    vlSelf->tb_Question6__DOT__k = 6U;
    VL_WRITEF_NX("  o_sorted[6] = %0#\n",0,8,vlSelf->tb_Question6__DOT__o_sorted
                 [6U]);
    vlSelf->tb_Question6__DOT__k = 7U;
    VL_WRITEF_NX("  o_sorted[7] = %0#\n",0,8,vlSelf->tb_Question6__DOT__o_sorted
                 [7U]);
    vlSelf->tb_Question6__DOT__k = 8U;
    VL_WRITEF_NX("========================================\n",0);
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question6/tb_Question6.sv", 
                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("/home/noname/Documents/project_tiny/Ex3/03_verif/Question6/tb_Question6.sv", 91, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_Question6___024root___eval_initial__TOP__Vtiming__1(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Ex3/03_verif/Question6/tb_Question6.sv", 
                                           38);
        vlSelf->tb_Question6__DOT__i_clk = (1U & (~ (IData)(vlSelf->tb_Question6__DOT__i_clk)));
    }
}

void Vtb_Question6___024root___ico_sequent__TOP__0(Vtb_Question6___024root* vlSelf);

void Vtb_Question6___024root___eval_ico(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_Question6___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_Question6___024root___ico_sequent__TOP__0(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->COMP_less__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->i_data_a) 
                                          ^ (IData)(vlSelf->i_data_b)) 
                                         >> 6U))))));
    vlSelf->o_less = (1U & ((((IData)(((0U == (0xc0U 
                                               & (IData)(vlSelf->i_data_a))) 
                                       & ((IData)(vlSelf->i_data_b) 
                                          >> 6U))) 
                              | (((~ ((IData)(vlSelf->i_data_a) 
                                      >> 6U)) & (IData)(
                                                        (0xc0U 
                                                         == 
                                                         (0xc0U 
                                                          & (IData)(vlSelf->i_data_b))))) 
                                 | ((~ ((IData)(vlSelf->i_data_a) 
                                        >> 7U)) & ((IData)(vlSelf->i_data_b) 
                                                   >> 7U)))) 
                             | ((IData)(vlSelf->COMP_less__DOT__u_high__DOT__w_equal_high) 
                                & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->i_data_a))) 
                                            & ((IData)(vlSelf->i_data_b) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->i_data_a) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->i_data_b))))) 
                                      | ((~ ((IData)(vlSelf->i_data_a) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->i_data_b) 
                                            >> 5U)))))) 
                            | (((IData)(vlSelf->COMP_less__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->i_data_a) 
                                                 ^ (IData)(vlSelf->i_data_b)) 
                                                >> 4U)))))) 
                               & (((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->i_data_a))) 
                                            & ((IData)(vlSelf->i_data_b) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->i_data_a) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->i_data_b))))) 
                                      | ((~ ((IData)(vlSelf->i_data_a) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->i_data_b) 
                                            >> 3U)))) 
                                  | ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->i_data_a) 
                                                      ^ (IData)(vlSelf->i_data_b)) 
                                                     >> 2U))))) 
                                     & ((IData)(((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->i_data_a))) 
                                                 & (IData)(vlSelf->i_data_b))) 
                                        | (((~ (IData)(vlSelf->i_data_a)) 
                                            & (((IData)(vlSelf->i_data_b) 
                                                >> 1U) 
                                               & (IData)(vlSelf->i_data_b))) 
                                           | ((~ ((IData)(vlSelf->i_data_a) 
                                                  >> 1U)) 
                                              & ((IData)(vlSelf->i_data_b) 
                                                 >> 1U)))))))));
}

void Vtb_Question6___024root___eval_triggers__ico(Vtb_Question6___024root* vlSelf);

bool Vtb_Question6___024root___eval_phase__ico(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtb_Question6___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtb_Question6___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

VL_INLINE_OPT void Vtb_Question6___024root___act_sequent__TOP__0(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[0U] 
        = vlSelf->tb_Question6__DOT__i_data[0U];
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[1U] 
        = vlSelf->tb_Question6__DOT__i_data[1U];
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[2U] 
        = vlSelf->tb_Question6__DOT__i_data[2U];
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[3U] 
        = vlSelf->tb_Question6__DOT__i_data[3U];
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[4U] 
        = vlSelf->tb_Question6__DOT__i_data[4U];
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[5U] 
        = vlSelf->tb_Question6__DOT__i_data[5U];
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[6U] 
        = vlSelf->tb_Question6__DOT__i_data[6U];
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[7U] 
        = vlSelf->tb_Question6__DOT__i_data[7U];
}

VL_INLINE_OPT void Vtb_Question6___024root___nba_sequent__TOP__0(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdlyvval__tb_Question6__DOT__o_sorted__v0;
    __Vdlyvval__tb_Question6__DOT__o_sorted__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_Question6__DOT__o_sorted__v1;
    __Vdlyvval__tb_Question6__DOT__o_sorted__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb_Question6__DOT__o_sorted__v2;
    __Vdlyvval__tb_Question6__DOT__o_sorted__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb_Question6__DOT__o_sorted__v3;
    __Vdlyvval__tb_Question6__DOT__o_sorted__v3 = 0;
    CData/*7:0*/ __Vdlyvval__tb_Question6__DOT__o_sorted__v4;
    __Vdlyvval__tb_Question6__DOT__o_sorted__v4 = 0;
    CData/*7:0*/ __Vdlyvval__tb_Question6__DOT__o_sorted__v5;
    __Vdlyvval__tb_Question6__DOT__o_sorted__v5 = 0;
    CData/*7:0*/ __Vdlyvval__tb_Question6__DOT__o_sorted__v6;
    __Vdlyvval__tb_Question6__DOT__o_sorted__v6 = 0;
    CData/*7:0*/ __Vdlyvval__tb_Question6__DOT__o_sorted__v7;
    __Vdlyvval__tb_Question6__DOT__o_sorted__v7 = 0;
    // Body
    if (vlSelf->tb_Question6__DOT__i_rst_n) {
        __Vdlyvval__tb_Question6__DOT__o_sorted__v0 
            = vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted
            [0U];
        __Vdlyvval__tb_Question6__DOT__o_sorted__v1 
            = vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted
            [1U];
        __Vdlyvval__tb_Question6__DOT__o_sorted__v2 
            = vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted
            [2U];
        __Vdlyvval__tb_Question6__DOT__o_sorted__v3 
            = vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted
            [3U];
        __Vdlyvval__tb_Question6__DOT__o_sorted__v4 
            = vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted
            [4U];
        __Vdlyvval__tb_Question6__DOT__o_sorted__v5 
            = vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted
            [5U];
        __Vdlyvval__tb_Question6__DOT__o_sorted__v6 
            = vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted
            [6U];
        __Vdlyvval__tb_Question6__DOT__o_sorted__v7 
            = vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted
            [7U];
    } else {
        __Vdlyvval__tb_Question6__DOT__o_sorted__v0 = 0U;
        __Vdlyvval__tb_Question6__DOT__o_sorted__v1 = 0U;
        __Vdlyvval__tb_Question6__DOT__o_sorted__v2 = 0U;
        __Vdlyvval__tb_Question6__DOT__o_sorted__v3 = 0U;
        __Vdlyvval__tb_Question6__DOT__o_sorted__v4 = 0U;
        __Vdlyvval__tb_Question6__DOT__o_sorted__v5 = 0U;
        __Vdlyvval__tb_Question6__DOT__o_sorted__v6 = 0U;
        __Vdlyvval__tb_Question6__DOT__o_sorted__v7 = 0U;
    }
    vlSelf->tb_Question6__DOT__o_sorted[0U] = __Vdlyvval__tb_Question6__DOT__o_sorted__v0;
    vlSelf->tb_Question6__DOT__o_sorted[1U] = __Vdlyvval__tb_Question6__DOT__o_sorted__v1;
    vlSelf->tb_Question6__DOT__o_sorted[2U] = __Vdlyvval__tb_Question6__DOT__o_sorted__v2;
    vlSelf->tb_Question6__DOT__o_sorted[3U] = __Vdlyvval__tb_Question6__DOT__o_sorted__v3;
    vlSelf->tb_Question6__DOT__o_sorted[4U] = __Vdlyvval__tb_Question6__DOT__o_sorted__v4;
    vlSelf->tb_Question6__DOT__o_sorted[5U] = __Vdlyvval__tb_Question6__DOT__o_sorted__v5;
    vlSelf->tb_Question6__DOT__o_sorted[6U] = __Vdlyvval__tb_Question6__DOT__o_sorted__v6;
    vlSelf->tb_Question6__DOT__o_sorted[7U] = __Vdlyvval__tb_Question6__DOT__o_sorted__v7;
}

void Vtb_Question6___024root___timing_resume(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_Question6___024root___eval_triggers__act(Vtb_Question6___024root* vlSelf);
void Vtb_Question6___024root___eval_act(Vtb_Question6___024root* vlSelf);

bool Vtb_Question6___024root___eval_phase__act(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_Question6___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_Question6___024root___timing_resume(vlSelf);
        Vtb_Question6___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtb_Question6___024root___eval_nba(Vtb_Question6___024root* vlSelf);

bool Vtb_Question6___024root___eval_phase__nba(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_Question6___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question6___024root___dump_triggers__ico(Vtb_Question6___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question6___024root___dump_triggers__nba(Vtb_Question6___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question6___024root___dump_triggers__act(Vtb_Question6___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_Question6___024root___eval(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtb_Question6___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/noname/Documents/project_tiny/Ex3/03_verif/Question6/tb_Question6.sv", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtb_Question6___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_Question6___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/noname/Documents/project_tiny/Ex3/03_verif/Question6/tb_Question6.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_Question6___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/noname/Documents/project_tiny/Ex3/03_verif/Question6/tb_Question6.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_Question6___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_Question6___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_Question6___024root___eval_debug_assertions(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
