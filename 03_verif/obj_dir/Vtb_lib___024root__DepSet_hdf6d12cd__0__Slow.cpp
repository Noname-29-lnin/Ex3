// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_lib.h for the primary calling header

#include "Vtb_lib__pch.h"
#include "Vtb_lib___024root.h"

VL_ATTR_COLD void Vtb_lib___024root___eval_static(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_lib___024root___eval_final(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lib___024root___dump_triggers__stl(Vtb_lib___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_lib___024root___eval_phase__stl(Vtb_lib___024root* vlSelf);

VL_ATTR_COLD void Vtb_lib___024root___eval_settle(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___eval_settle\n"); );
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
            Vtb_lib___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/noname/Documents/project_tiny/Ex3/03_verif/tb_top.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_lib___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lib___024root___dump_triggers__stl(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_lib___024root___stl_sequent__TOP__0(Vtb_lib___024root* vlSelf);

VL_ATTR_COLD void Vtb_lib___024root___eval_stl(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_lib___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_lib___024root___stl_sequent__TOP__0(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2;
    COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 = 0;
    CData/*0:0*/ COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3;
    COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 = 0;
    CData/*0:0*/ COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6;
    COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 = 0;
    QData/*63:0*/ __Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__f_i_data;
    __Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__f_i_data = 0;
    // Body
    vlSelf->tb_top__DOT__DRIVER__DOT__next_state = 
        ((0U == (IData)(vlSelf->tb_top__DOT__DRIVER__DOT__cur_state))
          ? ((IData)(vlSelf->tb_top__DOT__i_rst_n) ? 1U
              : 0U) : ((1U == (IData)(vlSelf->tb_top__DOT__DRIVER__DOT__cur_state))
                        ? (VL_GTS_III(32, 0x64U, vlSelf->tb_top__DOT__DRIVER__DOT__counter)
                            ? 1U : 2U) : ((2U == (IData)(vlSelf->tb_top__DOT__DRIVER__DOT__cur_state))
                                           ? 2U : 0U)));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[0U] 
        = (0xffU & (IData)(vlSelf->tb_top__DOT__w_i_data));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[1U] 
        = (0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                            >> 8U)));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[2U] 
        = (0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                            >> 0x10U)));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[3U] 
        = (0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                            >> 0x18U)));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[4U] 
        = (0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                            >> 0x20U)));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[5U] 
        = (0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                            >> 0x28U)));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[6U] 
        = (0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                            >> 0x30U)));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[7U] 
        = (0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                            >> 0x38U)));
    __Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__f_i_data 
        = vlSelf->tb_top__DOT__w_i_data;
    vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[0U] 
        = (0xffU & (IData)(__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__f_i_data));
    vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[1U] 
        = (0xffU & (IData)((__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__f_i_data 
                            >> 8U)));
    vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[2U] 
        = (0xffU & (IData)((__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__f_i_data 
                            >> 0x10U)));
    vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[3U] 
        = (0xffU & (IData)((__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__f_i_data 
                            >> 0x18U)));
    vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[4U] 
        = (0xffU & (IData)((__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__f_i_data 
                            >> 0x20U)));
    vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[5U] 
        = (0xffU & (IData)((__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__f_i_data 
                            >> 0x28U)));
    vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[6U] 
        = (0xffU & (IData)((__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__f_i_data 
                            >> 0x30U)));
    vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[7U] 
        = (0xffU & (IData)((__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__f_i_data 
                            >> 0x38U)));
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [0U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [1U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [0U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[0U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [1U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[1U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [1U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [2U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [1U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[1U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [2U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[2U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [2U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [3U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [2U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[2U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [3U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[3U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [3U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [4U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [3U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[3U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [4U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[4U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [4U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [5U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [4U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[4U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [5U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[5U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [5U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [6U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [5U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[5U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [6U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[6U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [6U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [7U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [6U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[6U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [7U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[7U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [0U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [1U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [0U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[0U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [1U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[1U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [1U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [2U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [1U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[1U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [2U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[2U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [2U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [3U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [2U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[2U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [3U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[3U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [3U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [4U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [3U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[3U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [4U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[4U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [4U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [5U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [4U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[4U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [5U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[5U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [5U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [6U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [5U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[5U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [6U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[6U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [0U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [1U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [0U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[0U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [1U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[1U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [1U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [2U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [1U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[1U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [2U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[2U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [2U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [3U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [2U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[2U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [3U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[3U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [3U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [4U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [3U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[3U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [4U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[4U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [4U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [5U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [4U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[4U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [5U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[5U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [0U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [1U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [0U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[0U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [1U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[1U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [1U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [2U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [1U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[1U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [2U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[2U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [2U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [3U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [2U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[2U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [3U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[3U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [3U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [4U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [3U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[3U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [4U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[4U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [0U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [1U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [0U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[0U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [1U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[1U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [1U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [2U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [1U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[1U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [2U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[2U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [2U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [3U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [2U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[2U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [3U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[3U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [0U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [1U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [0U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[0U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [1U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[1U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [1U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [2U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [1U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[1U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [2U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[2U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    if ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [0U] > vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
         [1U])) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [0U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[0U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
            [1U];
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[1U] 
            = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
    }
    vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__Vfuncout 
        = ((0xffffffffff000000ULL & vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__Vfuncout) 
           | (IData)((IData)(((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
                               [2U] << 0x10U) | ((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
                                                  [1U] 
                                                  << 8U) 
                                                 | vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
                                                 [0U])))));
    vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__Vfuncout 
        = ((0xffff000000ffffffULL & vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__Vfuncout) 
           | ((QData)((IData)(((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
                                [5U] << 0x10U) | ((
                                                   vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
                                                   [4U] 
                                                   << 8U) 
                                                  | vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
                                                  [3U])))) 
              << 0x18U));
    vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__Vfuncout 
        = ((0xffffffffffffULL & vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__Vfuncout) 
           | ((QData)((IData)(((vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
                                [7U] << 8U) | vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr
                               [6U]))) << 0x30U));
    vlSelf->tb_top__DOT__SCOREBOARD__DOT__expected_sorted 
        = vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__Vfuncout;
    vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSelf->i_data_a) >> 1U)) 
                 & ((IData)(vlSelf->i_data_b) >> 1U)));
    vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSelf->i_data_b) >> 5U)) 
                 & ((IData)(vlSelf->i_data_a) >> 5U)));
    vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSelf->i_data_a) >> 5U)) 
                 & ((IData)(vlSelf->i_data_b) >> 5U)));
    vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSelf->i_data_b) >> 3U)) 
                 & ((IData)(vlSelf->i_data_a) >> 3U)));
    vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSelf->i_data_a) >> 3U)) 
                 & ((IData)(vlSelf->i_data_b) >> 3U)));
    COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 
        = (IData)(((~ ((IData)(vlSelf->i_data_b) >> 7U)) 
                   & ((IData)(vlSelf->i_data_a) >> 7U)));
    COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 
        = (IData)(((~ ((IData)(vlSelf->i_data_a) >> 7U)) 
                   & ((IData)(vlSelf->i_data_b) >> 7U)));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & ((IData)((vlSelf->tb_top__DOT__w_i_data 
                                                  >> 6U)) 
                                         ^ (IData)(
                                                   (vlSelf->tb_top__DOT__w_i_data 
                                                    >> 0xeU))))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & ((IData)((vlSelf->tb_top__DOT__w_i_data 
                                                  >> 0x16U)) 
                                         ^ (IData)(
                                                   (vlSelf->tb_top__DOT__w_i_data 
                                                    >> 0x1eU))))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & ((IData)((vlSelf->tb_top__DOT__w_i_data 
                                                  >> 0x26U)) 
                                         ^ (IData)(
                                                   (vlSelf->tb_top__DOT__w_i_data 
                                                    >> 0x2eU))))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & ((IData)((vlSelf->tb_top__DOT__w_i_data 
                                                  >> 0x36U)) 
                                         ^ (IData)(
                                                   (vlSelf->tb_top__DOT__w_i_data 
                                                    >> 0x3eU))))))));
    vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2))));
    COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__w_compare 
        = (1U & ((((IData)((0x4000ULL == (0x40c0ULL 
                                          & vlSelf->tb_top__DOT__w_i_data))) 
                   | ((IData)((0xc000ULL == (0xc040ULL 
                                             & vlSelf->tb_top__DOT__w_i_data))) 
                      | (IData)((0x8000ULL == (0x8080ULL 
                                               & vlSelf->tb_top__DOT__w_i_data))))) 
                  | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & ((IData)((0x1000ULL == (0x1030ULL 
                                               & vlSelf->tb_top__DOT__w_i_data))) 
                        | ((IData)((0x3000ULL == (0x3010ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                           | (IData)((0x2000ULL == 
                                      (0x2020ULL & vlSelf->tb_top__DOT__w_i_data))))))) 
                 | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & ((IData)(
                                                        (vlSelf->tb_top__DOT__w_i_data 
                                                         >> 4U)) 
                                                ^ (IData)(
                                                          (vlSelf->tb_top__DOT__w_i_data 
                                                           >> 0xcU)))))))) 
                    & (((IData)((0x400ULL == (0x40cULL 
                                              & vlSelf->tb_top__DOT__w_i_data))) 
                        | ((IData)((0xc00ULL == (0xc04ULL 
                                                 & vlSelf->tb_top__DOT__w_i_data))) 
                           | (IData)((0x800ULL == (0x808ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))))) 
                       | ((~ (IData)((0U != (3U & ((IData)(
                                                           (vlSelf->tb_top__DOT__w_i_data 
                                                            >> 2U)) 
                                                   ^ (IData)(
                                                             (vlSelf->tb_top__DOT__w_i_data 
                                                              >> 0xaU))))))) 
                          & ((IData)((0x100ULL == (0x103ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                             | ((IData)((0x300ULL == 
                                         (0x301ULL 
                                          & vlSelf->tb_top__DOT__w_i_data))) 
                                | (IData)((0x200ULL 
                                           == (0x202ULL 
                                               & vlSelf->tb_top__DOT__w_i_data))))))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__w_compare 
        = (1U & ((((IData)((0x40000000ULL == (0x40c00000ULL 
                                              & vlSelf->tb_top__DOT__w_i_data))) 
                   | ((IData)((0xc0000000ULL == (0xc0400000ULL 
                                                 & vlSelf->tb_top__DOT__w_i_data))) 
                      | (IData)((0x80000000ULL == (0x80800000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))))) 
                  | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & ((IData)((0x10000000ULL == (0x10300000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                        | ((IData)((0x30000000ULL == 
                                    (0x30100000ULL 
                                     & vlSelf->tb_top__DOT__w_i_data))) 
                           | (IData)((0x20000000ULL 
                                      == (0x20200000ULL 
                                          & vlSelf->tb_top__DOT__w_i_data))))))) 
                 | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & ((IData)(
                                                        (vlSelf->tb_top__DOT__w_i_data 
                                                         >> 0x14U)) 
                                                ^ (IData)(
                                                          (vlSelf->tb_top__DOT__w_i_data 
                                                           >> 0x1cU)))))))) 
                    & (((IData)((0x4000000ULL == (0x40c0000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                        | ((IData)((0xc000000ULL == 
                                    (0xc040000ULL & vlSelf->tb_top__DOT__w_i_data))) 
                           | (IData)((0x8000000ULL 
                                      == (0x8080000ULL 
                                          & vlSelf->tb_top__DOT__w_i_data))))) 
                       | ((~ (IData)((0U != (3U & ((IData)(
                                                           (vlSelf->tb_top__DOT__w_i_data 
                                                            >> 0x12U)) 
                                                   ^ (IData)(
                                                             (vlSelf->tb_top__DOT__w_i_data 
                                                              >> 0x1aU))))))) 
                          & ((IData)((0x1000000ULL 
                                      == (0x1030000ULL 
                                          & vlSelf->tb_top__DOT__w_i_data))) 
                             | ((IData)((0x3000000ULL 
                                         == (0x3010000ULL 
                                             & vlSelf->tb_top__DOT__w_i_data))) 
                                | (IData)((0x2000000ULL 
                                           == (0x2020000ULL 
                                               & vlSelf->tb_top__DOT__w_i_data))))))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__w_compare 
        = (1U & ((((IData)((0x400000000000ULL == (0x40c000000000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                   | ((IData)((0xc00000000000ULL == 
                               (0xc04000000000ULL & vlSelf->tb_top__DOT__w_i_data))) 
                      | (IData)((0x800000000000ULL 
                                 == (0x808000000000ULL 
                                     & vlSelf->tb_top__DOT__w_i_data))))) 
                  | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & ((IData)((0x100000000000ULL 
                                 == (0x103000000000ULL 
                                     & vlSelf->tb_top__DOT__w_i_data))) 
                        | ((IData)((0x300000000000ULL 
                                    == (0x301000000000ULL 
                                        & vlSelf->tb_top__DOT__w_i_data))) 
                           | (IData)((0x200000000000ULL 
                                      == (0x202000000000ULL 
                                          & vlSelf->tb_top__DOT__w_i_data))))))) 
                 | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & ((IData)(
                                                        (vlSelf->tb_top__DOT__w_i_data 
                                                         >> 0x24U)) 
                                                ^ (IData)(
                                                          (vlSelf->tb_top__DOT__w_i_data 
                                                           >> 0x2cU)))))))) 
                    & (((IData)((0x40000000000ULL == 
                                 (0x40c00000000ULL 
                                  & vlSelf->tb_top__DOT__w_i_data))) 
                        | ((IData)((0xc0000000000ULL 
                                    == (0xc0400000000ULL 
                                        & vlSelf->tb_top__DOT__w_i_data))) 
                           | (IData)((0x80000000000ULL 
                                      == (0x80800000000ULL 
                                          & vlSelf->tb_top__DOT__w_i_data))))) 
                       | ((~ (IData)((0U != (3U & ((IData)(
                                                           (vlSelf->tb_top__DOT__w_i_data 
                                                            >> 0x22U)) 
                                                   ^ (IData)(
                                                             (vlSelf->tb_top__DOT__w_i_data 
                                                              >> 0x2aU))))))) 
                          & ((IData)((0x10000000000ULL 
                                      == (0x10300000000ULL 
                                          & vlSelf->tb_top__DOT__w_i_data))) 
                             | ((IData)((0x30000000000ULL 
                                         == (0x30100000000ULL 
                                             & vlSelf->tb_top__DOT__w_i_data))) 
                                | (IData)((0x20000000000ULL 
                                           == (0x20200000000ULL 
                                               & vlSelf->tb_top__DOT__w_i_data))))))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__w_compare 
        = (1U & ((((IData)((0x4000000000000000ULL == 
                            (0x40c0000000000000ULL 
                             & vlSelf->tb_top__DOT__w_i_data))) 
                   | ((IData)((0xc000000000000000ULL 
                               == (0xc040000000000000ULL 
                                   & vlSelf->tb_top__DOT__w_i_data))) 
                      | (IData)((0x8000000000000000ULL 
                                 == (0x8080000000000000ULL 
                                     & vlSelf->tb_top__DOT__w_i_data))))) 
                  | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & ((IData)((0x1000000000000000ULL 
                                 == (0x1030000000000000ULL 
                                     & vlSelf->tb_top__DOT__w_i_data))) 
                        | ((IData)((0x3000000000000000ULL 
                                    == (0x3010000000000000ULL 
                                        & vlSelf->tb_top__DOT__w_i_data))) 
                           | (IData)((0x2000000000000000ULL 
                                      == (0x2020000000000000ULL 
                                          & vlSelf->tb_top__DOT__w_i_data))))))) 
                 | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & ((IData)(
                                                        (vlSelf->tb_top__DOT__w_i_data 
                                                         >> 0x34U)) 
                                                ^ (IData)(
                                                          (vlSelf->tb_top__DOT__w_i_data 
                                                           >> 0x3cU)))))))) 
                    & (((IData)((0x400000000000000ULL 
                                 == (0x40c000000000000ULL 
                                     & vlSelf->tb_top__DOT__w_i_data))) 
                        | ((IData)((0xc00000000000000ULL 
                                    == (0xc04000000000000ULL 
                                        & vlSelf->tb_top__DOT__w_i_data))) 
                           | (IData)((0x800000000000000ULL 
                                      == (0x808000000000000ULL 
                                          & vlSelf->tb_top__DOT__w_i_data))))) 
                       | ((~ (IData)((0U != (3U & ((IData)(
                                                           (vlSelf->tb_top__DOT__w_i_data 
                                                            >> 0x32U)) 
                                                   ^ (IData)(
                                                             (vlSelf->tb_top__DOT__w_i_data 
                                                              >> 0x3aU))))))) 
                          & ((IData)((0x100000000000000ULL 
                                      == (0x103000000000000ULL 
                                          & vlSelf->tb_top__DOT__w_i_data))) 
                             | ((IData)((0x300000000000000ULL 
                                         == (0x301000000000000ULL 
                                             & vlSelf->tb_top__DOT__w_i_data))) 
                                | (IData)((0x200000000000000ULL 
                                           == (0x202000000000000ULL 
                                               & vlSelf->tb_top__DOT__w_i_data))))))))));
    vlSelf->COMP_parallel_prefix_binary__DOT__w_max_0_0 
        = ((IData)(COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
           | ((IData)(COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
              & ((~ ((IData)(vlSelf->i_data_b) >> 6U)) 
                 & ((IData)(vlSelf->i_data_a) >> 6U))));
    vlSelf->COMP_parallel_prefix_binary__DOT__w_min_0_0 
        = ((IData)(COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2) 
           | ((IData)(COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
              & ((~ ((IData)(vlSelf->i_data_a) >> 6U)) 
                 & ((IData)(vlSelf->i_data_b) >> 6U))));
    if (vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__w_compare) {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0 
            = (0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                >> 8U)));
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0 
            = (0xffU & (IData)(vlSelf->tb_top__DOT__w_i_data));
    } else {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0 
            = (0xffU & (IData)(vlSelf->tb_top__DOT__w_i_data));
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0 
            = (0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                >> 8U)));
    }
    if (vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__w_compare) {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1 
            = (0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                >> 0x18U)));
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1 
            = (0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                >> 0x10U)));
    } else {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1 
            = (0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                >> 0x10U)));
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1 
            = (0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                >> 0x18U)));
    }
    if (vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__w_compare) {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0 
            = (0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                >> 0x28U)));
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0 
            = (0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                >> 0x20U)));
    } else {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0 
            = (0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                >> 0x20U)));
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0 
            = (0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                >> 0x28U)));
    }
    if (vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__w_compare) {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1 
            = (0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                >> 0x38U)));
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1 
            = (0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                >> 0x30U)));
    } else {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1 
            = (0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                >> 0x30U)));
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1 
            = (0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                >> 0x38U)));
    }
    vlSelf->o_less = (1U & (((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__w_min_0_0) 
                             | ((~ (IData)(vlSelf->COMP_parallel_prefix_binary__DOT__w_max_0_0)) 
                                & ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                   | ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                      & ((~ ((IData)(vlSelf->i_data_a) 
                                             >> 4U)) 
                                         & ((IData)(vlSelf->i_data_b) 
                                            >> 4U)))))) 
                            | ((~ ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__w_max_0_0) 
                                   | ((~ (IData)(vlSelf->COMP_parallel_prefix_binary__DOT__w_min_0_0)) 
                                      & ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                         | ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                            & ((~ ((IData)(vlSelf->i_data_b) 
                                                   >> 4U)) 
                                               & ((IData)(vlSelf->i_data_a) 
                                                  >> 4U))))))) 
                               & (((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                   | ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                      & ((~ ((IData)(vlSelf->i_data_a) 
                                             >> 2U)) 
                                         & ((IData)(vlSelf->i_data_b) 
                                            >> 2U)))) 
                                  | ((~ ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                         | ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                            & ((~ ((IData)(vlSelf->i_data_b) 
                                                   >> 2U)) 
                                               & ((IData)(vlSelf->i_data_a) 
                                                  >> 2U))))) 
                                     & ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                        | ((~ (((~ 
                                                 ((IData)(vlSelf->i_data_b) 
                                                  >> 1U)) 
                                                & ((IData)(vlSelf->i_data_a) 
                                                   >> 1U)) 
                                               | (IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                           & ((~ (IData)(vlSelf->i_data_a)) 
                                              & (IData)(vlSelf->i_data_b)))))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                         >> 6U))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                         >> 6U))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                         >> 6U))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                         >> 6U))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__w_compare 
        = (1U & ((((IData)(((0U == (0xc0U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                               >> 6U))) | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                >> 6U)) 
                                            & (IData)(
                                                      (0xc0U 
                                                       == 
                                                       (0xc0U 
                                                        & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                           | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                  >> 7U)) 
                                              & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                 >> 7U)))) 
                  | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & ((IData)(((0U == (0x30U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                    >> 4U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                   >> 4U)) 
                                                 & (IData)(
                                                           (0x30U 
                                                            == 
                                                            (0x30U 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                     >> 5U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                      >> 5U)))))) 
                 | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                >> 4U)))))) 
                    & (((IData)(((0U == (0xcU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                    >> 2U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                   >> 2U)) 
                                                 & (IData)(
                                                           (0xcU 
                                                            == 
                                                            (0xcU 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                     >> 3U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                      >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                   >> 2U))))) 
                          & ((IData)(((0U == (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))) 
                             | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0)) 
                                 & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                     >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))) 
                                | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                  >> 1U)))))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__w_compare 
        = (1U & ((((IData)(((0U == (0xc0U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                               >> 6U))) | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                >> 6U)) 
                                            & (IData)(
                                                      (0xc0U 
                                                       == 
                                                       (0xc0U 
                                                        & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                           | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                  >> 7U)) 
                                              & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                 >> 7U)))) 
                  | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & ((IData)(((0U == (0x30U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                    >> 4U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                   >> 4U)) 
                                                 & (IData)(
                                                           (0x30U 
                                                            == 
                                                            (0x30U 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                     >> 5U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                      >> 5U)))))) 
                 | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                >> 4U)))))) 
                    & (((IData)(((0U == (0xcU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                    >> 2U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                   >> 2U)) 
                                                 & (IData)(
                                                           (0xcU 
                                                            == 
                                                            (0xcU 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                     >> 3U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                      >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                   >> 2U))))) 
                          & ((IData)(((0U == (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))) 
                             | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0)) 
                                 & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                     >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))) 
                                | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                  >> 1U)))))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__w_compare 
        = (1U & ((((IData)(((0U == (0xc0U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                               >> 6U))) | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                >> 6U)) 
                                            & (IData)(
                                                      (0xc0U 
                                                       == 
                                                       (0xc0U 
                                                        & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                           | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                  >> 7U)) 
                                              & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                 >> 7U)))) 
                  | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & ((IData)(((0U == (0x30U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                    >> 4U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                   >> 4U)) 
                                                 & (IData)(
                                                           (0x30U 
                                                            == 
                                                            (0x30U 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                     >> 5U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                      >> 5U)))))) 
                 | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                >> 4U)))))) 
                    & (((IData)(((0U == (0xcU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                    >> 2U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                   >> 2U)) 
                                                 & (IData)(
                                                           (0xcU 
                                                            == 
                                                            (0xcU 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                     >> 3U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                      >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                   >> 2U))))) 
                          & ((IData)(((0U == (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))) 
                             | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0)) 
                                 & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                     >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))) 
                                | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                  >> 1U)))))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__w_compare 
        = (1U & ((((IData)(((0U == (0xc0U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                               >> 6U))) | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                >> 6U)) 
                                            & (IData)(
                                                      (0xc0U 
                                                       == 
                                                       (0xc0U 
                                                        & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                           | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                  >> 7U)) 
                                              & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                 >> 7U)))) 
                  | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & ((IData)(((0U == (0x30U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                    >> 4U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                   >> 4U)) 
                                                 & (IData)(
                                                           (0x30U 
                                                            == 
                                                            (0x30U 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                     >> 5U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                      >> 5U)))))) 
                 | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                >> 4U)))))) 
                    & (((IData)(((0U == (0xcU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                    >> 2U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                   >> 2U)) 
                                                 & (IData)(
                                                           (0xcU 
                                                            == 
                                                            (0xcU 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                     >> 3U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                      >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                   >> 2U))))) 
                          & ((IData)(((0U == (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))) 
                             | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0)) 
                                 & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                     >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))) 
                                | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                  >> 1U)))))))));
    if (vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__w_compare) {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0;
    } else {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1;
    }
    if (vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__w_compare) {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1;
    } else {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0;
    }
    if (vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__w_compare) {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0;
    } else {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1;
    }
    if (vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__w_compare) {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1;
    } else {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0;
    }
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[0U] 
        = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0;
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[3U] 
        = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1;
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                         >> 6U))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[4U] 
        = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0;
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                         >> 6U))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[7U] 
        = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1;
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                         >> 6U))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                         >> 6U))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__w_compare 
        = (1U & ((((IData)(((0U == (0xc0U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                               >> 6U))) | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                >> 6U)) 
                                            & (IData)(
                                                      (0xc0U 
                                                       == 
                                                       (0xc0U 
                                                        & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                           | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                  >> 7U)) 
                                              & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                 >> 7U)))) 
                  | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & ((IData)(((0U == (0x30U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                    >> 4U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                   >> 4U)) 
                                                 & (IData)(
                                                           (0x30U 
                                                            == 
                                                            (0x30U 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                     >> 5U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                      >> 5U)))))) 
                 | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                >> 4U)))))) 
                    & (((IData)(((0U == (0xcU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                    >> 2U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                   >> 2U)) 
                                                 & (IData)(
                                                           (0xcU 
                                                            == 
                                                            (0xcU 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                     >> 3U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                      >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                   >> 2U))))) 
                          & ((IData)(((0U == (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))) 
                             | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0)) 
                                 & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                     >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))) 
                                | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                  >> 1U)))))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare 
        = (1U & ((((IData)(((0U == (0xc0U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                               >> 6U))) | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                >> 6U)) 
                                            & (IData)(
                                                      (0xc0U 
                                                       == 
                                                       (0xc0U 
                                                        & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                           | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                  >> 7U)) 
                                              & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                 >> 7U)))) 
                  | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & ((IData)(((0U == (0x30U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                    >> 4U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                   >> 4U)) 
                                                 & (IData)(
                                                           (0x30U 
                                                            == 
                                                            (0x30U 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                     >> 5U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                      >> 5U)))))) 
                 | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                >> 4U)))))) 
                    & (((IData)(((0U == (0xcU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                    >> 2U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                   >> 2U)) 
                                                 & (IData)(
                                                           (0xcU 
                                                            == 
                                                            (0xcU 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                     >> 3U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                      >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                   >> 2U))))) 
                          & ((IData)(((0U == (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))) 
                             | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0)) 
                                 & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                     >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))) 
                                | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                  >> 1U)))))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare 
        = (1U & ((((IData)(((0U == (0xc0U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                               >> 6U))) | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                >> 6U)) 
                                            & (IData)(
                                                      (0xc0U 
                                                       == 
                                                       (0xc0U 
                                                        & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                           | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                  >> 7U)) 
                                              & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                 >> 7U)))) 
                  | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & ((IData)(((0U == (0x30U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                    >> 4U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                   >> 4U)) 
                                                 & (IData)(
                                                           (0x30U 
                                                            == 
                                                            (0x30U 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                     >> 5U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                      >> 5U)))))) 
                 | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                >> 4U)))))) 
                    & (((IData)(((0U == (0xcU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                    >> 2U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                   >> 2U)) 
                                                 & (IData)(
                                                           (0xcU 
                                                            == 
                                                            (0xcU 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                     >> 3U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                      >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                   >> 2U))))) 
                          & ((IData)(((0U == (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))) 
                             | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)) 
                                 & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                     >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))) 
                                | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                       >> 1U)) & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                  >> 1U)))))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__w_compare 
        = (1U & ((((IData)(((0U == (0xc0U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                               >> 6U))) | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                >> 6U)) 
                                            & (IData)(
                                                      (0xc0U 
                                                       == 
                                                       (0xc0U 
                                                        & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                           | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                  >> 7U)) 
                                              & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                 >> 7U)))) 
                  | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & ((IData)(((0U == (0x30U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                    >> 4U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                   >> 4U)) 
                                                 & (IData)(
                                                           (0x30U 
                                                            == 
                                                            (0x30U 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                     >> 5U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                      >> 5U)))))) 
                 | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                >> 4U)))))) 
                    & (((IData)(((0U == (0xcU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                    >> 2U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                   >> 2U)) 
                                                 & (IData)(
                                                           (0xcU 
                                                            == 
                                                            (0xcU 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                     >> 3U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                      >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                   >> 2U))))) 
                          & ((IData)(((0U == (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))) 
                             | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0)) 
                                 & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                     >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))) 
                                | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                  >> 1U)))))))));
    if (vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__w_compare) {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0;
    } else {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1;
    }
    if (vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare) {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0;
    } else {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0;
    }
    if (vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare) {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_3 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1;
    } else {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_3 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1;
    }
    if (vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__w_compare) {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0;
    } else {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1;
    }
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[1U] 
        = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0;
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[2U] 
        = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0;
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[0U] 
        = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_0;
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[7U] 
        = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_3;
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[5U] 
        = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0;
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                         >> 6U))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[6U] 
        = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0;
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                         >> 6U))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__w_compare 
        = (1U & ((((IData)(((0U == (0xc0U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                               >> 6U))) | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                >> 6U)) 
                                            & (IData)(
                                                      (0xc0U 
                                                       == 
                                                       (0xc0U 
                                                        & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                           | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                  >> 7U)) 
                                              & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                 >> 7U)))) 
                  | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & ((IData)(((0U == (0x30U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                    >> 4U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                   >> 4U)) 
                                                 & (IData)(
                                                           (0x30U 
                                                            == 
                                                            (0x30U 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                     >> 5U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                      >> 5U)))))) 
                 | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                >> 4U)))))) 
                    & (((IData)(((0U == (0xcU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                    >> 2U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                   >> 2U)) 
                                                 & (IData)(
                                                           (0xcU 
                                                            == 
                                                            (0xcU 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                     >> 3U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                      >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                   >> 2U))))) 
                          & ((IData)(((0U == (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))) 
                             | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0)) 
                                 & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                     >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))) 
                                | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                  >> 1U)))))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__w_compare 
        = (1U & ((((IData)(((0U == (0xc0U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                               >> 6U))) | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                >> 6U)) 
                                            & (IData)(
                                                      (0xc0U 
                                                       == 
                                                       (0xc0U 
                                                        & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                           | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                  >> 7U)) 
                                              & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                 >> 7U)))) 
                  | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & ((IData)(((0U == (0x30U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                    >> 4U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                   >> 4U)) 
                                                 & (IData)(
                                                           (0x30U 
                                                            == 
                                                            (0x30U 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                     >> 5U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                      >> 5U)))))) 
                 | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                >> 4U)))))) 
                    & (((IData)(((0U == (0xcU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                    >> 2U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                   >> 2U)) 
                                                 & (IData)(
                                                           (0xcU 
                                                            == 
                                                            (0xcU 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                     >> 3U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                      >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                   >> 2U))))) 
                          & ((IData)(((0U == (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))) 
                             | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0)) 
                                 & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                     >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))) 
                                | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                  >> 1U)))))))));
    if (vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__w_compare) {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0;
    } else {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0;
    }
    if (vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__w_compare) {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0;
    } else {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0;
    }
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                         >> 6U))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                         >> 6U))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                         >> 6U))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare 
        = (1U & ((((IData)(((0U == (0xc0U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                               >> 6U))) | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                >> 6U)) 
                                            & (IData)(
                                                      (0xc0U 
                                                       == 
                                                       (0xc0U 
                                                        & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                           | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                  >> 7U)) 
                                              & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                 >> 7U)))) 
                  | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & ((IData)(((0U == (0x30U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                    >> 4U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                   >> 4U)) 
                                                 & (IData)(
                                                           (0x30U 
                                                            == 
                                                            (0x30U 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                     >> 5U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                      >> 5U)))))) 
                 | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                >> 4U)))))) 
                    & (((IData)(((0U == (0xcU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                    >> 2U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                   >> 2U)) 
                                                 & (IData)(
                                                           (0xcU 
                                                            == 
                                                            (0xcU 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                     >> 3U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                      >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                   >> 2U))))) 
                          & ((IData)(((0U == (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))) 
                             | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                 & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                     >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))) 
                                | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                  >> 1U)))))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare 
        = (1U & ((((IData)(((0U == (0xc0U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                               >> 6U))) | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                >> 6U)) 
                                            & (IData)(
                                                      (0xc0U 
                                                       == 
                                                       (0xc0U 
                                                        & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                           | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                  >> 7U)) 
                                              & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                 >> 7U)))) 
                  | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & ((IData)(((0U == (0x30U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                    >> 4U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                   >> 4U)) 
                                                 & (IData)(
                                                           (0x30U 
                                                            == 
                                                            (0x30U 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                     >> 5U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                      >> 5U)))))) 
                 | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                >> 4U)))))) 
                    & (((IData)(((0U == (0xcU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                    >> 2U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                   >> 2U)) 
                                                 & (IData)(
                                                           (0xcU 
                                                            == 
                                                            (0xcU 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                     >> 3U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                      >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                   >> 2U))))) 
                          & ((IData)(((0U == (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))) 
                             | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)) 
                                 & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                     >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))) 
                                | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                       >> 1U)) & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                  >> 1U)))))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__w_compare 
        = (1U & ((((IData)(((0U == (0xc0U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                               >> 6U))) | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                >> 6U)) 
                                            & (IData)(
                                                      (0xc0U 
                                                       == 
                                                       (0xc0U 
                                                        & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                           | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                  >> 7U)) 
                                              & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                 >> 7U)))) 
                  | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & ((IData)(((0U == (0x30U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                    >> 4U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                   >> 4U)) 
                                                 & (IData)(
                                                           (0x30U 
                                                            == 
                                                            (0x30U 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                     >> 5U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                      >> 5U)))))) 
                 | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                >> 4U)))))) 
                    & (((IData)(((0U == (0xcU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                    >> 2U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                   >> 2U)) 
                                                 & (IData)(
                                                           (0xcU 
                                                            == 
                                                            (0xcU 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                     >> 3U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                      >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                   >> 2U))))) 
                          & ((IData)(((0U == (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))) 
                             | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1)) 
                                 & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                     >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))) 
                                | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                       >> 1U)) & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                  >> 1U)))))))));
    if (vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare) {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0;
    } else {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1;
    }
    if (vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare) {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_2 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3;
    } else {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_2 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2;
    }
    if (vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__w_compare) {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1;
    } else {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2;
    }
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[1U] 
        = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_0;
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[6U] 
        = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_2;
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                         >> 6U))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                         >> 6U))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare 
        = (1U & ((((IData)(((0U == (0xc0U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                               >> 6U))) | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                >> 6U)) 
                                            & (IData)(
                                                      (0xc0U 
                                                       == 
                                                       (0xc0U 
                                                        & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                           | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                  >> 7U)) 
                                              & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                 >> 7U)))) 
                  | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & ((IData)(((0U == (0x30U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                    >> 4U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                   >> 4U)) 
                                                 & (IData)(
                                                           (0x30U 
                                                            == 
                                                            (0x30U 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                     >> 5U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                      >> 5U)))))) 
                 | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                >> 4U)))))) 
                    & (((IData)(((0U == (0xcU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                    >> 2U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                   >> 2U)) 
                                                 & (IData)(
                                                           (0xcU 
                                                            == 
                                                            (0xcU 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                     >> 3U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                      >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                   >> 2U))))) 
                          & ((IData)(((0U == (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))) 
                             | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                 & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                     >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))) 
                                | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                  >> 1U)))))))));
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare 
        = (1U & ((((IData)(((0U == (0xc0U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                               >> 6U))) | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                >> 6U)) 
                                            & (IData)(
                                                      (0xc0U 
                                                       == 
                                                       (0xc0U 
                                                        & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                           | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                  >> 7U)) 
                                              & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                 >> 7U)))) 
                  | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & ((IData)(((0U == (0x30U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                    >> 4U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                   >> 4U)) 
                                                 & (IData)(
                                                           (0x30U 
                                                            == 
                                                            (0x30U 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                     >> 5U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                      >> 5U)))))) 
                 | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                >> 4U)))))) 
                    & (((IData)(((0U == (0xcU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                    >> 2U))) | (((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                   >> 2U)) 
                                                 & (IData)(
                                                           (0xcU 
                                                            == 
                                                            (0xcU 
                                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                     >> 3U)) 
                                                   & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                      >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                   >> 2U))))) 
                          & ((IData)(((0U == (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))) 
                             | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)) 
                                 & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                     >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))) 
                                | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                       >> 1U)) & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                  >> 1U)))))))));
    if (vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare) {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0;
    } else {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1;
    }
    if (vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare) {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_1 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1;
    } else {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1;
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_1 
            = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2;
    }
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[2U] 
        = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_0;
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[3U] 
        = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0;
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[4U] 
        = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1;
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[5U] 
        = vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_1;
}

