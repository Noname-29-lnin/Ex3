// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question6.h for the primary calling header

#include "Vtb_Question6__pch.h"
#include "Vtb_Question6_Compare_and_Swap_unit__I0.h"
#include "Vtb_Question6__Syms.h"

VL_INLINE_OPT void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__0\n"); );
    // Init
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 = 0;
    // Body
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [0U] >> 1U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [1U] >> 1U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [1U] >> 5U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [0U] >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [0U] >> 5U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [1U] >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [1U] >> 3U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [0U] >> 3U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [0U] >> 3U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [1U] >> 3U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [1U] >> 7U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [0U] >> 7U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [0U] >> 7U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [1U] >> 7U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2))));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                       [1U] 
                                                       >> 6U)) 
                                                     & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                        [0U] 
                                                        >> 6U))));
    vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                       [0U] 
                                                       >> 6U)) 
                                                     & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                        [1U] 
                                                        >> 6U))));
    vlSelf->__PVT__w_compare = (1U & (((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0) 
                                       | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                          & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                     [0U] 
                                                     >> 4U)) 
                                                   & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                      [1U] 
                                                      >> 4U)))))) 
                                      | ((~ ((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0) 
                                             | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                                & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                           [1U] 
                                                           >> 4U)) 
                                                         & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                            [0U] 
                                                            >> 4U))))))) 
                                         & (((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                     [0U] 
                                                     >> 2U)) 
                                                   & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                      [1U] 
                                                      >> 2U)))) 
                                            | ((~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                           [1U] 
                                                           >> 2U)) 
                                                         & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                            [0U] 
                                                            >> 2U))))) 
                                               & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                                  | ((~ 
                                                      (((~ 
                                                         (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                          [1U] 
                                                          >> 1U)) 
                                                        & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                           [0U] 
                                                           >> 1U)) 
                                                       | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                                     & ((~ 
                                                         vlSymsp->TOP.tb_Question6__DOT__i_data
                                                         [0U]) 
                                                        & vlSymsp->TOP.tb_Question6__DOT__i_data
                                                        [1U]))))))));
    if (vlSelf->__PVT__w_compare) {
        vlSelf->o_data_max = vlSymsp->TOP.tb_Question6__DOT__i_data
            [0U];
        vlSelf->o_data_min = vlSymsp->TOP.tb_Question6__DOT__i_data
            [1U];
    } else {
        vlSelf->o_data_max = vlSymsp->TOP.tb_Question6__DOT__i_data
            [1U];
        vlSelf->o_data_min = vlSymsp->TOP.tb_Question6__DOT__i_data
            [0U];
    }
}

VL_INLINE_OPT void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__0\n"); );
    // Init
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 = 0;
    // Body
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [2U] >> 1U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [3U] >> 1U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [3U] >> 5U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [2U] >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [2U] >> 5U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [3U] >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [3U] >> 3U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [2U] >> 3U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [2U] >> 3U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [3U] >> 3U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [3U] >> 7U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [2U] >> 7U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [2U] >> 7U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [3U] >> 7U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2))));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                       [3U] 
                                                       >> 6U)) 
                                                     & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                        [2U] 
                                                        >> 6U))));
    vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                       [2U] 
                                                       >> 6U)) 
                                                     & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                        [3U] 
                                                        >> 6U))));
    vlSelf->__PVT__w_compare = (1U & (((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0) 
                                       | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                          & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                     [2U] 
                                                     >> 4U)) 
                                                   & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                      [3U] 
                                                      >> 4U)))))) 
                                      | ((~ ((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0) 
                                             | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                                & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                           [3U] 
                                                           >> 4U)) 
                                                         & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                            [2U] 
                                                            >> 4U))))))) 
                                         & (((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                     [2U] 
                                                     >> 2U)) 
                                                   & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                      [3U] 
                                                      >> 2U)))) 
                                            | ((~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                           [3U] 
                                                           >> 2U)) 
                                                         & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                            [2U] 
                                                            >> 2U))))) 
                                               & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                                  | ((~ 
                                                      (((~ 
                                                         (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                          [3U] 
                                                          >> 1U)) 
                                                        & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                           [2U] 
                                                           >> 1U)) 
                                                       | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                                     & ((~ 
                                                         vlSymsp->TOP.tb_Question6__DOT__i_data
                                                         [2U]) 
                                                        & vlSymsp->TOP.tb_Question6__DOT__i_data
                                                        [3U]))))))));
    if (vlSelf->__PVT__w_compare) {
        vlSelf->o_data_max = vlSymsp->TOP.tb_Question6__DOT__i_data
            [2U];
        vlSelf->o_data_min = vlSymsp->TOP.tb_Question6__DOT__i_data
            [3U];
    } else {
        vlSelf->o_data_max = vlSymsp->TOP.tb_Question6__DOT__i_data
            [3U];
        vlSelf->o_data_min = vlSymsp->TOP.tb_Question6__DOT__i_data
            [2U];
    }
}

