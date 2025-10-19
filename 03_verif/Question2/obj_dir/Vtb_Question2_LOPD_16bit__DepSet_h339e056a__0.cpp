// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question2.h for the primary calling header

#include "Vtb_Question2__pch.h"
#include "Vtb_Question2_LOPD_16bit.h"
#include "Vtb_Question2__Syms.h"

VL_INLINE_OPT void Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__0(Vtb_Question2_LOPD_16bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__0\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
               ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->__Vtogcov__i_data = ((0xfffeU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (1U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((2U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
               ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->__Vtogcov__i_data = ((0xfffdU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (2U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((4U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
               ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->__Vtogcov__i_data = ((0xfffbU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (4U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((8U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
               ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->__Vtogcov__i_data = ((0xfff7U & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (8U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x10U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                  ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->__Vtogcov__i_data = ((0xffefU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x10U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x20U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                  ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->__Vtogcov__i_data = ((0xffdfU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x20U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x40U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                  ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->__Vtogcov__i_data = ((0xffbfU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x40U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x80U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                  ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->__Vtogcov__i_data = ((0xff7fU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x80U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x100U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                   ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->__Vtogcov__i_data = ((0xfeffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x100U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x200U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                   ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->__Vtogcov__i_data = ((0xfdffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x200U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x400U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                   ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->__Vtogcov__i_data = ((0xfbffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x400U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x800U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                   ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->__Vtogcov__i_data = ((0xf7ffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x800U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x1000U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                    ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->__Vtogcov__i_data = ((0xefffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x1000U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x2000U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                    ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->__Vtogcov__i_data = ((0xdfffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x2000U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x4000U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                    ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->__Vtogcov__i_data = ((0xbfffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x4000U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x8000U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                    ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->__Vtogcov__i_data = ((0x7fffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x8000U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
}

VL_INLINE_OPT void Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__1(Vtb_Question2_LOPD_16bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__1\n"); );
    // Body
    vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0 
        = (((IData)((0U != (0xcU & vlSymsp->TOP.tb_Question2__DOT__i_data))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                 >> 1U)) & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                                            >> 1U)) 
                            | (vlSymsp->TOP.tb_Question2__DOT__i_data 
                               >> 3U))));
    if ((1U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0 
            = ((2U & (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0 
            = ((1U & (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0)));
    }
    vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_zero_flag_0 
        = (1U & (~ (((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                     >> 1U) | ((vlSymsp->TOP.tb_Question2__DOT__i_data 
                                >> 1U) | vlSymsp->TOP.tb_Question2__DOT__i_data))));
    if (((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_zero_flag_0;
    }
}

VL_INLINE_OPT void Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__2(Vtb_Question2_LOPD_16bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__2\n"); );
    // Body
    vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0 
        = (((IData)((0U != (0xc00U & vlSymsp->TOP.tb_Question2__DOT__i_data))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                 >> 1U)) & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                                            >> 9U)) 
                            | (vlSymsp->TOP.tb_Question2__DOT__i_data 
                               >> 0xbU))));
    if ((1U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0 
            = ((2U & (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0 
            = ((1U & (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0)));
    }
    vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_zero_flag_0 
        = (1U & (~ (((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                     >> 1U) | (IData)((0U != (0x300U 
                                              & vlSymsp->TOP.tb_Question2__DOT__i_data))))));
    if (((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_zero_flag_0;
    }
}

VL_INLINE_OPT void Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__3(Vtb_Question2_LOPD_16bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__3\n"); );
    // Body
    vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1 
        = (((IData)((0U != (0xc0U & vlSymsp->TOP.tb_Question2__DOT__i_data))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                 >> 1U)) & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                                            >> 5U)) 
                            | (vlSymsp->TOP.tb_Question2__DOT__i_data 
                               >> 7U))));
    if ((1U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1 
            = ((2U & (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1 
            = ((1U & (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1)));
    }
    vlSelf->__VdfgRegularize_h1f2f0f73_0_2 = (IData)(
                                                     (((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                       >> 1U) 
                                                      | (0U 
                                                         != 
                                                         (0x30U 
                                                          & vlSymsp->TOP.tb_Question2__DOT__i_data))));
    if ((1U ^ ((IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_2) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_1)))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_1 
            = (1U & (~ (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_2)));
    }
}

VL_INLINE_OPT void Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__4(Vtb_Question2_LOPD_16bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__4\n"); );
    // Body
    vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1 
        = (((IData)((0U != (0xc000U & vlSymsp->TOP.tb_Question2__DOT__i_data))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                 >> 1U)) & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                                            >> 0xdU)) 
                            | (vlSymsp->TOP.tb_Question2__DOT__i_data 
                               >> 0xfU))));
    if ((1U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1 
            = ((2U & (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1 
            = ((1U & (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1)));
    }
    vlSelf->__VdfgRegularize_h1f2f0f73_0_5 = (IData)(
                                                     (((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                       >> 1U) 
                                                      | (0U 
                                                         != 
                                                         (0x3000U 
                                                          & vlSymsp->TOP.tb_Question2__DOT__i_data))));
    if ((1U ^ ((IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_5) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_1)))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_1 
            = (1U & (~ (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_5)));
    }
}

VL_INLINE_OPT void Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__5(Vtb_Question2_LOPD_16bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__5\n"); );
    // Body
    vlSelf->__PVT__w_zero_flag_0 = ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                                    & (~ (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_2)));
    if (vlSelf->__VdfgRegularize_h1f2f0f73_0_2) {
        vlSelf->__VdfgRegularize_h1f2f0f73_0_8 = (1U 
                                                  & (IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1));
        vlSelf->__VdfgRegularize_h1f2f0f73_0_9 = (1U 
                                                  & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                     >> 1U));
    } else {
        vlSelf->__VdfgRegularize_h1f2f0f73_0_8 = (1U 
                                                  & (IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0));
        vlSelf->__VdfgRegularize_h1f2f0f73_0_9 = (1U 
                                                  & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                     >> 1U));
    }
    if (((IData)(vlSelf->__PVT__w_zero_flag_0) ^ (IData)(vlSelf->__Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->__Vtogcov__w_zero_flag_0 = vlSelf->__PVT__w_zero_flag_0;
    }
    vlSelf->__PVT__w_pos_one_0 = (((IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_2) 
                                   << 2U) | (((IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_9) 
                                              << 1U) 
                                             | (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_8)));
    if ((1U & ((IData)(vlSelf->__PVT__w_pos_one_0) 
               ^ (IData)(vlSelf->__Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->__Vtogcov__w_pos_one_0 = ((6U & (IData)(vlSelf->__Vtogcov__w_pos_one_0)) 
                                          | (1U & (IData)(vlSelf->__PVT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_pos_one_0) 
               ^ (IData)(vlSelf->__Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->__Vtogcov__w_pos_one_0 = ((5U & (IData)(vlSelf->__Vtogcov__w_pos_one_0)) 
                                          | (2U & (IData)(vlSelf->__PVT__w_pos_one_0)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_pos_one_0) 
               ^ (IData)(vlSelf->__Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->__Vtogcov__w_pos_one_0 = ((3U & (IData)(vlSelf->__Vtogcov__w_pos_one_0)) 
                                          | (4U & (IData)(vlSelf->__PVT__w_pos_one_0)));
    }
}

VL_INLINE_OPT void Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__6(Vtb_Question2_LOPD_16bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__6\n"); );
    // Body
    vlSelf->__PVT__w_zero_flag_1 = ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_zero_flag_0) 
                                    & (~ (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_5)));
    if (vlSelf->__VdfgRegularize_h1f2f0f73_0_5) {
        vlSelf->__VdfgRegularize_h1f2f0f73_0_6 = (1U 
                                                  & (IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1));
        vlSelf->__VdfgRegularize_h1f2f0f73_0_7 = (1U 
                                                  & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                     >> 1U));
    } else {
        vlSelf->__VdfgRegularize_h1f2f0f73_0_6 = (1U 
                                                  & (IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0));
        vlSelf->__VdfgRegularize_h1f2f0f73_0_7 = (1U 
                                                  & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                                     >> 1U));
    }
    if (((IData)(vlSelf->__PVT__w_zero_flag_1) ^ (IData)(vlSelf->__Vtogcov__w_zero_flag_1))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->__Vtogcov__w_zero_flag_1 = vlSelf->__PVT__w_zero_flag_1;
    }
    vlSelf->__PVT__w_pos_one_1 = (((IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_5) 
                                   << 2U) | (((IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_7) 
                                              << 1U) 
                                             | (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_6)));
    if ((1U & ((IData)(vlSelf->__PVT__w_pos_one_1) 
               ^ (IData)(vlSelf->__Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->__Vtogcov__w_pos_one_1 = ((6U & (IData)(vlSelf->__Vtogcov__w_pos_one_1)) 
                                          | (1U & (IData)(vlSelf->__PVT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_pos_one_1) 
               ^ (IData)(vlSelf->__Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->__Vtogcov__w_pos_one_1 = ((5U & (IData)(vlSelf->__Vtogcov__w_pos_one_1)) 
                                          | (2U & (IData)(vlSelf->__PVT__w_pos_one_1)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_pos_one_1) 
               ^ (IData)(vlSelf->__Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->__Vtogcov__w_pos_one_1 = ((3U & (IData)(vlSelf->__Vtogcov__w_pos_one_1)) 
                                          | (4U & (IData)(vlSelf->__PVT__w_pos_one_1)));
    }
}

VL_INLINE_OPT void Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__7(Vtb_Question2_LOPD_16bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__7\n"); );
    // Body
    vlSelf->o_zero_flag = ((IData)(vlSelf->__PVT__w_zero_flag_0) 
                           & (IData)(vlSelf->__PVT__w_zero_flag_1));
    vlSelf->o_pos_one = ((8U & ((~ (IData)(vlSelf->__PVT__w_zero_flag_1)) 
                                << 3U)) | ((((IData)(vlSelf->__PVT__w_zero_flag_1)
                                              ? (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_2)
                                              : (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_5)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->__PVT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_9)
                                                 : (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_7)) 
                                               << 1U) 
                                              | ((IData)(vlSelf->__PVT__w_zero_flag_1)
                                                  ? (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_8)
                                                  : (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_6)))));
    if (((IData)(vlSelf->o_zero_flag) ^ (IData)(vlSelf->__Vtogcov__o_zero_flag))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->__Vtogcov__o_zero_flag = vlSelf->o_zero_flag;
    }
    if ((1U & ((IData)(vlSelf->o_pos_one) ^ (IData)(vlSelf->__Vtogcov__o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->__Vtogcov__o_pos_one = ((0xeU & (IData)(vlSelf->__Vtogcov__o_pos_one)) 
                                        | (1U & (IData)(vlSelf->o_pos_one)));
    }
    if ((2U & ((IData)(vlSelf->o_pos_one) ^ (IData)(vlSelf->__Vtogcov__o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->__Vtogcov__o_pos_one = ((0xdU & (IData)(vlSelf->__Vtogcov__o_pos_one)) 
                                        | (2U & (IData)(vlSelf->o_pos_one)));
    }
    if ((4U & ((IData)(vlSelf->o_pos_one) ^ (IData)(vlSelf->__Vtogcov__o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->__Vtogcov__o_pos_one = ((0xbU & (IData)(vlSelf->__Vtogcov__o_pos_one)) 
                                        | (4U & (IData)(vlSelf->o_pos_one)));
    }
    if ((8U & ((IData)(vlSelf->o_pos_one) ^ (IData)(vlSelf->__Vtogcov__o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->__Vtogcov__o_pos_one = ((7U & (IData)(vlSelf->__Vtogcov__o_pos_one)) 
                                        | (8U & (IData)(vlSelf->o_pos_one)));
    }
}

VL_INLINE_OPT void Vtb_Question2_LOPD_16bit___nba_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__0(Vtb_Question2_LOPD_16bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_Question2_LOPD_16bit___nba_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__0\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
               ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->__Vtogcov__i_data = ((0xfffeU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (1U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((2U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
               ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->__Vtogcov__i_data = ((0xfffdU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (2U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((4U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
               ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->__Vtogcov__i_data = ((0xfffbU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (4U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((8U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
               ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->__Vtogcov__i_data = ((0xfff7U & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (8U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x10U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                  ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->__Vtogcov__i_data = ((0xffefU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x10U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x20U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                  ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->__Vtogcov__i_data = ((0xffdfU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x20U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x40U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                  ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->__Vtogcov__i_data = ((0xffbfU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x40U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x80U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                  ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->__Vtogcov__i_data = ((0xff7fU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x80U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x100U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                   ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->__Vtogcov__i_data = ((0xfeffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x100U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x200U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                   ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->__Vtogcov__i_data = ((0xfdffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x200U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x400U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                   ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->__Vtogcov__i_data = ((0xfbffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x400U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x800U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                   ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->__Vtogcov__i_data = ((0xf7ffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x800U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x1000U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                    ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->__Vtogcov__i_data = ((0xefffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x1000U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x2000U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                    ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->__Vtogcov__i_data = ((0xdfffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x2000U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x4000U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                    ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->__Vtogcov__i_data = ((0xbfffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x4000U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    if ((0x8000U & (vlSymsp->TOP.tb_Question2__DOT__i_data 
                    ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->__Vtogcov__i_data = ((0x7fffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x8000U & vlSymsp->TOP.tb_Question2__DOT__i_data));
    }
    vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_zero_flag_0 
        = (1U & (~ (((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                     >> 1U) | ((vlSymsp->TOP.tb_Question2__DOT__i_data 
                                >> 1U) | vlSymsp->TOP.tb_Question2__DOT__i_data))));
    vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_zero_flag_0 
        = (1U & (~ (((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                     >> 1U) | (IData)((0U != (0x300U 
                                              & vlSymsp->TOP.tb_Question2__DOT__i_data))))));
    vlSelf->__VdfgRegularize_h1f2f0f73_0_2 = (IData)(
                                                     (((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                       >> 1U) 
                                                      | (0U 
                                                         != 
                                                         (0x30U 
                                                          & vlSymsp->TOP.tb_Question2__DOT__i_data))));
    vlSelf->__VdfgRegularize_h1f2f0f73_0_5 = (IData)(
                                                     (((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                       >> 1U) 
                                                      | (0U 
                                                         != 
                                                         (0x3000U 
                                                          & vlSymsp->TOP.tb_Question2__DOT__i_data))));
    if (((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_zero_flag_0;
    }
    if (((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_zero_flag_0;
    }
    if ((1U ^ ((IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_2) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_1)))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_1 
            = (1U & (~ (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_2)));
    }
    vlSelf->__PVT__w_zero_flag_0 = ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                                    & (~ (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_2)));
    if (vlSelf->__VdfgRegularize_h1f2f0f73_0_2) {
        vlSelf->__VdfgRegularize_h1f2f0f73_0_8 = (1U 
                                                  & (IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1));
        vlSelf->__VdfgRegularize_h1f2f0f73_0_9 = (1U 
                                                  & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                     >> 1U));
    } else {
        vlSelf->__VdfgRegularize_h1f2f0f73_0_8 = (1U 
                                                  & (IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0));
        vlSelf->__VdfgRegularize_h1f2f0f73_0_9 = (1U 
                                                  & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                     >> 1U));
    }
    if ((1U ^ ((IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_5) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_1)))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_1 
            = (1U & (~ (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_5)));
    }
    vlSelf->__PVT__w_zero_flag_1 = ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_zero_flag_0) 
                                    & (~ (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_5)));
    if (vlSelf->__VdfgRegularize_h1f2f0f73_0_5) {
        vlSelf->__VdfgRegularize_h1f2f0f73_0_6 = (1U 
                                                  & (IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1));
        vlSelf->__VdfgRegularize_h1f2f0f73_0_7 = (1U 
                                                  & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                     >> 1U));
    } else {
        vlSelf->__VdfgRegularize_h1f2f0f73_0_6 = (1U 
                                                  & (IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0));
        vlSelf->__VdfgRegularize_h1f2f0f73_0_7 = (1U 
                                                  & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                                     >> 1U));
    }
    if (((IData)(vlSelf->__PVT__w_zero_flag_0) ^ (IData)(vlSelf->__Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->__Vtogcov__w_zero_flag_0 = vlSelf->__PVT__w_zero_flag_0;
    }
    vlSelf->__PVT__w_pos_one_0 = (((IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_2) 
                                   << 2U) | (((IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_9) 
                                              << 1U) 
                                             | (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_8)));
    if (((IData)(vlSelf->__PVT__w_zero_flag_1) ^ (IData)(vlSelf->__Vtogcov__w_zero_flag_1))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->__Vtogcov__w_zero_flag_1 = vlSelf->__PVT__w_zero_flag_1;
    }
    vlSelf->o_zero_flag = ((IData)(vlSelf->__PVT__w_zero_flag_0) 
                           & (IData)(vlSelf->__PVT__w_zero_flag_1));
    vlSelf->__PVT__w_pos_one_1 = (((IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_5) 
                                   << 2U) | (((IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_7) 
                                              << 1U) 
                                             | (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_6)));
    vlSelf->o_pos_one = ((8U & ((~ (IData)(vlSelf->__PVT__w_zero_flag_1)) 
                                << 3U)) | ((((IData)(vlSelf->__PVT__w_zero_flag_1)
                                              ? (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_2)
                                              : (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_5)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->__PVT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_9)
                                                 : (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_7)) 
                                               << 1U) 
                                              | ((IData)(vlSelf->__PVT__w_zero_flag_1)
                                                  ? (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_8)
                                                  : (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_6)))));
    if ((1U & ((IData)(vlSelf->__PVT__w_pos_one_0) 
               ^ (IData)(vlSelf->__Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->__Vtogcov__w_pos_one_0 = ((6U & (IData)(vlSelf->__Vtogcov__w_pos_one_0)) 
                                          | (1U & (IData)(vlSelf->__PVT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_pos_one_0) 
               ^ (IData)(vlSelf->__Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->__Vtogcov__w_pos_one_0 = ((5U & (IData)(vlSelf->__Vtogcov__w_pos_one_0)) 
                                          | (2U & (IData)(vlSelf->__PVT__w_pos_one_0)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_pos_one_0) 
               ^ (IData)(vlSelf->__Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->__Vtogcov__w_pos_one_0 = ((3U & (IData)(vlSelf->__Vtogcov__w_pos_one_0)) 
                                          | (4U & (IData)(vlSelf->__PVT__w_pos_one_0)));
    }
    if (((IData)(vlSelf->o_zero_flag) ^ (IData)(vlSelf->__Vtogcov__o_zero_flag))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->__Vtogcov__o_zero_flag = vlSelf->o_zero_flag;
    }
    if ((1U & ((IData)(vlSelf->__PVT__w_pos_one_1) 
               ^ (IData)(vlSelf->__Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->__Vtogcov__w_pos_one_1 = ((6U & (IData)(vlSelf->__Vtogcov__w_pos_one_1)) 
                                          | (1U & (IData)(vlSelf->__PVT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_pos_one_1) 
               ^ (IData)(vlSelf->__Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->__Vtogcov__w_pos_one_1 = ((5U & (IData)(vlSelf->__Vtogcov__w_pos_one_1)) 
                                          | (2U & (IData)(vlSelf->__PVT__w_pos_one_1)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_pos_one_1) 
               ^ (IData)(vlSelf->__Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->__Vtogcov__w_pos_one_1 = ((3U & (IData)(vlSelf->__Vtogcov__w_pos_one_1)) 
                                          | (4U & (IData)(vlSelf->__PVT__w_pos_one_1)));
    }
    if ((1U & ((IData)(vlSelf->o_pos_one) ^ (IData)(vlSelf->__Vtogcov__o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->__Vtogcov__o_pos_one = ((0xeU & (IData)(vlSelf->__Vtogcov__o_pos_one)) 
                                        | (1U & (IData)(vlSelf->o_pos_one)));
    }
    if ((2U & ((IData)(vlSelf->o_pos_one) ^ (IData)(vlSelf->__Vtogcov__o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->__Vtogcov__o_pos_one = ((0xdU & (IData)(vlSelf->__Vtogcov__o_pos_one)) 
                                        | (2U & (IData)(vlSelf->o_pos_one)));
    }
    if ((4U & ((IData)(vlSelf->o_pos_one) ^ (IData)(vlSelf->__Vtogcov__o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->__Vtogcov__o_pos_one = ((0xbU & (IData)(vlSelf->__Vtogcov__o_pos_one)) 
                                        | (4U & (IData)(vlSelf->o_pos_one)));
    }
    if ((8U & ((IData)(vlSelf->o_pos_one) ^ (IData)(vlSelf->__Vtogcov__o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->__Vtogcov__o_pos_one = ((7U & (IData)(vlSelf->__Vtogcov__o_pos_one)) 
                                        | (8U & (IData)(vlSelf->o_pos_one)));
    }
}

VL_INLINE_OPT void Vtb_Question2_LOPD_16bit___ico_sequent__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__0(Vtb_Question2_LOPD_16bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_Question2_LOPD_16bit___ico_sequent__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__0\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.i_data ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->__Vtogcov__i_data = ((0xfffeU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (1U & vlSymsp->TOP.i_data));
    }
    if ((2U & (vlSymsp->TOP.i_data ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->__Vtogcov__i_data = ((0xfffdU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (2U & vlSymsp->TOP.i_data));
    }
    if ((4U & (vlSymsp->TOP.i_data ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->__Vtogcov__i_data = ((0xfffbU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (4U & vlSymsp->TOP.i_data));
    }
    if ((8U & (vlSymsp->TOP.i_data ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->__Vtogcov__i_data = ((0xfff7U & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (8U & vlSymsp->TOP.i_data));
    }
    if ((0x10U & (vlSymsp->TOP.i_data ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->__Vtogcov__i_data = ((0xffefU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x10U & vlSymsp->TOP.i_data));
    }
    if ((0x20U & (vlSymsp->TOP.i_data ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->__Vtogcov__i_data = ((0xffdfU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x20U & vlSymsp->TOP.i_data));
    }
    if ((0x40U & (vlSymsp->TOP.i_data ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->__Vtogcov__i_data = ((0xffbfU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x40U & vlSymsp->TOP.i_data));
    }
    if ((0x80U & (vlSymsp->TOP.i_data ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->__Vtogcov__i_data = ((0xff7fU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x80U & vlSymsp->TOP.i_data));
    }
    if ((0x100U & (vlSymsp->TOP.i_data ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->__Vtogcov__i_data = ((0xfeffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x100U & vlSymsp->TOP.i_data));
    }
    if ((0x200U & (vlSymsp->TOP.i_data ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->__Vtogcov__i_data = ((0xfdffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x200U & vlSymsp->TOP.i_data));
    }
    if ((0x400U & (vlSymsp->TOP.i_data ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->__Vtogcov__i_data = ((0xfbffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x400U & vlSymsp->TOP.i_data));
    }
    if ((0x800U & (vlSymsp->TOP.i_data ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->__Vtogcov__i_data = ((0xf7ffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x800U & vlSymsp->TOP.i_data));
    }
    if ((0x1000U & (vlSymsp->TOP.i_data ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->__Vtogcov__i_data = ((0xefffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x1000U & vlSymsp->TOP.i_data));
    }
    if ((0x2000U & (vlSymsp->TOP.i_data ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->__Vtogcov__i_data = ((0xdfffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x2000U & vlSymsp->TOP.i_data));
    }
    if ((0x4000U & (vlSymsp->TOP.i_data ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->__Vtogcov__i_data = ((0xbfffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x4000U & vlSymsp->TOP.i_data));
    }
    if ((0x8000U & (vlSymsp->TOP.i_data ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->__Vtogcov__i_data = ((0x7fffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x8000U & vlSymsp->TOP.i_data));
    }
}

VL_INLINE_OPT void Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__0(Vtb_Question2_LOPD_16bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__0\n"); );
    // Body
    vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0 
        = (((IData)((0U != (0xcU & vlSymsp->TOP.i_data))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                 >> 1U)) & (vlSymsp->TOP.i_data 
                                            >> 1U)) 
                            | (vlSymsp->TOP.i_data 
                               >> 3U))));
    if ((1U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0 
            = ((2U & (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0 
            = ((1U & (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0)));
    }
    vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_zero_flag_0 
        = (1U & (~ (((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                     >> 1U) | ((vlSymsp->TOP.i_data 
                                >> 1U) | vlSymsp->TOP.i_data))));
    if (((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_zero_flag_0;
    }
}

VL_INLINE_OPT void Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__1(Vtb_Question2_LOPD_16bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__1\n"); );
    // Body
    vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0 
        = (((IData)((0U != (0xc00U & vlSymsp->TOP.i_data))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                 >> 1U)) & (vlSymsp->TOP.i_data 
                                            >> 9U)) 
                            | (vlSymsp->TOP.i_data 
                               >> 0xbU))));
    if ((1U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0 
            = ((2U & (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0 
            = ((1U & (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0)));
    }
    vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_zero_flag_0 
        = (1U & (~ (((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                     >> 1U) | (IData)((0U != (0x300U 
                                              & vlSymsp->TOP.i_data))))));
    if (((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_zero_flag_0;
    }
}

VL_INLINE_OPT void Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__2(Vtb_Question2_LOPD_16bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__2\n"); );
    // Body
    vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1 
        = (((IData)((0U != (0xc0U & vlSymsp->TOP.i_data))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                 >> 1U)) & (vlSymsp->TOP.i_data 
                                            >> 5U)) 
                            | (vlSymsp->TOP.i_data 
                               >> 7U))));
    if ((1U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1 
            = ((2U & (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1 
            = ((1U & (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1)));
    }
    vlSelf->__VdfgRegularize_h1f2f0f73_0_2 = (IData)(
                                                     (((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                       >> 1U) 
                                                      | (0U 
                                                         != 
                                                         (0x30U 
                                                          & vlSymsp->TOP.i_data))));
    if ((1U ^ ((IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_2) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_1)))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_1 
            = (1U & (~ (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_2)));
    }
}

VL_INLINE_OPT void Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__3(Vtb_Question2_LOPD_16bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__3\n"); );
    // Body
    vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1 
        = (((IData)((0U != (0xc000U & vlSymsp->TOP.i_data))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                 >> 1U)) & (vlSymsp->TOP.i_data 
                                            >> 0xdU)) 
                            | (vlSymsp->TOP.i_data 
                               >> 0xfU))));
    if ((1U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1 
            = ((2U & (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1 
            = ((1U & (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1)));
    }
    vlSelf->__VdfgRegularize_h1f2f0f73_0_5 = (IData)(
                                                     (((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                       >> 1U) 
                                                      | (0U 
                                                         != 
                                                         (0x3000U 
                                                          & vlSymsp->TOP.i_data))));
    if ((1U ^ ((IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_5) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_1)))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_1 
            = (1U & (~ (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_5)));
    }
}

VL_INLINE_OPT void Vtb_Question2_LOPD_16bit___ico_sequent__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__0(Vtb_Question2_LOPD_16bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_Question2_LOPD_16bit___ico_sequent__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.i_data >> 0x10U) ^ (IData)(vlSelf->__Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->__Vtogcov__i_data = ((0xfffeU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (1U & (vlSymsp->TOP.i_data 
                                              >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.i_data >> 0x11U) ^ ((IData)(vlSelf->__Vtogcov__i_data) 
                                                 >> 1U)))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->__Vtogcov__i_data = ((0xfffdU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (2U & (vlSymsp->TOP.i_data 
                                              >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.i_data >> 0x12U) ^ ((IData)(vlSelf->__Vtogcov__i_data) 
                                                 >> 2U)))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->__Vtogcov__i_data = ((0xfffbU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (4U & (vlSymsp->TOP.i_data 
                                              >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.i_data >> 0x13U) ^ ((IData)(vlSelf->__Vtogcov__i_data) 
                                                 >> 3U)))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->__Vtogcov__i_data = ((0xfff7U & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (8U & (vlSymsp->TOP.i_data 
                                              >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.i_data >> 0x14U) ^ ((IData)(vlSelf->__Vtogcov__i_data) 
                                                 >> 4U)))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->__Vtogcov__i_data = ((0xffefU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x10U & (vlSymsp->TOP.i_data 
                                                 >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.i_data >> 0x15U) ^ ((IData)(vlSelf->__Vtogcov__i_data) 
                                                 >> 5U)))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->__Vtogcov__i_data = ((0xffdfU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x20U & (vlSymsp->TOP.i_data 
                                                 >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.i_data >> 0x16U) ^ ((IData)(vlSelf->__Vtogcov__i_data) 
                                                 >> 6U)))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->__Vtogcov__i_data = ((0xffbfU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x40U & (vlSymsp->TOP.i_data 
                                                 >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.i_data >> 0x17U) ^ ((IData)(vlSelf->__Vtogcov__i_data) 
                                                 >> 7U)))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->__Vtogcov__i_data = ((0xff7fU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x80U & (vlSymsp->TOP.i_data 
                                                 >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.i_data >> 0x18U) ^ ((IData)(vlSelf->__Vtogcov__i_data) 
                                                 >> 8U)))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->__Vtogcov__i_data = ((0xfeffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x100U & (vlSymsp->TOP.i_data 
                                                  >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.i_data >> 0x19U) ^ ((IData)(vlSelf->__Vtogcov__i_data) 
                                                 >> 9U)))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->__Vtogcov__i_data = ((0xfdffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x200U & (vlSymsp->TOP.i_data 
                                                  >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.i_data >> 0x1aU) ^ ((IData)(vlSelf->__Vtogcov__i_data) 
                                                 >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->__Vtogcov__i_data = ((0xfbffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x400U & (vlSymsp->TOP.i_data 
                                                  >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.i_data >> 0x1bU) ^ ((IData)(vlSelf->__Vtogcov__i_data) 
                                                 >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->__Vtogcov__i_data = ((0xf7ffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x800U & (vlSymsp->TOP.i_data 
                                                  >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.i_data >> 0x1cU) ^ ((IData)(vlSelf->__Vtogcov__i_data) 
                                                 >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->__Vtogcov__i_data = ((0xefffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x1000U & (vlSymsp->TOP.i_data 
                                                   >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.i_data >> 0x1dU) ^ ((IData)(vlSelf->__Vtogcov__i_data) 
                                                 >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->__Vtogcov__i_data = ((0xdfffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x2000U & (vlSymsp->TOP.i_data 
                                                   >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.i_data >> 0x1eU) ^ ((IData)(vlSelf->__Vtogcov__i_data) 
                                                 >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->__Vtogcov__i_data = ((0xbfffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x4000U & (vlSymsp->TOP.i_data 
                                                   >> 0x10U)));
    }
    if (((vlSymsp->TOP.i_data >> 0x1fU) ^ ((IData)(vlSelf->__Vtogcov__i_data) 
                                           >> 0xfU))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->__Vtogcov__i_data = ((0x7fffU & (IData)(vlSelf->__Vtogcov__i_data)) 
                                     | (0x8000U & (vlSymsp->TOP.i_data 
                                                   >> 0x10U)));
    }
}

VL_INLINE_OPT void Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__0(Vtb_Question2_LOPD_16bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__0\n"); );
    // Body
    vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0 
        = (((IData)((0U != (0xc0000U & vlSymsp->TOP.i_data))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                 >> 1U)) & (vlSymsp->TOP.i_data 
                                            >> 0x11U)) 
                            | (vlSymsp->TOP.i_data 
                               >> 0x13U))));
    if ((1U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0 
            = ((2U & (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0 
            = ((1U & (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0)));
    }
    vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_zero_flag_0 
        = (1U & (~ (((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                     >> 1U) | (IData)((0U != (0x30000U 
                                              & vlSymsp->TOP.i_data))))));
    if (((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_zero_flag_0;
    }
}

VL_INLINE_OPT void Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__1(Vtb_Question2_LOPD_16bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__1\n"); );
    // Body
    vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0 
        = (((IData)((0U != (0xc000000U & vlSymsp->TOP.i_data))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                 >> 1U)) & (vlSymsp->TOP.i_data 
                                            >> 0x19U)) 
                            | (vlSymsp->TOP.i_data 
                               >> 0x1bU))));
    if ((1U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0 
            = ((2U & (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0 
            = ((1U & (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0)));
    }
    vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_zero_flag_0 
        = (1U & (~ (((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                     >> 1U) | (IData)((0U != (0x3000000U 
                                              & vlSymsp->TOP.i_data))))));
    if (((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_zero_flag_0;
    }
}

VL_INLINE_OPT void Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__2(Vtb_Question2_LOPD_16bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__2\n"); );
    // Body
    vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1 
        = (((IData)((0U != (0xc00000U & vlSymsp->TOP.i_data))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                 >> 1U)) & (vlSymsp->TOP.i_data 
                                            >> 0x15U)) 
                            | (vlSymsp->TOP.i_data 
                               >> 0x17U))));
    if ((1U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1 
            = ((2U & (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1 
            = ((1U & (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1)));
    }
    vlSelf->__VdfgRegularize_h1f2f0f73_0_2 = (IData)(
                                                     (((IData)(vlSelf->__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                       >> 1U) 
                                                      | (0U 
                                                         != 
                                                         (0x300000U 
                                                          & vlSymsp->TOP.i_data))));
    if ((1U ^ ((IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_2) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_1)))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_1 
            = (1U & (~ (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_2)));
    }
}

VL_INLINE_OPT void Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__3(Vtb_Question2_LOPD_16bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__3\n"); );
    // Body
    vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1 
        = (((IData)((0U != (0xc0000000U & vlSymsp->TOP.i_data))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                 >> 1U)) & (vlSymsp->TOP.i_data 
                                            >> 0x1dU)) 
                            | (vlSymsp->TOP.i_data 
                               >> 0x1fU))));
    if ((1U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1 
            = ((2U & (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1 
            = ((1U & (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1)));
    }
    vlSelf->__VdfgRegularize_h1f2f0f73_0_5 = (IData)(
                                                     (((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                       >> 1U) 
                                                      | (0U 
                                                         != 
                                                         (0x30000000U 
                                                          & vlSymsp->TOP.i_data))));
    if ((1U ^ ((IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_5) 
               ^ (IData)(vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_1)))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_1 
            = (1U & (~ (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_5)));
    }
}

VL_INLINE_OPT void Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__5(Vtb_Question2_LOPD_16bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__5\n"); );
    // Body
    if (vlSelf->__VdfgRegularize_h1f2f0f73_0_5) {
        vlSelf->__VdfgRegularize_h1f2f0f73_0_6 = (1U 
                                                  & (IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1));
        vlSelf->__VdfgRegularize_h1f2f0f73_0_7 = (1U 
                                                  & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                     >> 1U));
    } else {
        vlSelf->__VdfgRegularize_h1f2f0f73_0_6 = (1U 
                                                  & (IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0));
        vlSelf->__VdfgRegularize_h1f2f0f73_0_7 = (1U 
                                                  & ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                                     >> 1U));
    }
    vlSelf->__PVT__w_zero_flag_1 = ((IData)(vlSelf->__PVT__LOPD_8bit_unit_1__DOT__w_zero_flag_0) 
                                    & (~ (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_5)));
    vlSelf->__PVT__w_pos_one_1 = (((IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_5) 
                                   << 2U) | (((IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_7) 
                                              << 1U) 
                                             | (IData)(vlSelf->__VdfgRegularize_h1f2f0f73_0_6)));
    if (((IData)(vlSelf->__PVT__w_zero_flag_1) ^ (IData)(vlSelf->__Vtogcov__w_zero_flag_1))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->__Vtogcov__w_zero_flag_1 = vlSelf->__PVT__w_zero_flag_1;
    }
    if ((1U & ((IData)(vlSelf->__PVT__w_pos_one_1) 
               ^ (IData)(vlSelf->__Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->__Vtogcov__w_pos_one_1 = ((6U & (IData)(vlSelf->__Vtogcov__w_pos_one_1)) 
                                          | (1U & (IData)(vlSelf->__PVT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_pos_one_1) 
               ^ (IData)(vlSelf->__Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->__Vtogcov__w_pos_one_1 = ((5U & (IData)(vlSelf->__Vtogcov__w_pos_one_1)) 
                                          | (2U & (IData)(vlSelf->__PVT__w_pos_one_1)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_pos_one_1) 
               ^ (IData)(vlSelf->__Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->__Vtogcov__w_pos_one_1 = ((3U & (IData)(vlSelf->__Vtogcov__w_pos_one_1)) 
                                          | (4U & (IData)(vlSelf->__PVT__w_pos_one_1)));
    }
}
