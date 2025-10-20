// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question6.h for the primary calling header

#include "Vtb_Question6__pch.h"
#include "Vtb_Question6_Compare_and_Swap_unit__I0.h"

VL_ATTR_COLD void Vtb_Question6_Compare_and_Swap_unit__I0___ctor_var_reset(Vtb_Question6_Compare_and_Swap_unit__I0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_Question6_Compare_and_Swap_unit__I0___ctor_var_reset\n"); );
    // Body
    vlSelf->i_data_a = VL_RAND_RESET_I(8);
    vlSelf->i_data_b = VL_RAND_RESET_I(8);
    vlSelf->o_data_max = VL_RAND_RESET_I(8);
    vlSelf->o_data_min = VL_RAND_RESET_I(8);
    vlSelf->__PVT__w_compare = VL_RAND_RESET_I(1);
    vlSelf->__PVT__COMP_UNT__DOT__w_max_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__COMP_UNT__DOT__w_min_0_0 = VL_RAND_RESET_I(1);
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2 = VL_RAND_RESET_I(1);
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3 = VL_RAND_RESET_I(1);
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6 = VL_RAND_RESET_I(1);
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2 = VL_RAND_RESET_I(1);
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3 = VL_RAND_RESET_I(1);
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6 = VL_RAND_RESET_I(1);
    vlSelf->COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2 = VL_RAND_RESET_I(1);
}