VL_INLINE_OPT void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__0\n"); );
    // Init
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 = 0;
    // Body
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                     >> 1U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                >> 1U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                >> 3U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                >> 3U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                     >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                >> 7U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                     >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                >> 7U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2))));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                                        >> 6U))));
    vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                        >> 6U))));
    vlSelf->__PVT__w_compare = (1U & (((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0) 
                                       | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                          & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                      >> 4U)))))) 
                                      | ((~ ((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0) 
                                             | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                                & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                           >> 4U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                                            >> 4U))))))) 
                                         & (((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                      >> 2U)))) 
                                            | ((~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                           >> 2U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                                            >> 2U))))) 
                                               & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                                  | ((~ 
                                                      (((~ 
                                                         ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                          >> 1U)) 
                                                        & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                                           >> 1U)) 
                                                       | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                                     & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max)) 
                                                        & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max)))))))));
    if (vlSelf->__PVT__w_compare) {
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max;
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max;
    } else {
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max;
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max;
    }
}

VL_INLINE_OPT void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__0\n"); );
    // Init
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 = 0;
    // Body
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                     >> 1U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                >> 1U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                >> 3U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                >> 3U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                     >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                >> 7U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                     >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                >> 7U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2))));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                        >> 6U))));
    vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                        >> 6U))));
    vlSelf->__PVT__w_compare = (1U & (((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0) 
                                       | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                          & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                      >> 4U)))))) 
                                      | ((~ ((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0) 
                                             | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                                & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                           >> 4U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                            >> 4U))))))) 
                                         & (((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                      >> 2U)))) 
                                            | ((~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                           >> 2U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                            >> 2U))))) 
                                               & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                                  | ((~ 
                                                      (((~ 
                                                         ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                          >> 1U)) 
                                                        & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                           >> 1U)) 
                                                       | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                                     & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min)) 
                                                        & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min)))))))));
    if (vlSelf->__PVT__w_compare) {
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min;
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min;
    } else {
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min;
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min;
    }
}

VL_INLINE_OPT void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__0\n"); );
    // Init
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 = 0;
    // Body
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                     >> 1U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                >> 1U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                >> 3U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                >> 3U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 
        = (IData)(((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                       >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                  >> 7U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 
        = (IData)(((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                       >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                  >> 7U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2))));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                        >> 6U))));
    vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                        >> 6U))));
    vlSelf->__PVT__w_compare = (1U & (((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0) 
                                       | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                          & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                      >> 4U)))))) 
                                      | ((~ ((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0) 
                                             | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                                & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                           >> 4U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                            >> 4U))))))) 
                                         & (((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                      >> 2U)))) 
                                            | ((~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                           >> 2U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                            >> 2U))))) 
                                               & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                                  | ((~ 
                                                      (((~ 
                                                         ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                          >> 1U)) 
                                                        & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                           >> 1U)) 
                                                       | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                                     & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min)) 
                                                        & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max)))))))));
    if (vlSelf->__PVT__w_compare) {
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min;
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max;
    } else {
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max;
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min;
    }
}

