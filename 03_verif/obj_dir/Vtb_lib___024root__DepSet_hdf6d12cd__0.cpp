// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_lib.h for the primary calling header

#include "Vtb_lib__pch.h"
#include "Vtb_lib___024root.h"

VL_ATTR_COLD void Vtb_lib___024root___eval_initial__TOP(Vtb_lib___024root* vlSelf);
VlCoroutine Vtb_lib___024root___eval_initial__TOP__Vtiming__0(Vtb_lib___024root* vlSelf);
VlCoroutine Vtb_lib___024root___eval_initial__TOP__Vtiming__1(Vtb_lib___024root* vlSelf);
VlCoroutine Vtb_lib___024root___eval_initial__TOP__Vtiming__2(Vtb_lib___024root* vlSelf);

void Vtb_lib___024root___eval_initial(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___eval_initial\n"); );
    // Body
    Vtb_lib___024root___eval_initial__TOP(vlSelf);
    Vtb_lib___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_lib___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_lib___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__i_clk__0 
        = vlSelf->tb_top__DOT__i_clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__i_rst_n__0 
        = vlSelf->tb_top__DOT__i_rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_lib___024root___eval_initial__TOP__Vtiming__0(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_top__DOT__i_clk = 1U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Ex3/03_verif/tb_lib.sv", 
                                           9);
        vlSelf->tb_top__DOT__i_clk = (1U & (~ (IData)(vlSelf->tb_top__DOT__i_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_lib___024root___eval_initial__TOP__Vtiming__1(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSelf->tb_top__DOT__i_rst_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/tb_lib.sv", 
                                       17);
    vlSelf->tb_top__DOT__i_rst_n = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_lib___024root___eval_initial__TOP__Vtiming__2(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h45b4f461__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_top.i_clk or negedge tb_top.i_rst_n)", 
                                                           "/home/noname/Documents/project_tiny/Ex3/03_verif/SCOREBOARD/scoreboard.sv", 
                                                           147);
        if (vlSelf->tb_top__DOT__i_rst_n) {
            if (VL_UNLIKELY(((IData)(vlSelf->tb_top__DOT__w_finish) 
                             & (~ (IData)(vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_complete))))) {
                co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                                   nullptr, 
                                                   "/home/noname/Documents/project_tiny/Ex3/03_verif/SCOREBOARD/scoreboard.sv", 
                                                   154);
                VL_WRITEF_NX("\n================================\n==========TEST SUMMARY==========\nTotal test cases: %6d    \nPassed          : %6d    \nFailed          : %6d    \n",0,
                             32,vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_count,
                             32,vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_pass,
                             32,(vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_count 
                                 - vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_pass));
                if (VL_LTS_III(32, 0U, vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_count)) {
                    VL_WRITEF_NX("Pass rate       : %0.2f%%\n",0,
                                 64,((100.0 * VL_ISTOR_D_I(32, vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_pass)) 
                                     / VL_ISTOR_D_I(32, vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_count)));
                } else {
                    VL_WRITEF_NX("Pass rate       : N/A (no tests)\n",0);
                }
                VL_WRITEF_NX("================================\n",0);
                co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                                   nullptr, 
                                                   "/home/noname/Documents/project_tiny/Ex3/03_verif/SCOREBOARD/scoreboard.sv", 
                                                   166);
                vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_complete__v0 = 1U;
                VL_FINISH_MT("/home/noname/Documents/project_tiny/Ex3/03_verif/SCOREBOARD/scoreboard.sv", 168, "");
            } else if (((IData)(vlSelf->tb_top__DOT__w_start) 
                        & (~ (IData)(vlSelf->tb_top__DOT__w_finish)))) {
                co_await vlSelf->__VtrigSched_h07ac3bfd__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge tb_top.i_clk)", 
                                                                   "/home/noname/Documents/project_tiny/Ex3/03_verif/SCOREBOARD/scoreboard.sv", 
                                                                   171);
                co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                   nullptr, 
                                                   "/home/noname/Documents/project_tiny/Ex3/03_verif/SCOREBOARD/scoreboard.sv", 
                                                   172);
                if ((vlSelf->tb_top__DOT__w_o_data 
                     == vlSelf->tb_top__DOT__SCOREBOARD__DOT__expected_sorted)) {
                    VL_WRITEF_NX("[TIME: %5t] [Random] - PASS: Expect: %8x, DUT: %8x \n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,64,vlSelf->tb_top__DOT__w_o_data,
                                 64,vlSelf->tb_top__DOT__SCOREBOARD__DOT__expected_sorted);
                    vlSelf->__Vdlyvval__tb_top__DOT__SCOREBOARD__DOT__test_pass__v0 
                        = ((IData)(1U) + vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_pass);
                    vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_pass__v0 = 1U;
                } else {
                    VL_WRITEF_NX("[TIME: %5t] [Random] - FAIL: Expect: %8x, DUT: %8x \n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,64,vlSelf->tb_top__DOT__w_o_data,
                                 64,vlSelf->tb_top__DOT__SCOREBOARD__DOT__expected_sorted);
                }
                vlSelf->__Vdlyvval__tb_top__DOT__SCOREBOARD__DOT__test_count__v0 
                    = ((IData)(1U) + vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_count);
                vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_count__v0 = 1U;
            }
        } else {
            vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_count__v1 = 1U;
            vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_pass__v1 = 1U;
            vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_complete__v1 = 1U;
        }
    }
}

