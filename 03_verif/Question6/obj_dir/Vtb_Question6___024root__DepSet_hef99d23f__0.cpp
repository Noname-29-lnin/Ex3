// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question6.h for the primary calling header

#include "Vtb_Question6__pch.h"
#include "Vtb_Question6__Syms.h"
#include "Vtb_Question6___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question6___024root___dump_triggers__ico(Vtb_Question6___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_Question6___024root___eval_triggers__ico(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_Question6___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question6___024root___dump_triggers__act(Vtb_Question6___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_Question6___024root___eval_triggers__act(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_Question6__DOT__i_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Question6__DOT__i_clk__0))) 
                                     | ((~ (IData)(vlSelf->tb_Question6__DOT__i_rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Question6__DOT__i_rst_n__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_Question6__DOT__i_clk__0 
        = vlSelf->tb_Question6__DOT__i_clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question6__DOT__i_rst_n__0 
        = vlSelf->tb_Question6__DOT__i_rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_Question6___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtb_Question6___024root___act_sequent__TOP__0(Vtb_Question6___024root* vlSelf);
void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf);
void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf);
void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf);
void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf);
void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf);
void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf);
void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf);
void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf);
void Vtb_Question6___024root___act_sequent__TOP__1(Vtb_Question6___024root* vlSelf);
void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf);
void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf);
void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf);
void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf);
void Vtb_Question6___024root___act_sequent__TOP__2(Vtb_Question6___024root* vlSelf);
void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf);
void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf);
void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf);
void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf);
void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf);
void Vtb_Question6___024root___act_sequent__TOP__3(Vtb_Question6___024root* vlSelf);
void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf);
void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf);
void Vtb_Question6___024root___act_sequent__TOP__4(Vtb_Question6___024root* vlSelf);

void Vtb_Question6___024root___eval_act(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question6___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1));
        Vtb_Question6___024root___act_sequent__TOP__1(vlSelf);
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0));
        Vtb_Question6___024root___act_sequent__TOP__2(vlSelf);
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1));
        Vtb_Question6___024root___act_sequent__TOP__3(vlSelf);
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1));
        Vtb_Question6___024root___act_sequent__TOP__4(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_Question6___024root___act_sequent__TOP__1(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[0U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max;
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[3U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min;
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[4U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max;
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[7U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min;
}

VL_INLINE_OPT void Vtb_Question6___024root___act_sequent__TOP__2(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___act_sequent__TOP__2\n"); );
    // Body
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[1U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max;
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[2U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min;
    vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[0U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_max;
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[0U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_max;
    vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[7U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_min;
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[7U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_min;
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[5U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max;
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[6U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min;
}

VL_INLINE_OPT void Vtb_Question6___024root___act_sequent__TOP__3(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___act_sequent__TOP__3\n"); );
    // Body
    vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[1U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_max;
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[1U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_max;
    vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[6U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_min;
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[6U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_min;
}

VL_INLINE_OPT void Vtb_Question6___024root___act_sequent__TOP__4(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___act_sequent__TOP__4\n"); );
    // Body
    vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[2U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.o_data_max;
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[2U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.o_data_max;
    vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[3U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.o_data_min;
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[3U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.o_data_min;
    vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[4U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.o_data_max;
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[4U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.o_data_max;
    vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[5U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.o_data_min;
    vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[5U] 
        = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.o_data_min;
}

void Vtb_Question6___024root___nba_sequent__TOP__0(Vtb_Question6___024root* vlSelf);

void Vtb_Question6___024root___eval_nba(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_Question6___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_Question6___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1));
        Vtb_Question6___024root___act_sequent__TOP__1(vlSelf);
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0));
        Vtb_Question6___024root___act_sequent__TOP__2(vlSelf);
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1));
        Vtb_Question6___024root___act_sequent__TOP__3(vlSelf);
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0));
        Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__0((&vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1));
        Vtb_Question6___024root___act_sequent__TOP__4(vlSelf);
    }
}