VL_INLINE_OPT void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__0\n"); );
    // Init
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 = 0;
    // Body
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [4U] >> 1U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [5U] >> 1U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [5U] >> 5U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [4U] >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [4U] >> 5U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [5U] >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [5U] >> 3U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [4U] >> 3U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [4U] >> 3U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [5U] >> 3U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [5U] >> 7U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [4U] >> 7U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [4U] >> 7U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [5U] >> 7U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2))));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                       [5U] 
                                                       >> 6U)) 
                                                     & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                        [4U] 
                                                        >> 6U))));
    vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                       [4U] 
                                                       >> 6U)) 
                                                     & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                        [5U] 
                                                        >> 6U))));
    vlSelf->__PVT__w_compare = (1U & (((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0) 
                                       | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                          & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                     [4U] 
                                                     >> 4U)) 
                                                   & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                      [5U] 
                                                      >> 4U)))))) 
                                      | ((~ ((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0) 
                                             | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                                & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                           [5U] 
                                                           >> 4U)) 
                                                         & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                            [4U] 
                                                            >> 4U))))))) 
                                         & (((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                     [4U] 
                                                     >> 2U)) 
                                                   & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                      [5U] 
                                                      >> 2U)))) 
                                            | ((~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                           [5U] 
                                                           >> 2U)) 
                                                         & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                            [4U] 
                                                            >> 2U))))) 
                                               & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                                  | ((~ 
                                                      (((~ 
                                                         (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                          [5U] 
                                                          >> 1U)) 
                                                        & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                           [4U] 
                                                           >> 1U)) 
                                                       | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                                     & ((~ 
                                                         vlSymsp->TOP.tb_Question6__DOT__i_data
                                                         [4U]) 
                                                        & vlSymsp->TOP.tb_Question6__DOT__i_data
                                                        [5U]))))))));
    if (vlSelf->__PVT__w_compare) {
        vlSelf->o_data_max = vlSymsp->TOP.tb_Question6__DOT__i_data
            [4U];
        vlSelf->o_data_min = vlSymsp->TOP.tb_Question6__DOT__i_data
            [5U];
    } else {
        vlSelf->o_data_max = vlSymsp->TOP.tb_Question6__DOT__i_data
            [5U];
        vlSelf->o_data_min = vlSymsp->TOP.tb_Question6__DOT__i_data
            [4U];
    }
}

VL_INLINE_OPT void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__0\n"); );
    // Init
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 = 0;
    // Body
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [6U] >> 1U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [7U] >> 1U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [7U] >> 5U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [6U] >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [6U] >> 5U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [7U] >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [7U] >> 3U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [6U] >> 3U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [6U] >> 3U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [7U] >> 3U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [7U] >> 7U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [6U] >> 7U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ (vlSymsp->TOP.tb_Question6__DOT__i_data
                     [6U] >> 7U)) & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                     [7U] >> 7U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2))));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                       [7U] 
                                                       >> 6U)) 
                                                     & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                        [6U] 
                                                        >> 6U))));
    vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                       [6U] 
                                                       >> 6U)) 
                                                     & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                        [7U] 
                                                        >> 6U))));
    vlSelf->__PVT__w_compare = (1U & (((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0) 
                                       | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                          & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                     [6U] 
                                                     >> 4U)) 
                                                   & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                      [7U] 
                                                      >> 4U)))))) 
                                      | ((~ ((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0) 
                                             | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                                & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                           [7U] 
                                                           >> 4U)) 
                                                         & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                            [6U] 
                                                            >> 4U))))))) 
                                         & (((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                     [6U] 
                                                     >> 2U)) 
                                                   & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                      [7U] 
                                                      >> 2U)))) 
                                            | ((~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                           [7U] 
                                                           >> 2U)) 
                                                         & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                            [6U] 
                                                            >> 2U))))) 
                                               & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                                  | ((~ 
                                                      (((~ 
                                                         (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                          [7U] 
                                                          >> 1U)) 
                                                        & (vlSymsp->TOP.tb_Question6__DOT__i_data
                                                           [6U] 
                                                           >> 1U)) 
                                                       | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                                     & ((~ 
                                                         vlSymsp->TOP.tb_Question6__DOT__i_data
                                                         [6U]) 
                                                        & vlSymsp->TOP.tb_Question6__DOT__i_data
                                                        [7U]))))))));
    if (vlSelf->__PVT__w_compare) {
        vlSelf->o_data_max = vlSymsp->TOP.tb_Question6__DOT__i_data
            [6U];
        vlSelf->o_data_min = vlSymsp->TOP.tb_Question6__DOT__i_data
            [7U];
    } else {
        vlSelf->o_data_max = vlSymsp->TOP.tb_Question6__DOT__i_data
            [7U];
        vlSelf->o_data_min = vlSymsp->TOP.tb_Question6__DOT__i_data
            [6U];
    }
}