VL_ATTR_COLD void Vtb_lib___024root___eval_triggers__stl(Vtb_lib___024root* vlSelf);

VL_ATTR_COLD bool Vtb_lib___024root___eval_phase__stl(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_lib___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_lib___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lib___024root___dump_triggers__ico(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lib___024root___dump_triggers__act(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_top.i_clk or negedge tb_top.i_rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(edge tb_top.i_clk or negedge tb_top.i_rst_n or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge tb_top.i_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lib___024root___dump_triggers__nba(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_top.i_clk or negedge tb_top.i_rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(edge tb_top.i_clk or negedge tb_top.i_rst_n or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge tb_top.i_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_lib___024root___ctor_var_reset(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_data_a = VL_RAND_RESET_I(8);
    vlSelf->i_data_b = VL_RAND_RESET_I(8);
    vlSelf->o_less = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__w_i_data = VL_RAND_RESET_Q(64);
    vlSelf->tb_top__DOT__w_o_data = VL_RAND_RESET_Q(64);
    vlSelf->tb_top__DOT__w_start = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__w_finish = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DRIVER__DOT__cur_state = VL_RAND_RESET_I(2);
    vlSelf->tb_top__DOT__DRIVER__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->tb_top__DOT__DRIVER__DOT__counter = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__w_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__w_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__w_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__w_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__w_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__w_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__w_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__w_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__w_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__w_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_0 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_3 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_0 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_2 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_0 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_1 = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__w_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__w_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__w_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_count = 0;
    vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_pass = 0;
    vlSelf->tb_top__DOT__SCOREBOARD__DOT__expected_sorted = VL_RAND_RESET_Q(64);
    vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_complete = VL_RAND_RESET_I(1);
    vlSelf->COMP_parallel_prefix_binary__DOT__w_max_0_0 = VL_RAND_RESET_I(1);
    vlSelf->COMP_parallel_prefix_binary__DOT__w_min_0_0 = VL_RAND_RESET_I(1);
    vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2 = VL_RAND_RESET_I(1);
    vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 = VL_RAND_RESET_I(1);
    vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6 = VL_RAND_RESET_I(1);
    vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2 = VL_RAND_RESET_I(1);
    vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 = VL_RAND_RESET_I(1);
    vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6 = VL_RAND_RESET_I(1);
    vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__Vfuncout = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_complete__v0 = 0;
    vlSelf->__Vdlyvval__tb_top__DOT__SCOREBOARD__DOT__test_pass__v0 = 0;
    vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_pass__v0 = 0;
    vlSelf->__Vdlyvval__tb_top__DOT__SCOREBOARD__DOT__test_count__v0 = 0;
    vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_count__v0 = 0;
    vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_count__v1 = 0;
    vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_pass__v1 = 0;
    vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_complete__v1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__i_rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