void Vtb_lib___024root___ico_sequent__TOP__0(Vtb_lib___024root* vlSelf);

void Vtb_lib___024root___eval_ico(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_lib___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_lib___024root___ico_sequent__TOP__0(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2;
    COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 = 0;
    CData/*0:0*/ COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3;
    COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 = 0;
    CData/*0:0*/ COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6;
    COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 = 0;
    // Body
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
    vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2))));
    COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2))));
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
}

void Vtb_lib___024root___eval_triggers__ico(Vtb_lib___024root* vlSelf);

bool Vtb_lib___024root___eval_phase__ico(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtb_lib___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtb_lib___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtb_lib___024root___act_sequent__TOP__0(Vtb_lib___024root* vlSelf);

void Vtb_lib___024root___eval_act(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_lib___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_lib___024root___act_sequent__TOP__0(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_top__DOT__DRIVER__DOT__next_state = 
        ((0U == (IData)(vlSelf->tb_top__DOT__DRIVER__DOT__cur_state))
          ? ((IData)(vlSelf->tb_top__DOT__i_rst_n) ? 1U
              : 0U) : ((1U == (IData)(vlSelf->tb_top__DOT__DRIVER__DOT__cur_state))
                        ? (VL_GTS_III(32, 0x64U, vlSelf->tb_top__DOT__DRIVER__DOT__counter)
                            ? 1U : 2U) : ((2U == (IData)(vlSelf->tb_top__DOT__DRIVER__DOT__cur_state))
                                           ? 2U : 0U)));
}

void Vtb_lib___024root___nba_sequent__TOP__0(Vtb_lib___024root* vlSelf);
void Vtb_lib___024root___nba_sequent__TOP__1(Vtb_lib___024root* vlSelf);

void Vtb_lib___024root___eval_nba(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_lib___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_lib___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_lib___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_lib___024root___nba_sequent__TOP__0(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___nba_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__Vfuncout;
    __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__Vfuncout = 0;
    VlUnpacked<CData/*7:0*/, 8> __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_arr;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_arr[__Vi0] = 0;
    }
    QData/*63:0*/ __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_out;
    __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_out = 0;
    QData/*63:0*/ __Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__f_i_data;
    __Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__f_i_data = 0;
    IData/*31:0*/ __Vdly__tb_top__DOT__DRIVER__DOT__counter;
    __Vdly__tb_top__DOT__DRIVER__DOT__counter = 0;
    // Body
    __Vdly__tb_top__DOT__DRIVER__DOT__counter = vlSelf->tb_top__DOT__DRIVER__DOT__counter;
    vlSelf->tb_top__DOT__w_o_data = ((IData)(vlSelf->tb_top__DOT__i_rst_n)
                                      ? (((QData)((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_3)) 
                                          << 0x38U) 
                                         | (((QData)((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_2)) 
                                             << 0x30U) 
                                            | (((QData)((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_1)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_0) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_0) 
                                                                            << 8U) 
                                                                           | (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_0))))))))))
                                      : 0ULL);
    if (vlSelf->tb_top__DOT__i_rst_n) {
        if ((0U == (IData)(vlSelf->tb_top__DOT__DRIVER__DOT__cur_state))) {
            vlSelf->tb_top__DOT__w_start = 0U;
            vlSelf->tb_top__DOT__w_finish = 0U;
            vlSelf->tb_top__DOT__w_i_data = 0ULL;
            __Vdly__tb_top__DOT__DRIVER__DOT__counter = 0U;
        } else if ((1U == (IData)(vlSelf->tb_top__DOT__DRIVER__DOT__cur_state))) {
            __Vdly__tb_top__DOT__DRIVER__DOT__counter 
                = ((IData)(1U) + vlSelf->tb_top__DOT__DRIVER__DOT__counter);
            __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_arr[0U] 
                = (0xffU & VL_URANDOM_RANGE_I(0U, 0xffU));
            vlSelf->tb_top__DOT__w_start = 1U;
            vlSelf->tb_top__DOT__w_finish = 0U;
            __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_arr[1U] 
                = (0xffU & VL_URANDOM_RANGE_I(0U, 0xffU));
            __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_arr[2U] 
                = (0xffU & VL_URANDOM_RANGE_I(0U, 0xffU));
            __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_arr[3U] 
                = (0xffU & VL_URANDOM_RANGE_I(0U, 0xffU));
            __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_arr[4U] 
                = (0xffU & VL_URANDOM_RANGE_I(0U, 0xffU));
            __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_arr[5U] 
                = (0xffU & VL_URANDOM_RANGE_I(0U, 0xffU));
            __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_arr[6U] 
                = (0xffU & VL_URANDOM_RANGE_I(0U, 0xffU));
            __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_arr[7U] 
                = (0xffU & VL_URANDOM_RANGE_I(0U, 0xffU));
            __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_out 
                = ((0xffffffffff000000ULL & __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_out) 
                   | (IData)((IData)(((__Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_arr
                                       [2U] << 0x10U) 
                                      | ((__Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_arr
                                          [1U] << 8U) 
                                         | __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_arr
                                         [0U])))));
            __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_out 
                = ((0xffff000000ffffffULL & __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_out) 
                   | ((QData)((IData)(((__Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_arr
                                        [5U] << 0x10U) 
                                       | ((__Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_arr
                                           [4U] << 8U) 
                                          | __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_arr
                                          [3U])))) 
                      << 0x18U));
            __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_out 
                = ((0xffffffffffffULL & __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_out) 
                   | ((QData)((IData)(((__Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_arr
                                        [7U] << 8U) 
                                       | __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_arr
                                       [6U]))) << 0x30U));
            __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__Vfuncout 
                = __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__f_out;
            vlSelf->tb_top__DOT__w_i_data = __Vfunc_tb_top__DOT__DRIVER__DOT__f_random_value__2__Vfuncout;
        } else if ((2U == (IData)(vlSelf->tb_top__DOT__DRIVER__DOT__cur_state))) {
            vlSelf->tb_top__DOT__w_start = 0U;
            vlSelf->tb_top__DOT__w_finish = 1U;
            vlSelf->tb_top__DOT__w_i_data = 0ULL;
        }
        vlSelf->tb_top__DOT__DRIVER__DOT__cur_state 
            = vlSelf->tb_top__DOT__DRIVER__DOT__next_state;
    } else {
        vlSelf->tb_top__DOT__DRIVER__DOT__cur_state = 0U;
        __Vdly__tb_top__DOT__DRIVER__DOT__counter = 0U;
        vlSelf->tb_top__DOT__w_i_data = 0ULL;
        vlSelf->tb_top__DOT__w_start = 0U;
        vlSelf->tb_top__DOT__w_finish = 0U;
    }
    vlSelf->tb_top__DOT__DRIVER__DOT__counter = __Vdly__tb_top__DOT__DRIVER__DOT__counter;
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