VL_INLINE_OPT void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__0\n"); );
    // Init
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 = 0;
    // Body
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                     >> 1U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                >> 1U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                >> 3U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                >> 3U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                     >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                >> 7U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                     >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                >> 7U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2))));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                                        >> 6U))));
    vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                                        >> 6U))));
    vlSelf->__PVT__w_compare = (1U & (((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0) 
                                       | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                          & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                                      >> 4U)))))) 
                                      | ((~ ((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0) 
                                             | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                                & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                                           >> 4U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                                            >> 4U))))))) 
                                         & (((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                                      >> 2U)))) 
                                            | ((~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                                           >> 2U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                                            >> 2U))))) 
                                               & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                                  | ((~ 
                                                      (((~ 
                                                         ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                                          >> 1U)) 
                                                        & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                                           >> 1U)) 
                                                       | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                                     & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max)) 
                                                        & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max)))))))));
    if (vlSelf->__PVT__w_compare) {
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max;
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max;
    } else {
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max;
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max;
    }
}

VL_INLINE_OPT void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__0\n"); );
    // Init
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 = 0;
    // Body
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                     >> 1U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                >> 1U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                >> 3U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                >> 3U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                     >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                >> 7U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                     >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                >> 7U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2))));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                                        >> 6U))));
    vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                                        >> 6U))));
    vlSelf->__PVT__w_compare = (1U & (((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0) 
                                       | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                          & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                                      >> 4U)))))) 
                                      | ((~ ((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0) 
                                             | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                                & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                                           >> 4U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                                            >> 4U))))))) 
                                         & (((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                                      >> 2U)))) 
                                            | ((~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                                           >> 2U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                                            >> 2U))))) 
                                               & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                                  | ((~ 
                                                      (((~ 
                                                         ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                                          >> 1U)) 
                                                        & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                                           >> 1U)) 
                                                       | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                                     & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min)) 
                                                        & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min)))))))));
    if (vlSelf->__PVT__w_compare) {
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min;
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min;
    } else {
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min;
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min;
    }
}

VL_INLINE_OPT void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__0\n"); );
    // Init
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 = 0;
    // Body
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                     >> 1U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                >> 1U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                >> 3U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                >> 3U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 
        = (IData)(((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                       >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                  >> 7U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 
        = (IData)(((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                       >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                  >> 7U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2))));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                                        >> 6U))));
    vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                                        >> 6U))));
    vlSelf->__PVT__w_compare = (1U & (((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0) 
                                       | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                          & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                                      >> 4U)))))) 
                                      | ((~ ((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0) 
                                             | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                                & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                                           >> 4U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                                            >> 4U))))))) 
                                         & (((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                                      >> 2U)))) 
                                            | ((~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                                           >> 2U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                                            >> 2U))))) 
                                               & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                                  | ((~ 
                                                      (((~ 
                                                         ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                                          >> 1U)) 
                                                        & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                                           >> 1U)) 
                                                       | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                                     & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min)) 
                                                        & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max)))))))));
    if (vlSelf->__PVT__w_compare) {
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min;
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max;
    } else {
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max;
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min;
    }
}

VL_INLINE_OPT void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__0\n"); );
    // Init
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 = 0;
    // Body
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                     >> 1U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                >> 1U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                >> 3U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                >> 3U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                     >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                >> 7U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                     >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                >> 7U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2))));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                                        >> 6U))));
    vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                                        >> 6U))));
    vlSelf->__PVT__w_compare = (1U & (((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0) 
                                       | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                          & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                                      >> 4U)))))) 
                                      | ((~ ((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0) 
                                             | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                                & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                                           >> 4U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                                            >> 4U))))))) 
                                         & (((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                                      >> 2U)))) 
                                            | ((~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                                           >> 2U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                                            >> 2U))))) 
                                               & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                                  | ((~ 
                                                      (((~ 
                                                         ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                                          >> 1U)) 
                                                        & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                                           >> 1U)) 
                                                       | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                                     & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max)) 
                                                        & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max)))))))));
    if (vlSelf->__PVT__w_compare) {
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max;
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max;
    } else {
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max;
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max;
    }
}

