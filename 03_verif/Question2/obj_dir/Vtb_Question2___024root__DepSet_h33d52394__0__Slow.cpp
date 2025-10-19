// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question2.h for the primary calling header

#include "Vtb_Question2__pch.h"
#include "Vtb_Question2___024root.h"

VL_ATTR_COLD void Vtb_Question2___024root___eval_static(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_Question2___024root___eval_final(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question2___024root___dump_triggers__stl(Vtb_Question2___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_Question2___024root___eval_phase__stl(Vtb_Question2___024root* vlSelf);

VL_ATTR_COLD void Vtb_Question2___024root___eval_settle(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___eval_settle\n"); );
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
            Vtb_Question2___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_Question2___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question2___024root___dump_triggers__stl(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tb_Question2.DUT.DUT.LOPD_8bit_UNIT_MSB.w_pos_one_0)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] tb_Question2.DUT.DUT.LOPD_8bit_UNIT_MSB.w_pos_one_1)\n");
    }
    if ((8ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] tb_Question2.DUT.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0.w_pos_one_0)\n");
    }
    if ((0x10ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] tb_Question2.DUT.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0.w_pos_one_1)\n");
    }
    if ((0x20ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] tb_Question2.DUT.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1.w_pos_one_0)\n");
    }
    if ((0x40ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] tb_Question2.DUT.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1.w_pos_one_1)\n");
    }
    if ((0x80ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_0.LOPD_8bit_unit_0.w_pos_one_0)\n");
    }
    if ((0x100ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_0.LOPD_8bit_unit_0.w_pos_one_1)\n");
    }
    if ((0x200ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 9 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_0.LOPD_8bit_unit_1.w_pos_one_0)\n");
    }
    if ((0x400ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 10 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_0.LOPD_8bit_unit_1.w_pos_one_1)\n");
    }
    if ((0x800ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 11 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_1.LOPD_8bit_unit_0.w_pos_one_0)\n");
    }
    if ((0x1000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 12 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_1.LOPD_8bit_unit_0.w_pos_one_1)\n");
    }
    if ((0x2000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 13 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_1.LOPD_8bit_unit_1.w_pos_one_0)\n");
    }
    if ((0x4000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 14 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_1.LOPD_8bit_unit_1.w_pos_one_1)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_Question2___024root___eval_triggers__stl(Vtb_Question2___024root* vlSelf);
VL_ATTR_COLD void Vtb_Question2___024root___eval_stl(Vtb_Question2___024root* vlSelf);

VL_ATTR_COLD bool Vtb_Question2___024root___eval_phase__stl(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_Question2___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_Question2___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question2___024root___dump_triggers__ico(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_0.LOPD_8bit_unit_0.w_pos_one_0)\n");
    }
    if ((4ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 2 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_0.LOPD_8bit_unit_0.w_pos_one_1)\n");
    }
    if ((8ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 3 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_0.LOPD_8bit_unit_1.w_pos_one_0)\n");
    }
    if ((0x10ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 4 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_0.LOPD_8bit_unit_1.w_pos_one_1)\n");
    }
    if ((0x20ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 5 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_1.LOPD_8bit_unit_0.w_pos_one_0)\n");
    }
    if ((0x40ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 6 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_1.LOPD_8bit_unit_0.w_pos_one_1)\n");
    }
    if ((0x80ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 7 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_1.LOPD_8bit_unit_1.w_pos_one_0)\n");
    }
    if ((0x100ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 8 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_1.LOPD_8bit_unit_1.w_pos_one_1)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question2___024root___dump_triggers__act(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tb_Question2.DUT.DUT.LOPD_8bit_UNIT_MSB.w_pos_one_0)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] tb_Question2.DUT.DUT.LOPD_8bit_UNIT_MSB.w_pos_one_1)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] tb_Question2.DUT.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0.w_pos_one_0)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] tb_Question2.DUT.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0.w_pos_one_1)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] tb_Question2.DUT.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1.w_pos_one_0)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] tb_Question2.DUT.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1.w_pos_one_1)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_0.LOPD_8bit_unit_0.w_pos_one_0)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_0.LOPD_8bit_unit_0.w_pos_one_1)\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_0.LOPD_8bit_unit_1.w_pos_one_0)\n");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_0.LOPD_8bit_unit_1.w_pos_one_1)\n");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_1.LOPD_8bit_unit_0.w_pos_one_0)\n");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_1.LOPD_8bit_unit_0.w_pos_one_1)\n");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_1.LOPD_8bit_unit_1.w_pos_one_0)\n");
    }
    if ((0x2000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_1.LOPD_8bit_unit_1.w_pos_one_1)\n");
    }
    if ((0x4000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @(posedge tb_Question2.i_clk or negedge tb_Question2.i_rst_n)\n");
    }
    if ((0x8000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @(posedge tb_Question2.i_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question2___024root___dump_triggers__nba(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tb_Question2.DUT.DUT.LOPD_8bit_UNIT_MSB.w_pos_one_0)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] tb_Question2.DUT.DUT.LOPD_8bit_UNIT_MSB.w_pos_one_1)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] tb_Question2.DUT.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0.w_pos_one_0)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] tb_Question2.DUT.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0.w_pos_one_1)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] tb_Question2.DUT.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1.w_pos_one_0)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] tb_Question2.DUT.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1.w_pos_one_1)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_0.LOPD_8bit_unit_0.w_pos_one_0)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_0.LOPD_8bit_unit_0.w_pos_one_1)\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_0.LOPD_8bit_unit_1.w_pos_one_0)\n");
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_0.LOPD_8bit_unit_1.w_pos_one_1)\n");
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_1.LOPD_8bit_unit_0.w_pos_one_0)\n");
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_1.LOPD_8bit_unit_0.w_pos_one_1)\n");
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_1.LOPD_8bit_unit_1.w_pos_one_0)\n");
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @([hybrid] LOPD_32bit.LOPD_16bit_unit_1.LOPD_8bit_unit_1.w_pos_one_1)\n");
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @(posedge tb_Question2.i_clk or negedge tb_Question2.i_rst_n)\n");
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @(posedge tb_Question2.i_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_Question2___024root___ctor_var_reset(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_data = VL_RAND_RESET_I(32);
    vlSelf->o_pos_one = VL_RAND_RESET_I(5);
    vlSelf->o_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_Question2__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_Question2__DOT__i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_Question2__DOT__i_addr = VL_RAND_RESET_I(24);
    vlSelf->tb_Question2__DOT__i_data = VL_RAND_RESET_I(24);
    vlSelf->tb_Question2__DOT__o_addr = VL_RAND_RESET_I(24);
    vlSelf->tb_Question2__DOT__o_one_position = VL_RAND_RESET_I(5);
    vlSelf->tb_Question2__DOT__o_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_Question2__DOT__bit_pos = 0;
    vlSelf->tb_Question2__DOT____Vtogcov__i_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_Question2__DOT____Vtogcov__i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_Question2__DOT____Vtogcov__i_addr = VL_RAND_RESET_I(24);
    vlSelf->tb_Question2__DOT____Vtogcov__i_data = VL_RAND_RESET_I(24);
    vlSelf->tb_Question2__DOT____Vtogcov__o_addr = VL_RAND_RESET_I(24);
    vlSelf->tb_Question2__DOT____Vtogcov__o_one_position = VL_RAND_RESET_I(5);
    vlSelf->tb_Question2__DOT____Vtogcov__o_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_Question2__DOT__DUT__DOT__w_o_addr = VL_RAND_RESET_I(24);
    vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position = VL_RAND_RESET_I(5);
    vlSelf->tb_Question2__DOT__DUT__DOT__w_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_o_addr = VL_RAND_RESET_I(24);
    vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position = VL_RAND_RESET_I(5);
    vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_pos_one = VL_RAND_RESET_I(3);
    vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one = VL_RAND_RESET_I(4);
    vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one = VL_RAND_RESET_I(3);
    vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0 = VL_RAND_RESET_I(2);
    vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1 = VL_RAND_RESET_I(2);
    vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0 = VL_RAND_RESET_I(2);
    vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1 = VL_RAND_RESET_I(2);
    vlSelf->LOPD_32bit__DOT____Vtogcov__i_data = VL_RAND_RESET_I(32);
    vlSelf->LOPD_32bit__DOT____Vtogcov__o_pos_one = VL_RAND_RESET_I(5);
    vlSelf->LOPD_32bit__DOT____Vtogcov__o_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_0 = VL_RAND_RESET_I(4);
    vlSelf->LOPD_32bit__DOT____Vtogcov__w_zero_flag_0 = VL_RAND_RESET_I(1);
    vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_1 = VL_RAND_RESET_I(4);
    vlSelf->LOPD_32bit__DOT____Vtogcov__w_zero_flag_1 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_2_2 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_2_3 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_2_4 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0 = VL_RAND_RESET_I(2);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1 = VL_RAND_RESET_I(2);
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__2 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__2 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__2 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__2 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__2 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__2 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__2 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__2 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__i_rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
