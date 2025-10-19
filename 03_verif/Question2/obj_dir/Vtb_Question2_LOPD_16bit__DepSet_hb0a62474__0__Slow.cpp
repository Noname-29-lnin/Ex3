// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question2.h for the primary calling header

#include "Vtb_Question2__pch.h"
#include "Vtb_Question2_LOPD_16bit.h"

VL_ATTR_COLD void Vtb_Question2_LOPD_16bit___ctor_var_reset(Vtb_Question2_LOPD_16bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_Question2_LOPD_16bit___ctor_var_reset\n"); );
    // Body
    vlSelf->i_data = VL_RAND_RESET_I(16);
    vlSelf->o_pos_one = VL_RAND_RESET_I(4);
    vlSelf->o_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_pos_one_0 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__w_zero_flag_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_pos_one_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__w_zero_flag_1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__i_data = VL_RAND_RESET_I(16);
    vlSelf->__Vtogcov__o_pos_one = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__o_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__w_pos_one_0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtogcov__w_zero_flag_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__w_pos_one_1 = VL_RAND_RESET_I(3);
    vlSelf->__Vtogcov__w_zero_flag_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_zero_flag_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1 = VL_RAND_RESET_I(2);
    vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_0 = VL_RAND_RESET_I(1);
    vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0 = VL_RAND_RESET_I(2);
    vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_1 = VL_RAND_RESET_I(1);
    vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_zero_flag_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1 = VL_RAND_RESET_I(2);
    vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_0 = VL_RAND_RESET_I(1);
    vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0 = VL_RAND_RESET_I(2);
    vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_1 = VL_RAND_RESET_I(1);
    vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1 = VL_RAND_RESET_I(2);
    vlSelf->__VdfgRegularize_h1f2f0f73_0_2 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h1f2f0f73_0_5 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h1f2f0f73_0_6 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h1f2f0f73_0_7 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h1f2f0f73_0_8 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h1f2f0f73_0_9 = VL_RAND_RESET_I(1);
}