VL_INLINE_OPT void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__0\n"); );
    // Init
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 = 0;
    // Body
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                     >> 1U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                >> 1U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                >> 3U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                >> 3U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                     >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                >> 7U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                     >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                >> 7U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2))));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                                        >> 6U))));
    vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                                        >> 6U))));
    vlSelf->__PVT__w_compare = (1U & (((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0) 
                                       | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                          & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                                      >> 4U)))))) 
                                      | ((~ ((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0) 
                                             | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                                & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                                           >> 4U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                                            >> 4U))))))) 
                                         & (((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                                      >> 2U)))) 
                                            | ((~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                                           >> 2U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                                            >> 2U))))) 
                                               & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                                  | ((~ 
                                                      (((~ 
                                                         ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                                          >> 1U)) 
                                                        & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                                           >> 1U)) 
                                                       | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                                     & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max)) 
                                                        & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max)))))))));
    if (vlSelf->__PVT__w_compare) {
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max;
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max;
    } else {
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max;
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max;
    }
}

VL_INLINE_OPT void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__0\n"); );
    // Init
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 = 0;
    // Body
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                     >> 1U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                >> 1U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                >> 3U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                >> 3U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                     >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                >> 7U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                     >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                >> 7U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2))));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                                        >> 6U))));
    vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                                        >> 6U))));
    vlSelf->__PVT__w_compare = (1U & (((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0) 
                                       | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                          & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                                      >> 4U)))))) 
                                      | ((~ ((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0) 
                                             | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                                & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                                           >> 4U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                                            >> 4U))))))) 
                                         & (((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                                      >> 2U)))) 
                                            | ((~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                                           >> 2U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                                            >> 2U))))) 
                                               & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                                  | ((~ 
                                                      (((~ 
                                                         ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                                          >> 1U)) 
                                                        & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                                           >> 1U)) 
                                                       | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                                     & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min)) 
                                                        & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min)))))))));
    if (vlSelf->__PVT__w_compare) {
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min;
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min;
    } else {
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min;
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min;
    }
}

VL_INLINE_OPT void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__0\n"); );
    // Init
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 = 0;
    // Body
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                     >> 1U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                >> 1U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                >> 3U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                >> 3U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                     >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                >> 7U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                     >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                >> 7U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2))));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                        >> 6U))));
    vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                                        >> 6U))));
    vlSelf->__PVT__w_compare = (1U & (((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0) 
                                       | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                          & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                                      >> 4U)))))) 
                                      | ((~ ((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0) 
                                             | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                                & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                                           >> 4U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                            >> 4U))))))) 
                                         & (((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                                      >> 2U)))) 
                                            | ((~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                                           >> 2U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                            >> 2U))))) 
                                               & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                                  | ((~ 
                                                      (((~ 
                                                         ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                                          >> 1U)) 
                                                        & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                           >> 1U)) 
                                                       | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                                     & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min)) 
                                                        & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min)))))))));
    if (vlSelf->__PVT__w_compare) {
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min;
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min;
    } else {
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min;
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min;
    }
}

VL_INLINE_OPT void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__0\n"); );
    // Init
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 = 0;
    // Body
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                     >> 1U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                >> 1U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                >> 3U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                >> 3U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 
        = (IData)(((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                       >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                  >> 7U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 
        = (IData)(((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                       >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                  >> 7U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2))));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                        >> 6U))));
    vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                        >> 6U))));
    vlSelf->__PVT__w_compare = (1U & (((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0) 
                                       | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                          & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                      >> 4U)))))) 
                                      | ((~ ((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0) 
                                             | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                                & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                           >> 4U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                            >> 4U))))))) 
                                         & (((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                      >> 2U)))) 
                                            | ((~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                           >> 2U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                            >> 2U))))) 
                                               & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                                  | ((~ 
                                                      (((~ 
                                                         ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                          >> 1U)) 
                                                        & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                           >> 1U)) 
                                                       | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                                     & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min)) 
                                                        & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max)))))))));
    if (vlSelf->__PVT__w_compare) {
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min;
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max;
    } else {
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max;
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min;
    }
}

VL_INLINE_OPT void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__0\n"); );
    // Init
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 = 0;
    // Body
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                     >> 1U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                >> 1U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                >> 3U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                >> 3U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 
        = (IData)(((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                       >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                  >> 7U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 
        = (IData)(((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                       >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                  >> 7U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2))));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                        >> 6U))));
    vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                                        >> 6U))));
    vlSelf->__PVT__w_compare = (1U & (((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0) 
                                       | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                          & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                                      >> 4U)))))) 
                                      | ((~ ((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0) 
                                             | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                                & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                                           >> 4U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                            >> 4U))))))) 
                                         & (((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                                      >> 2U)))) 
                                            | ((~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                                           >> 2U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                            >> 2U))))) 
                                               & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                                  | ((~ 
                                                      (((~ 
                                                         ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                                          >> 1U)) 
                                                        & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                           >> 1U)) 
                                                       | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                                     & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min)) 
                                                        & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max)))))))));
    if (vlSelf->__PVT__w_compare) {
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min;
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max;
    } else {
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max;
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min;
    }
}