VL_INLINE_OPT void Vtb_lib___024root___nba_sequent__TOP__1(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_count__v1) {
        vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_count = 0U;
        vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_count__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_pass__v1) {
        vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_pass = 0U;
        vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_pass__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_complete__v0) {
        vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_complete = 1U;
        vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_complete__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_complete__v1) {
        vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_complete = 0U;
        vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_complete__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_pass__v0) {
        vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_pass 
            = vlSelf->__Vdlyvval__tb_top__DOT__SCOREBOARD__DOT__test_pass__v0;
        vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_pass__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_count__v0) {
        vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_count 
            = vlSelf->__Vdlyvval__tb_top__DOT__SCOREBOARD__DOT__test_count__v0;
        vlSelf->__Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_count__v0 = 0U;
    }
}

void Vtb_lib___024root___timing_resume(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h45b4f461__0.resume("@(posedge tb_top.i_clk or negedge tb_top.i_rst_n)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h07ac3bfd__0.resume("@(negedge tb_top.i_clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_lib___024root___timing_commit(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h45b4f461__0.commit("@(posedge tb_top.i_clk or negedge tb_top.i_rst_n)");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h07ac3bfd__0.commit("@(negedge tb_top.i_clk)");
    }
}

void Vtb_lib___024root___eval_triggers__act(Vtb_lib___024root* vlSelf);

bool Vtb_lib___024root___eval_phase__act(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_lib___024root___eval_triggers__act(vlSelf);
    Vtb_lib___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_lib___024root___timing_resume(vlSelf);
        Vtb_lib___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_lib___024root___eval_phase__nba(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_lib___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lib___024root___dump_triggers__ico(Vtb_lib___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lib___024root___dump_triggers__nba(Vtb_lib___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lib___024root___dump_triggers__act(Vtb_lib___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_lib___024root___eval(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___eval\n"); );
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
            Vtb_lib___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/noname/Documents/project_tiny/Ex3/03_verif/tb_top.sv", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtb_lib___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_lib___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/noname/Documents/project_tiny/Ex3/03_verif/tb_top.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_lib___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/noname/Documents/project_tiny/Ex3/03_verif/tb_top.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_lib___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_lib___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_lib___024root___eval_debug_assertions(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
