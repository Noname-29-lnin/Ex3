// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question2.h for the primary calling header

#include "Vtb_Question2__pch.h"
#include "Vtb_Question2__Syms.h"
#include "Vtb_Question2___024root.h"

VL_ATTR_COLD void Vtb_Question2___024root___eval_static__TOP(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_Question2__DOT__test_count = 0U;
    ++(vlSymsp->__Vcoverage[0]);
    vlSelf->tb_Question2__DOT__test_pass = 0U;
    ++(vlSymsp->__Vcoverage[1]);
}

VL_ATTR_COLD void Vtb_Question2___024root___eval_initial__TOP(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x696f6e32U;
    __Vtemp_1[2U] = 0x75657374U;
    __Vtemp_1[3U] = 0x74625f51U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    ++(vlSymsp->__Vcoverage[88]);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question2___024root___dump_triggers__stl(Vtb_Question2___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_Question2___024root___eval_triggers__stl(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_Question2___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtb_Question2___024root___stl_sequent__TOP__0(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2;
    tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2 = 0;
    CData/*0:0*/ tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2;
    tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2 = 0;
    CData/*0:0*/ tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2;
    tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2 = 0;
    CData/*0:0*/ tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2;
    tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2 = 0;
    CData/*0:0*/ tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2;
    tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2 = 0;
    CData/*0:0*/ tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2;
    tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_1;
    __VdfgRegularize_hd87f99a1_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_2;
    __VdfgRegularize_hd87f99a1_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_3;
    __VdfgRegularize_hd87f99a1_0_3 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_4;
    __VdfgRegularize_hd87f99a1_0_4 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_5;
    __VdfgRegularize_hd87f99a1_0_5 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_7;
    __VdfgRegularize_hd87f99a1_0_7 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_8;
    __VdfgRegularize_hd87f99a1_0_8 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_10;
    __VdfgRegularize_hd87f99a1_0_10 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_11;
    __VdfgRegularize_hd87f99a1_0_11 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_13;
    __VdfgRegularize_hd87f99a1_0_13 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_14;
    __VdfgRegularize_hd87f99a1_0_14 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_15;
    __VdfgRegularize_hd87f99a1_0_15 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_16;
    __VdfgRegularize_hd87f99a1_0_16 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_17;
    __VdfgRegularize_hd87f99a1_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_18;
    __VdfgRegularize_hd87f99a1_0_18 = 0;
    // Body
    if (((IData)(vlSelf->tb_Question2__DOT__i_clk) 
         ^ (IData)(vlSelf->tb_Question2__DOT____Vtogcov__i_clk))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_clk 
            = vlSelf->tb_Question2__DOT__i_clk;
    }
    if (((IData)(vlSelf->tb_Question2__DOT__i_rst_n) 
         ^ (IData)(vlSelf->tb_Question2__DOT____Vtogcov__i_rst_n))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_rst_n 
            = vlSelf->tb_Question2__DOT__i_rst_n;
    }
    if ((1U & (vlSelf->tb_Question2__DOT__i_addr ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfffffeU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (1U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((2U & (vlSelf->tb_Question2__DOT__i_addr ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfffffdU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (2U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((4U & (vlSelf->tb_Question2__DOT__i_addr ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfffffbU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (4U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((8U & (vlSelf->tb_Question2__DOT__i_addr ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfffff7U & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (8U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x10U & (vlSelf->tb_Question2__DOT__i_addr 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xffffefU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x10U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x20U & (vlSelf->tb_Question2__DOT__i_addr 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xffffdfU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x20U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x40U & (vlSelf->tb_Question2__DOT__i_addr 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xffffbfU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x40U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x80U & (vlSelf->tb_Question2__DOT__i_addr 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xffff7fU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x80U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x100U & (vlSelf->tb_Question2__DOT__i_addr 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfffeffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x100U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x200U & (vlSelf->tb_Question2__DOT__i_addr 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfffdffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x200U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x400U & (vlSelf->tb_Question2__DOT__i_addr 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfffbffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x400U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x800U & (vlSelf->tb_Question2__DOT__i_addr 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfff7ffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x800U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x1000U & (vlSelf->tb_Question2__DOT__i_addr 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xffefffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x1000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x2000U & (vlSelf->tb_Question2__DOT__i_addr 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xffdfffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x2000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x4000U & (vlSelf->tb_Question2__DOT__i_addr 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xffbfffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x4000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x8000U & (vlSelf->tb_Question2__DOT__i_addr 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xff7fffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x8000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x10000U & (vlSelf->tb_Question2__DOT__i_addr 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfeffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x10000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x20000U & (vlSelf->tb_Question2__DOT__i_addr 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfdffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x20000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x40000U & (vlSelf->tb_Question2__DOT__i_addr 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfbffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x40000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x80000U & (vlSelf->tb_Question2__DOT__i_addr 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xf7ffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x80000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x100000U & (vlSelf->tb_Question2__DOT__i_addr 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xefffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x100000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x200000U & (vlSelf->tb_Question2__DOT__i_addr 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xdfffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x200000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x400000U & (vlSelf->tb_Question2__DOT__i_addr 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xbfffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x400000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x800000U & (vlSelf->tb_Question2__DOT__i_addr 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0x7fffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x800000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((1U & (vlSelf->tb_Question2__DOT__i_data ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfffffeU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (1U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((2U & (vlSelf->tb_Question2__DOT__i_data ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfffffdU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (2U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((4U & (vlSelf->tb_Question2__DOT__i_data ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfffffbU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (4U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((8U & (vlSelf->tb_Question2__DOT__i_data ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfffff7U & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (8U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x10U & (vlSelf->tb_Question2__DOT__i_data 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xffffefU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x10U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x20U & (vlSelf->tb_Question2__DOT__i_data 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xffffdfU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x20U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x40U & (vlSelf->tb_Question2__DOT__i_data 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xffffbfU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x40U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x80U & (vlSelf->tb_Question2__DOT__i_data 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xffff7fU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x80U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x100U & (vlSelf->tb_Question2__DOT__i_data 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfffeffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x100U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x200U & (vlSelf->tb_Question2__DOT__i_data 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfffdffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x200U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x400U & (vlSelf->tb_Question2__DOT__i_data 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfffbffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x400U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x800U & (vlSelf->tb_Question2__DOT__i_data 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfff7ffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x800U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x1000U & (vlSelf->tb_Question2__DOT__i_data 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xffefffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x1000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x2000U & (vlSelf->tb_Question2__DOT__i_data 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xffdfffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x2000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x4000U & (vlSelf->tb_Question2__DOT__i_data 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xffbfffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x4000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x8000U & (vlSelf->tb_Question2__DOT__i_data 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xff7fffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x8000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x10000U & (vlSelf->tb_Question2__DOT__i_data 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfeffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x10000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x20000U & (vlSelf->tb_Question2__DOT__i_data 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfdffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x20000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x40000U & (vlSelf->tb_Question2__DOT__i_data 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfbffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x40000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x80000U & (vlSelf->tb_Question2__DOT__i_data 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xf7ffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x80000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x100000U & (vlSelf->tb_Question2__DOT__i_data 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xefffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x100000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x200000U & (vlSelf->tb_Question2__DOT__i_data 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xdfffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x200000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x400000U & (vlSelf->tb_Question2__DOT__i_data 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xbfffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x400000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x800000U & (vlSelf->tb_Question2__DOT__i_data 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0x7fffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x800000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((1U & (vlSelf->tb_Question2__DOT__o_addr ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xfffffeU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (1U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((2U & (vlSelf->tb_Question2__DOT__o_addr ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xfffffdU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (2U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((4U & (vlSelf->tb_Question2__DOT__o_addr ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xfffffbU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (4U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((8U & (vlSelf->tb_Question2__DOT__o_addr ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xfffff7U & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (8U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x10U & (vlSelf->tb_Question2__DOT__o_addr 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xffffefU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x10U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x20U & (vlSelf->tb_Question2__DOT__o_addr 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xffffdfU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x20U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x40U & (vlSelf->tb_Question2__DOT__o_addr 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xffffbfU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x40U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x80U & (vlSelf->tb_Question2__DOT__o_addr 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xffff7fU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x80U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x100U & (vlSelf->tb_Question2__DOT__o_addr 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xfffeffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x100U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x200U & (vlSelf->tb_Question2__DOT__o_addr 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xfffdffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x200U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x400U & (vlSelf->tb_Question2__DOT__o_addr 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xfffbffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x400U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x800U & (vlSelf->tb_Question2__DOT__o_addr 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xfff7ffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x800U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x1000U & (vlSelf->tb_Question2__DOT__o_addr 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xffefffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x1000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x2000U & (vlSelf->tb_Question2__DOT__o_addr 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xffdfffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x2000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x4000U & (vlSelf->tb_Question2__DOT__o_addr 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xffbfffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x4000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x8000U & (vlSelf->tb_Question2__DOT__o_addr 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xff7fffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x8000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x10000U & (vlSelf->tb_Question2__DOT__o_addr 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xfeffffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x10000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x20000U & (vlSelf->tb_Question2__DOT__o_addr 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xfdffffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x20000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x40000U & (vlSelf->tb_Question2__DOT__o_addr 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xfbffffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x40000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x80000U & (vlSelf->tb_Question2__DOT__o_addr 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xf7ffffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x80000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x100000U & (vlSelf->tb_Question2__DOT__o_addr 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xefffffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x100000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x200000U & (vlSelf->tb_Question2__DOT__o_addr 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xdfffffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x200000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x400000U & (vlSelf->tb_Question2__DOT__o_addr 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xbfffffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x400000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x800000U & (vlSelf->tb_Question2__DOT__o_addr 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0x7fffffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x800000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2 
        = (IData)((0U != (0xc0000U & vlSelf->tb_Question2__DOT__i_data)));
    tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2 
        = (IData)((0U != (0xcU & vlSelf->tb_Question2__DOT__i_data)));
    tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2 
        = (IData)((0U != (0xc00000U & vlSelf->tb_Question2__DOT__i_data)));
    tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2 
        = (IData)((0U != (0xc0U & vlSelf->tb_Question2__DOT__i_data)));
    tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2 
        = (IData)((0U != (0xc00U & vlSelf->tb_Question2__DOT__i_data)));
    tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2 
        = (IData)((0U != (0xc000U & vlSelf->tb_Question2__DOT__i_data)));
    vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0 
        = (1U & (~ ((IData)(tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
                    | (IData)((0U != (0x30000U & vlSelf->tb_Question2__DOT__i_data))))));
    __VdfgRegularize_hd87f99a1_0_10 = (1U & (((~ (IData)(tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                              & (vlSelf->tb_Question2__DOT__i_data 
                                                 >> 0x11U)) 
                                             | (vlSelf->tb_Question2__DOT__i_data 
                                                >> 0x13U)));
    vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0 
        = (1U & (~ ((IData)(tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
                    | ((vlSelf->tb_Question2__DOT__i_data 
                        >> 1U) | vlSelf->tb_Question2__DOT__i_data))));
    __VdfgRegularize_hd87f99a1_0_4 = (1U & (((~ (IData)(tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                             & (vlSelf->tb_Question2__DOT__i_data 
                                                >> 1U)) 
                                            | (vlSelf->tb_Question2__DOT__i_data 
                                               >> 3U)));
    __VdfgRegularize_hd87f99a1_0_11 = (1U & (((~ (IData)(tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                              & (vlSelf->tb_Question2__DOT__i_data 
                                                 >> 0x15U)) 
                                             | (vlSelf->tb_Question2__DOT__i_data 
                                                >> 0x17U)));
    vlSelf->__VdfgRegularize_hd87f99a1_0_12 = ((IData)(tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                               | (0U 
                                                  != 
                                                  (0x300000U 
                                                   & vlSelf->tb_Question2__DOT__i_data)));
    __VdfgRegularize_hd87f99a1_0_5 = (1U & (((~ (IData)(tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                             & (vlSelf->tb_Question2__DOT__i_data 
                                                >> 5U)) 
                                            | (vlSelf->tb_Question2__DOT__i_data 
                                               >> 7U)));
    vlSelf->__VdfgRegularize_hd87f99a1_0_6 = ((IData)(tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                              | (0U 
                                                 != 
                                                 (0x30U 
                                                  & vlSelf->tb_Question2__DOT__i_data)));
    __VdfgRegularize_hd87f99a1_0_7 = (1U & (((~ (IData)(tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                             & (vlSelf->tb_Question2__DOT__i_data 
                                                >> 9U)) 
                                            | (vlSelf->tb_Question2__DOT__i_data 
                                               >> 0xbU)));
    vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0 
        = (1U & (~ ((IData)(tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
                    | (IData)((0U != (0x300U & vlSelf->tb_Question2__DOT__i_data))))));
    __VdfgRegularize_hd87f99a1_0_8 = (1U & (((~ (IData)(tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                             & (vlSelf->tb_Question2__DOT__i_data 
                                                >> 0xdU)) 
                                            | (vlSelf->tb_Question2__DOT__i_data 
                                               >> 0xfU)));
    vlSelf->__VdfgRegularize_hd87f99a1_0_9 = ((IData)(tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                              | (0U 
                                                 != 
                                                 (0x3000U 
                                                  & vlSelf->tb_Question2__DOT__i_data)));
    if (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0;
    }
    vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0 
        = (((IData)(tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_10));
    if (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0;
    }
    vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0 
        = (((IData)(tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_4));
    vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1 
        = (((IData)(tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_11));
    if ((1U ^ ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_1)))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_1 
            = (1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)));
    }
    vlSelf->tb_Question2__DOT__DUT__DOT__LOPD8_o_zero_flag 
        = ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
           & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)));
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_12) {
        __VdfgRegularize_hd87f99a1_0_13 = __VdfgRegularize_hd87f99a1_0_11;
        __VdfgRegularize_hd87f99a1_0_14 = tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2;
    } else {
        __VdfgRegularize_hd87f99a1_0_13 = __VdfgRegularize_hd87f99a1_0_10;
        __VdfgRegularize_hd87f99a1_0_14 = tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2;
    }
    vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1 
        = (((IData)(tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_5));
    if ((1U ^ ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_1)))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_1 
            = (1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)));
    }
    vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_0 
        = ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
           & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)));
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_6) {
        __VdfgRegularize_hd87f99a1_0_17 = __VdfgRegularize_hd87f99a1_0_5;
        __VdfgRegularize_hd87f99a1_0_18 = tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2;
    } else {
        __VdfgRegularize_hd87f99a1_0_17 = __VdfgRegularize_hd87f99a1_0_4;
        __VdfgRegularize_hd87f99a1_0_18 = tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2;
    }
    vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0 
        = (((IData)(tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_7));
    if (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0;
    }
    vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1 
        = (((IData)(tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_8));
    if ((1U ^ ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_1)))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_1 
            = (1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)));
    }
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_9) {
        __VdfgRegularize_hd87f99a1_0_15 = __VdfgRegularize_hd87f99a1_0_8;
        __VdfgRegularize_hd87f99a1_0_16 = tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2;
    } else {
        __VdfgRegularize_hd87f99a1_0_15 = __VdfgRegularize_hd87f99a1_0_7;
        __VdfgRegularize_hd87f99a1_0_16 = tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2;
    }
    vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1 
        = ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0) 
           & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)));
    if ((1U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0 
            = ((2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0 
            = ((1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0)));
    }
    if ((1U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0 
            = ((2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0 
            = ((1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0)));
    }
    if ((1U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1 
            = ((2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1 
            = ((1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1)));
    }
    if (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD8_o_zero_flag))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD8_o_zero_flag 
            = vlSelf->tb_Question2__DOT__DUT__DOT__LOPD8_o_zero_flag;
    }
    vlSelf->tb_Question2__DOT__DUT__DOT__LOPD8_o_pos_one 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12) 
            << 2U) | (((IData)(__VdfgRegularize_hd87f99a1_0_14) 
                       << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_13)));
    if ((1U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1 
            = ((2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1 
            = ((1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)));
    }
    if (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_0;
    }
    vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_0 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6) 
            << 2U) | (((IData)(__VdfgRegularize_hd87f99a1_0_18) 
                       << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_17)));
    if ((1U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0 
            = ((2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0 
            = ((1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)));
    }
    if ((1U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1 
            = ((2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1 
            = ((1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)));
    }
    vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_1 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9) 
            << 2U) | (((IData)(__VdfgRegularize_hd87f99a1_0_16) 
                       << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_15)));
    if (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1) 
         ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_zero_flag_1))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_zero_flag_1 
            = vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1;
    }
    if (vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1) {
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD16_o_zero_flag 
            = vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_0;
        __VdfgRegularize_hd87f99a1_0_1 = vlSelf->__VdfgRegularize_hd87f99a1_0_6;
        __VdfgRegularize_hd87f99a1_0_2 = __VdfgRegularize_hd87f99a1_0_18;
        __VdfgRegularize_hd87f99a1_0_3 = __VdfgRegularize_hd87f99a1_0_17;
    } else {
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD16_o_zero_flag = 0U;
        __VdfgRegularize_hd87f99a1_0_1 = vlSelf->__VdfgRegularize_hd87f99a1_0_9;
        __VdfgRegularize_hd87f99a1_0_2 = __VdfgRegularize_hd87f99a1_0_16;
        __VdfgRegularize_hd87f99a1_0_3 = __VdfgRegularize_hd87f99a1_0_15;
    }
    if ((1U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD8_o_pos_one) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one 
            = ((6U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)) 
               | (1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD8_o_pos_one)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD8_o_pos_one) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one 
            = ((5U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)) 
               | (2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD8_o_pos_one)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD8_o_pos_one) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one 
            = ((3U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)) 
               | (4U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD8_o_pos_one)));
    }
    if ((1U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0 
            = ((6U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0 
            = ((5U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_0)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0 
            = ((3U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0)) 
               | (4U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_0)));
    }
    if ((1U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1 
            = ((6U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1 
            = ((5U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_1)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1 
            = ((3U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1)) 
               | (4U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_1)));
    }
    if (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD16_o_zero_flag) 
         ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD16_o_zero_flag))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD16_o_zero_flag 
            = vlSelf->tb_Question2__DOT__DUT__DOT__LOPD16_o_zero_flag;
    }
    vlSelf->tb_Question2__DOT__o_zero_flag = ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                                              & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD8_o_zero_flag));
    vlSelf->tb_Question2__DOT__DUT__DOT__LOPD16_o_pos_one 
        = ((8U & ((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                  << 3U)) | (((IData)(__VdfgRegularize_hd87f99a1_0_1) 
                              << 2U) | (((IData)(__VdfgRegularize_hd87f99a1_0_2) 
                                         << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_3))));
    vlSelf->tb_Question2__DOT__o_one_position = ((0x10U 
                                                  & ((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD8_o_zero_flag)) 
                                                     << 4U)) 
                                                 | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                      & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD8_o_zero_flag)) 
                                                     << 3U) 
                                                    | ((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD8_o_zero_flag)
                                                          ? (IData)(__VdfgRegularize_hd87f99a1_0_1)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                        << 2U) 
                                                       | ((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD8_o_zero_flag)
                                                             ? (IData)(__VdfgRegularize_hd87f99a1_0_2)
                                                             : (IData)(__VdfgRegularize_hd87f99a1_0_14)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD8_o_zero_flag)
                                                              ? (IData)(__VdfgRegularize_hd87f99a1_0_3)
                                                              : (IData)(__VdfgRegularize_hd87f99a1_0_13))))));
    if (((IData)(vlSelf->tb_Question2__DOT__o_zero_flag) 
         ^ (IData)(vlSelf->tb_Question2__DOT____Vtogcov__o_zero_flag))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_zero_flag 
            = vlSelf->tb_Question2__DOT__o_zero_flag;
    }
    if ((1U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD16_o_pos_one) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one 
            = ((0xeU & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)) 
               | (1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD16_o_pos_one)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD16_o_pos_one) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one 
            = ((0xdU & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)) 
               | (2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD16_o_pos_one)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD16_o_pos_one) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one 
            = ((0xbU & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)) 
               | (4U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD16_o_pos_one)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD16_o_pos_one) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one 
            = ((7U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)) 
               | (8U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD16_o_pos_one)));
    }
    if ((1U & ((IData)(vlSelf->tb_Question2__DOT__o_one_position) 
               ^ (IData)(vlSelf->tb_Question2__DOT____Vtogcov__o_one_position)))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_one_position 
            = ((0x1eU & (IData)(vlSelf->tb_Question2__DOT____Vtogcov__o_one_position)) 
               | (1U & (IData)(vlSelf->tb_Question2__DOT__o_one_position)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question2__DOT__o_one_position) 
               ^ (IData)(vlSelf->tb_Question2__DOT____Vtogcov__o_one_position)))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_one_position 
            = ((0x1dU & (IData)(vlSelf->tb_Question2__DOT____Vtogcov__o_one_position)) 
               | (2U & (IData)(vlSelf->tb_Question2__DOT__o_one_position)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question2__DOT__o_one_position) 
               ^ (IData)(vlSelf->tb_Question2__DOT____Vtogcov__o_one_position)))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_one_position 
            = ((0x1bU & (IData)(vlSelf->tb_Question2__DOT____Vtogcov__o_one_position)) 
               | (4U & (IData)(vlSelf->tb_Question2__DOT__o_one_position)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question2__DOT__o_one_position) 
               ^ (IData)(vlSelf->tb_Question2__DOT____Vtogcov__o_one_position)))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_one_position 
            = ((0x17U & (IData)(vlSelf->tb_Question2__DOT____Vtogcov__o_one_position)) 
               | (8U & (IData)(vlSelf->tb_Question2__DOT__o_one_position)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_Question2__DOT__o_one_position) 
                  ^ (IData)(vlSelf->tb_Question2__DOT____Vtogcov__o_one_position)))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_one_position 
            = ((0xfU & (IData)(vlSelf->tb_Question2__DOT____Vtogcov__o_one_position)) 
               | (0x10U & (IData)(vlSelf->tb_Question2__DOT__o_one_position)));
    }
}

VL_ATTR_COLD void Vtb_Question2___024root___configure_coverage(Vtb_Question2___024root* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___configure_coverage\n"); );
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 7, 18, ".tb_Question2", "v_line/tb_Question2", "block", "7");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 8, 18, ".tb_Question2", "v_line/tb_Question2", "block", "8");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 10, 7, ".tb_Question2", "v_toggle/tb_Question2", "i_clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 10, 14, ".tb_Question2", "v_toggle/tb_Question2", "i_rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 11, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_addr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 12, 23, ".tb_Question2", "v_toggle/tb_Question2", "i_data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 13, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_addr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 14, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_one_position[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 14, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_one_position[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 14, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_one_position[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 14, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_one_position[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 14, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_one_position[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 15, 23, ".tb_Question2", "v_toggle/tb_Question2", "o_zero_flag", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 29, 13, ".tb_Question2", "v_line/tb_Question2", "block", "29-31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 26, 9, ".tb_Question2", "v_branch/tb_Question2", "if", "26-27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 26, 10, ".tb_Question2", "v_branch/tb_Question2", "else", "28,33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 17, 41, ".tb_Question2", "v_line/tb_Question2", "block", "17,22-24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 71, 5, ".tb_Question2", "v_line/tb_Question2", "block", "71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 69, 1, ".tb_Question2", "v_line/tb_Question2", "block", "69-70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 75, 1, ".tb_Question2", "v_line/tb_Question2", "block", "75-77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 93, 5, ".tb_Question2", "v_line/tb_Question2", "block", "93-102,104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 111, 9, ".tb_Question2", "v_branch/tb_Question2", "if", "111-112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 111, 10, ".tb_Question2", "v_branch/tb_Question2", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 106, 5, ".tb_Question2", "v_line/tb_Question2", "block", "106-110,114-119");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 81, 1, ".tb_Question2", "v_line/tb_Question2", "block", "81-84,87-89,92-93,106,122-130,132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 5, 37, ".tb_Question2.DUT", "v_toggle/Question2", "i_data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 6, 37, ".tb_Question2.DUT", "v_toggle/Question2", "o_one_position[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 6, 37, ".tb_Question2.DUT", "v_toggle/Question2", "o_one_position[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 6, 37, ".tb_Question2.DUT", "v_toggle/Question2", "o_one_position[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 6, 37, ".tb_Question2.DUT", "v_toggle/Question2", "o_one_position[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 6, 37, ".tb_Question2.DUT", "v_toggle/Question2", "o_one_position[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 7, 37, ".tb_Question2.DUT", "v_toggle/Question2", "o_zero_flag", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 10, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD16_i_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 10, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD16_i_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 10, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD16_i_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 10, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD16_i_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 10, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD16_i_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 10, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD16_i_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 10, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD16_i_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 10, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD16_i_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 10, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD16_i_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 10, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD16_i_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 10, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD16_i_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 10, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD16_i_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 10, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD16_i_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 10, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD16_i_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 10, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD16_i_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 10, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD16_i_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 12, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD16_o_pos_one[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 12, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD16_o_pos_one[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 12, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD16_o_pos_one[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 12, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD16_o_pos_one[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 13, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD16_o_zero_flag", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 14, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD8_i_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 14, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD8_i_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 14, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD8_i_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 14, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD8_i_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 14, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD8_i_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 14, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD8_i_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 14, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD8_i_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 14, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD8_i_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 16, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD8_o_pos_one[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 16, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD8_o_pos_one[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 16, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD8_o_pos_one[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/Question2.sv", 17, 18, ".tb_Question2.DUT", "v_toggle/Question2", "LOPD8_o_zero_flag", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "i_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "i_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "i_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "i_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "i_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "i_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "i_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "i_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "i_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "i_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "i_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "i_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "i_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "i_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "i_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 2, 30, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "i_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "o_pos_one[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "o_pos_one[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "o_pos_one[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "o_pos_one[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 4, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "o_zero_flag", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 11, 21, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "w_pos_one_0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 11, 21, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "w_pos_one_0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 11, 21, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "w_pos_one_0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 12, 21, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "w_zero_flag_0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 21, 21, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "w_pos_one_1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 21, 21, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "w_pos_one_1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 21, 21, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "w_pos_one_1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_16bit.sv", 22, 21, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB", "v_toggle/LOPD_16bit", "w_zero_flag_1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "i_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "i_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "i_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "i_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "i_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "i_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "i_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "i_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "o_pos_one[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "o_pos_one[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "o_pos_one[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 4, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "o_zero_flag", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 10, 7, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "w_zero_flag_0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 11, 13, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "w_pos_one_0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 11, 13, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "w_pos_one_0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 21, 7, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "w_zero_flag_1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 22, 13, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "w_pos_one_1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 22, 13, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0", "v_toggle/LOPD_8bit", "w_pos_one_1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "i_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "i_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "i_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "i_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "o_pos_one[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "o_pos_one[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 4, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "o_zero_flag", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "i_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "i_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "i_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "i_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "o_pos_one[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "o_pos_one[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 4, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_0.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "o_zero_flag", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "i_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "i_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "i_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "i_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "i_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "i_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "i_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "i_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "o_pos_one[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "o_pos_one[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "o_pos_one[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 4, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "o_zero_flag", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 10, 7, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "w_zero_flag_0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 11, 13, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "w_pos_one_0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 11, 13, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "w_pos_one_0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 21, 7, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "w_zero_flag_1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 22, 13, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "w_pos_one_1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 22, 13, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1", "v_toggle/LOPD_8bit", "w_pos_one_1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "i_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "i_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "i_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "i_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "o_pos_one[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "o_pos_one[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 4, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "o_zero_flag", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "i_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "i_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "i_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "i_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "o_pos_one[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "o_pos_one[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 4, 29, ".tb_Question2.DUT.LOPD_16bit_UNIT_LSB.LOPD_8bit_unit_1.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "o_zero_flag", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB", "v_toggle/LOPD_8bit", "i_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB", "v_toggle/LOPD_8bit", "i_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB", "v_toggle/LOPD_8bit", "i_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB", "v_toggle/LOPD_8bit", "i_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB", "v_toggle/LOPD_8bit", "i_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB", "v_toggle/LOPD_8bit", "i_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB", "v_toggle/LOPD_8bit", "i_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB", "v_toggle/LOPD_8bit", "i_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB", "v_toggle/LOPD_8bit", "o_pos_one[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB", "v_toggle/LOPD_8bit", "o_pos_one[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB", "v_toggle/LOPD_8bit", "o_pos_one[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 4, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB", "v_toggle/LOPD_8bit", "o_zero_flag", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 10, 7, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB", "v_toggle/LOPD_8bit", "w_zero_flag_0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 11, 13, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB", "v_toggle/LOPD_8bit", "w_pos_one_0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 11, 13, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB", "v_toggle/LOPD_8bit", "w_pos_one_0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 21, 7, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB", "v_toggle/LOPD_8bit", "w_zero_flag_1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 22, 13, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB", "v_toggle/LOPD_8bit", "w_pos_one_1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_8bit.sv", 22, 13, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB", "v_toggle/LOPD_8bit", "w_pos_one_1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "i_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "i_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "i_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "i_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "o_pos_one[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "o_pos_one[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 4, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB.LOPD_4bit_unit_0", "v_toggle/LOPD_4bit", "o_zero_flag", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "i_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "i_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "i_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 2, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "i_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "o_pos_one[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 3, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "o_pos_one[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/noname/Documents/project_tiny/Ex3/02_rtl/Question2/LOPD_4bit.sv", 4, 29, ".tb_Question2.DUT.LOPD_8bit_UNIT_MSB.LOPD_4bit_unit_1", "v_toggle/LOPD_4bit", "o_zero_flag", "");
}