VL_INLINE_OPT void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__0\n"); );
    // Init
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 = 0;
    // Body
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                     >> 1U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                >> 1U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                >> 3U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                >> 3U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 
        = (IData)(((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                       >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                  >> 7U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 
        = (IData)(((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                       >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                  >> 7U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2))));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                                        >> 6U))));
    vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                                        >> 6U))));
    vlSelf->__PVT__w_compare = (1U & (((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0) 
                                       | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                          & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                                      >> 4U)))))) 
                                      | ((~ ((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0) 
                                             | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                                & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                                           >> 4U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                                            >> 4U))))))) 
                                         & (((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                                      >> 2U)))) 
                                            | ((~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                                           >> 2U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                                            >> 2U))))) 
                                               & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                                  | ((~ 
                                                      (((~ 
                                                         ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                                          >> 1U)) 
                                                        & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                                           >> 1U)) 
                                                       | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                                     & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min)) 
                                                        & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max)))))))));
    if (vlSelf->__PVT__w_compare) {
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max;
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min;
    } else {
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min;
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max;
    }
}

VL_INLINE_OPT void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__0\n"); );
    // Init
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 = 0;
    // Body
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                     >> 1U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                >> 1U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                >> 3U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                >> 3U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 
        = (IData)(((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                       >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                  >> 7U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 
        = (IData)(((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                       >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                  >> 7U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2))));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                        >> 6U))));
    vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                        >> 6U))));
    vlSelf->__PVT__w_compare = (1U & (((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0) 
                                       | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                          & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                      >> 4U)))))) 
                                      | ((~ ((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0) 
                                             | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                                & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                           >> 4U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                            >> 4U))))))) 
                                         & (((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                      >> 2U)))) 
                                            | ((~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                           >> 2U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                            >> 2U))))) 
                                               & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                                  | ((~ 
                                                      (((~ 
                                                         ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                          >> 1U)) 
                                                        & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                           >> 1U)) 
                                                       | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                                     & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min)) 
                                                        & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max)))))))));
    if (vlSelf->__PVT__w_compare) {
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min;
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max;
    } else {
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max;
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min;
    }
}

VL_INLINE_OPT void Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__0(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_Question6_Compare_and_Swap_unit__I0___act_sequent__TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__0\n"); );
    // Init
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 = 0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6;
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 = 0;
    // Body
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                     >> 1U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                >> 1U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                     >> 5U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                >> 5U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                >> 3U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2 
        = (1U & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                >> 3U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6 
        = (IData)(((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                       >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                  >> 7U)));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2 
        = (IData)(((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                       >> 7U)) & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                  >> 7U)));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2))));
    COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3 
        = (1U & (~ ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                    | (IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2))));
    vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_6) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                        >> 6U))));
    vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0 = ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_2) 
                                               | ((IData)(COMP_UNT__DOT__PPBC_black_cell_unit_0__DOT____VdfgRegularize_h96a12798_0_3) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                       >> 6U)) 
                                                     & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                                        >> 6U))));
    vlSelf->__PVT__w_compare = (1U & (((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0) 
                                       | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                          & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                                      >> 4U)))))) 
                                      | ((~ ((IData)(vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0) 
                                             | ((~ (IData)(vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                                & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                                           >> 4U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                            >> 4U))))))) 
                                         & (((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                             | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                                      >> 2U)))) 
                                            | ((~ ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                                   | ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                                           >> 2U)) 
                                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                            >> 2U))))) 
                                               & ((IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                                  | ((~ 
                                                      (((~ 
                                                         ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                                          >> 1U)) 
                                                        & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                           >> 1U)) 
                                                       | (IData)(vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                                     & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min)) 
                                                        & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max)))))))));
    if (vlSelf->__PVT__w_compare) {
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min;
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max;
    } else {
        vlSelf->o_data_max = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max;
        vlSelf->o_data_min = vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min;
    }
}
