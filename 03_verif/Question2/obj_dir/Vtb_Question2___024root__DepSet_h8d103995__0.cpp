// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question2.h for the primary calling header

#include "Vtb_Question2__pch.h"
#include "Vtb_Question2__Syms.h"
#include "Vtb_Question2___024root.h"

VL_ATTR_COLD void Vtb_Question2___024root___eval_initial__TOP(Vtb_Question2___024root* vlSelf);
VlCoroutine Vtb_Question2___024root___eval_initial__TOP__Vtiming__0(Vtb_Question2___024root* vlSelf);
VlCoroutine Vtb_Question2___024root___eval_initial__TOP__Vtiming__1(Vtb_Question2___024root* vlSelf);
VlCoroutine Vtb_Question2___024root___eval_initial__TOP__Vtiming__2(Vtb_Question2___024root* vlSelf);

void Vtb_Question2___024root___eval_initial(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___eval_initial\n"); );
    // Body
    Vtb_Question2___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_Question2___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_Question2___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_Question2___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0__0 
        = vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1__0 
        = vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0 
        = vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0 
        = vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0 
        = vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0 
        = vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0__1 
        = vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1__1 
        = vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1 
        = vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1 
        = vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1 
        = vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1 
        = vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__2 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__2 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__2 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__2 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__2 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__2 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__2 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__2 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__i_clk__0 
        = vlSelf->tb_Question2__DOT__i_clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__i_rst_n__0 
        = vlSelf->tb_Question2__DOT__i_rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_Question2___024root___eval_initial__TOP__Vtiming__0(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_Question2__DOT__i_clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                           32);
        vlSelf->tb_Question2__DOT__i_clk = (1U & (~ (IData)(vlSelf->tb_Question2__DOT__i_clk)));
        ++(vlSymsp->__Vcoverage[80]);
    }
    ++(vlSymsp->__Vcoverage[81]);
}

VL_INLINE_OPT VlCoroutine Vtb_Question2___024root___eval_initial__TOP__Vtiming__1(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ tb_Question2__DOT____Vrepeat1;
    tb_Question2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtemp_49;
    // Body
    vlSelf->tb_Question2__DOT__i_rst_n = 0U;
    vlSelf->tb_Question2__DOT__i_addr = 0U;
    vlSelf->tb_Question2__DOT__i_data = 0U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       48);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       50);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[83]);
    tb_Question2__DOT____Vrepeat1 = 0x3e8U;
    while (VL_LTS_III(32, 0U, tb_Question2__DOT____Vrepeat1)) {
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                           62);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_Question2__DOT__bit_pos = VL_URANDOM_RANGE_I(0U, 0x17U);
        vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                             & VL_SHIFTL_III(24,24,32, (IData)(1U), vlSelf->tb_Question2__DOT__bit_pos));
        if ((0U != VL_URANDOM_RANGE_I(0U, 1U))) {
            __Vtemp_49 = (0xffffffU & (vlSelf->tb_Question2__DOT__i_data 
                                       | VL_URANDOM_RANGE_I(0U, 0xffffffU)));
            vlSelf->tb_Question2__DOT__i_data = __Vtemp_49;
            ++(vlSymsp->__Vcoverage[84]);
        } else {
            ++(vlSymsp->__Vcoverage[85]);
        }
        vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                             & ((IData)(1U) 
                                                + vlSelf->tb_Question2__DOT__i_addr));
        co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_Question2.i_clk)", 
                                                           "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                           77);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        ++(vlSymsp->__Vcoverage[86]);
        tb_Question2__DOT____Vrepeat1 = (tb_Question2__DOT____Vrepeat1 
                                         - (IData)(1U));
    }
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 82, "");
    ++(vlSymsp->__Vcoverage[87]);
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_Question2___024root___eval_initial__TOP__Vtiming__2(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_Question2.i_clk)", 
                                                           "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                           87);
        VL_WRITEF_NX("[%0t] i_addr = %x | i_data = %b (%0#)\no_addr = %x \t| o_one_position = %b (%0#) \t| o_zero_flag = %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,24,
                     vlSelf->tb_Question2__DOT__i_addr,
                     24,vlSelf->tb_Question2__DOT__i_data,
                     24,vlSelf->tb_Question2__DOT__i_data,
                     24,vlSelf->tb_Question2__DOT__o_addr,
                     5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                     5,vlSelf->tb_Question2__DOT__o_one_position,
                     1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
        ++(vlSymsp->__Vcoverage[88]);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question2___024root___dump_triggers__ico(Vtb_Question2___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_Question2___024root___eval_triggers__ico(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1)));
    vlSelf->__VicoTriggered.set(2U, ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1)));
    vlSelf->__VicoTriggered.set(3U, ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1)));
    vlSelf->__VicoTriggered.set(4U, ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1)));
    vlSelf->__VicoTriggered.set(5U, ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1)));
    vlSelf->__VicoTriggered.set(6U, ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1)));
    vlSelf->__VicoTriggered.set(7U, ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1)));
    vlSelf->__VicoTriggered.set(8U, ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1)));
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.set(1U, 1U);
        vlSelf->__VicoTriggered.set(2U, 1U);
        vlSelf->__VicoTriggered.set(3U, 1U);
        vlSelf->__VicoTriggered.set(4U, 1U);
        vlSelf->__VicoTriggered.set(5U, 1U);
        vlSelf->__VicoTriggered.set(6U, 1U);
        vlSelf->__VicoTriggered.set(7U, 1U);
        vlSelf->__VicoTriggered.set(8U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_Question2___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vtb_Question2_LOPD_16bit___ico_sequent__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__0(Vtb_Question2_LOPD_16bit* vlSelf);
void Vtb_Question2_LOPD_16bit___ico_sequent__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__0(Vtb_Question2_LOPD_16bit* vlSelf);
void Vtb_Question2___024root___ico_sequent__TOP__0(Vtb_Question2___024root* vlSelf);
void Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__0(Vtb_Question2_LOPD_16bit* vlSelf);
void Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__0(Vtb_Question2_LOPD_16bit* vlSelf);
void Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__1(Vtb_Question2_LOPD_16bit* vlSelf);
void Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__1(Vtb_Question2_LOPD_16bit* vlSelf);
void Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__2(Vtb_Question2_LOPD_16bit* vlSelf);
void Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__2(Vtb_Question2_LOPD_16bit* vlSelf);
void Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__3(Vtb_Question2_LOPD_16bit* vlSelf);
void Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__3(Vtb_Question2_LOPD_16bit* vlSelf);
void Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__5(Vtb_Question2_LOPD_16bit* vlSelf);
void Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__6(Vtb_Question2_LOPD_16bit* vlSelf);
void Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__5(Vtb_Question2_LOPD_16bit* vlSelf);
void Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__7(Vtb_Question2_LOPD_16bit* vlSelf);
void Vtb_Question2___024root___ico_comb__TOP__0(Vtb_Question2___024root* vlSelf);
void Vtb_Question2___024root___ico_comb__TOP__1(Vtb_Question2___024root* vlSelf);
void Vtb_Question2___024root___ico_comb__TOP__2(Vtb_Question2___024root* vlSelf);

void Vtb_Question2___024root___eval_ico(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___ico_sequent__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__0((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0));
        Vtb_Question2_LOPD_16bit___ico_sequent__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__0((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1));
        Vtb_Question2___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__0((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0));
    }
    if ((0x21ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__0((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1));
    }
    if ((9ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__1((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0));
    }
    if ((0x81ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__1((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1));
    }
    if ((5ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__2((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0));
    }
    if ((0x41ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__2((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1));
    }
    if ((0x11ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__3((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0));
    }
    if ((0x101ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__3((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1));
    }
    if ((7ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__5((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0));
    }
    if ((0x61ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__5((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1));
    }
    if ((0x19ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__6((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0));
    }
    if ((0x181ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__5((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1));
    }
    if ((0x1fULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__7((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0));
        Vtb_Question2___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x1e1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__7((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1));
        Vtb_Question2___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((0x1ffULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_Question2___024root___ico_comb__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_Question2___024root___ico_sequent__TOP__0(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___ico_sequent__TOP__0\n"); );
    // Body
    if ((1U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xfffffffeU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (1U & vlSelf->i_data));
    }
    if ((2U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xfffffffdU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (2U & vlSelf->i_data));
    }
    if ((4U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xfffffffbU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (4U & vlSelf->i_data));
    }
    if ((8U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xfffffff7U & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (8U & vlSelf->i_data));
    }
    if ((0x10U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xffffffefU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x10U & vlSelf->i_data));
    }
    if ((0x20U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xffffffdfU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x20U & vlSelf->i_data));
    }
    if ((0x40U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xffffffbfU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x40U & vlSelf->i_data));
    }
    if ((0x80U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xffffff7fU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x80U & vlSelf->i_data));
    }
    if ((0x100U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xfffffeffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x100U & vlSelf->i_data));
    }
    if ((0x200U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xfffffdffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x200U & vlSelf->i_data));
    }
    if ((0x400U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xfffffbffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x400U & vlSelf->i_data));
    }
    if ((0x800U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xfffff7ffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x800U & vlSelf->i_data));
    }
    if ((0x1000U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xffffefffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x1000U & vlSelf->i_data));
    }
    if ((0x2000U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xffffdfffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x2000U & vlSelf->i_data));
    }
    if ((0x4000U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xffffbfffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x4000U & vlSelf->i_data));
    }
    if ((0x8000U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xffff7fffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x8000U & vlSelf->i_data));
    }
    if ((0x10000U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xfffeffffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x10000U & vlSelf->i_data));
    }
    if ((0x20000U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xfffdffffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x20000U & vlSelf->i_data));
    }
    if ((0x40000U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xfffbffffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x40000U & vlSelf->i_data));
    }
    if ((0x80000U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xfff7ffffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x80000U & vlSelf->i_data));
    }
    if ((0x100000U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xffefffffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x100000U & vlSelf->i_data));
    }
    if ((0x200000U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xffdfffffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x200000U & vlSelf->i_data));
    }
    if ((0x400000U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xffbfffffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x400000U & vlSelf->i_data));
    }
    if ((0x800000U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xff7fffffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x800000U & vlSelf->i_data));
    }
    if ((0x1000000U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xfeffffffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x1000000U & vlSelf->i_data));
    }
    if ((0x2000000U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xfdffffffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x2000000U & vlSelf->i_data));
    }
    if ((0x4000000U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xfbffffffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x4000000U & vlSelf->i_data));
    }
    if ((0x8000000U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xf7ffffffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x8000000U & vlSelf->i_data));
    }
    if ((0x10000000U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xefffffffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x10000000U & vlSelf->i_data));
    }
    if ((0x20000000U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xdfffffffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x20000000U & vlSelf->i_data));
    }
    if ((0x40000000U & (vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0xbfffffffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x40000000U & vlSelf->i_data));
    }
    if (((vlSelf->i_data ^ vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__i_data 
            = ((0x7fffffffU & vlSelf->LOPD_32bit__DOT____Vtogcov__i_data) 
               | (0x80000000U & vlSelf->i_data));
    }
}

VL_INLINE_OPT void Vtb_Question2___024root___ico_comb__TOP__0(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___ico_comb__TOP__0\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.o_zero_flag) 
         ^ (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__w_zero_flag_0 
            = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.o_zero_flag;
    }
    if ((1U & ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.o_pos_one) 
               ^ (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_0 
            = ((0xeU & (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.o_pos_one)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.o_pos_one) 
               ^ (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_0 
            = ((0xdU & (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.o_pos_one)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.o_pos_one) 
               ^ (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_0 
            = ((0xbU & (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_0)) 
               | (4U & (IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.o_pos_one)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.o_pos_one) 
               ^ (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_0 
            = ((7U & (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_0)) 
               | (8U & (IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.o_pos_one)));
    }
}

VL_INLINE_OPT void Vtb_Question2___024root___ico_comb__TOP__1(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___ico_comb__TOP__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.o_zero_flag) 
         ^ (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__w_zero_flag_1))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__w_zero_flag_1 
            = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.o_zero_flag;
    }
    if ((1U & ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.o_pos_one) 
               ^ (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_1 
            = ((0xeU & (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.o_pos_one)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.o_pos_one) 
               ^ (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_1 
            = ((0xdU & (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.o_pos_one)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.o_pos_one) 
               ^ (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_1 
            = ((0xbU & (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_1)) 
               | (4U & (IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.o_pos_one)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.o_pos_one) 
               ^ (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_1 
            = ((7U & (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__w_pos_one_1)) 
               | (8U & (IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.o_pos_one)));
    }
}

VL_INLINE_OPT void Vtb_Question2___024root___ico_comb__TOP__2(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___ico_comb__TOP__2\n"); );
    // Body
    vlSelf->o_zero_flag = ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.o_zero_flag) 
                           & (IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.o_zero_flag));
    vlSelf->o_pos_one = ((0x10U & ((~ (IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.o_zero_flag)) 
                                   << 4U)) | ((8U & 
                                               (((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.o_zero_flag)
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.o_pos_one) 
                                                  >> 3U)
                                                  : 
                                                 ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.o_pos_one) 
                                                  >> 3U)) 
                                                << 3U)) 
                                              | ((4U 
                                                  & (((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.o_zero_flag)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.o_pos_one) 
                                                       >> 2U)
                                                       : 
                                                      ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.o_pos_one) 
                                                       >> 2U)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.o_zero_flag)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.o_pos_one) 
                                                          >> 1U)
                                                          : 
                                                         ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.o_pos_one) 
                                                          >> 1U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.o_zero_flag)
                                                           ? (IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.o_pos_one)
                                                           : (IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.o_pos_one)))))));
    if (((IData)(vlSelf->o_zero_flag) ^ (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__o_zero_flag))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__o_zero_flag 
            = vlSelf->o_zero_flag;
    }
    if ((1U & ((IData)(vlSelf->o_pos_one) ^ (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__o_pos_one 
            = ((0x1eU & (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__o_pos_one)) 
               | (1U & (IData)(vlSelf->o_pos_one)));
    }
    if ((2U & ((IData)(vlSelf->o_pos_one) ^ (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__o_pos_one 
            = ((0x1dU & (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__o_pos_one)) 
               | (2U & (IData)(vlSelf->o_pos_one)));
    }
    if ((4U & ((IData)(vlSelf->o_pos_one) ^ (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__o_pos_one 
            = ((0x1bU & (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__o_pos_one)) 
               | (4U & (IData)(vlSelf->o_pos_one)));
    }
    if ((8U & ((IData)(vlSelf->o_pos_one) ^ (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__o_pos_one 
            = ((0x17U & (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__o_pos_one)) 
               | (8U & (IData)(vlSelf->o_pos_one)));
    }
    if ((0x10U & ((IData)(vlSelf->o_pos_one) ^ (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->LOPD_32bit__DOT____Vtogcov__o_pos_one 
            = ((0xfU & (IData)(vlSelf->LOPD_32bit__DOT____Vtogcov__o_pos_one)) 
               | (0x10U & (IData)(vlSelf->o_pos_one)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question2___024root___dump_triggers__act(Vtb_Question2___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_Question2___024root___eval_triggers__act(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0__1)));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1__1)));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1)));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1)));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1)));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1)));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__2)));
    vlSelf->__VactTriggered.set(7U, ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__2)));
    vlSelf->__VactTriggered.set(8U, ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__2)));
    vlSelf->__VactTriggered.set(9U, ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__2)));
    vlSelf->__VactTriggered.set(0xaU, ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__2)));
    vlSelf->__VactTriggered.set(0xbU, ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__2)));
    vlSelf->__VactTriggered.set(0xcU, ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__2)));
    vlSelf->__VactTriggered.set(0xdU, ((IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__2)));
    vlSelf->__VactTriggered.set(0xeU, (((IData)(vlSelf->tb_Question2__DOT__i_clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__i_clk__0))) 
                                       | ((~ (IData)(vlSelf->tb_Question2__DOT__i_rst_n)) 
                                          & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__i_rst_n__0))));
    vlSelf->__VactTriggered.set(0xfU, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(0x10U, ((IData)(vlSelf->tb_Question2__DOT__i_clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__i_clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0__1 
        = vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1__1 
        = vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1 
        = vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1 
        = vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1 
        = vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1 
        = vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__2 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__2 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__2 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__2 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__2 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__2 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__2 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__2 
        = vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__i_clk__0 
        = vlSelf->tb_Question2__DOT__i_clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__i_rst_n__0 
        = vlSelf->tb_Question2__DOT__i_rst_n;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
        vlSelf->__VactTriggered.set(5U, 1U);
        vlSelf->__VactTriggered.set(6U, 1U);
        vlSelf->__VactTriggered.set(7U, 1U);
        vlSelf->__VactTriggered.set(8U, 1U);
        vlSelf->__VactTriggered.set(9U, 1U);
        vlSelf->__VactTriggered.set(0xaU, 1U);
        vlSelf->__VactTriggered.set(0xbU, 1U);
        vlSelf->__VactTriggered.set(0xcU, 1U);
        vlSelf->__VactTriggered.set(0xdU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_Question2___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtb_Question2___024root___act_sequent__TOP__0(Vtb_Question2___024root* vlSelf);
void Vtb_Question2___024root___act_comb__TOP__0(Vtb_Question2___024root* vlSelf);
void Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__0(Vtb_Question2_LOPD_16bit* vlSelf);
void Vtb_Question2___024root___act_comb__TOP__1(Vtb_Question2___024root* vlSelf);
void Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__1(Vtb_Question2_LOPD_16bit* vlSelf);
void Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__2(Vtb_Question2_LOPD_16bit* vlSelf);
void Vtb_Question2___024root___act_comb__TOP__2(Vtb_Question2___024root* vlSelf);
void Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__3(Vtb_Question2_LOPD_16bit* vlSelf);
void Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__4(Vtb_Question2_LOPD_16bit* vlSelf);
void Vtb_Question2___024root___act_comb__TOP__3(Vtb_Question2___024root* vlSelf);
void Vtb_Question2___024root___act_comb__TOP__5(Vtb_Question2___024root* vlSelf);
void Vtb_Question2___024root___act_comb__TOP__7(Vtb_Question2___024root* vlSelf);

void Vtb_Question2___024root___eval_act(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___eval_act\n"); );
    // Body
    if ((0x8000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x18000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2___024root___act_comb__TOP__0(vlSelf);
        Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__0((&vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB));
    }
    if ((0x18001ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__0((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0));
    }
    if ((0x18004ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__1((&vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB));
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__0((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1));
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__1((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0));
    }
    if ((0x18010ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__2((&vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB));
    }
    if ((0x18002ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__1((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1));
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__2((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0));
    }
    if ((0x18008ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__3((&vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB));
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__2((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1));
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0__3((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0));
    }
    if ((0x18020ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__4((&vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB));
    }
    if ((0x2000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__3((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1));
    }
    if ((0x18003ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0xc0ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__5((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0));
    }
    if ((0x1800cULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__5((&vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB));
    }
    if ((0xc00ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__5((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1));
    }
    if ((0x300ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__6((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0));
    }
    if ((0x18030ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__6((&vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB));
    }
    if ((0x3000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___ico_comb__TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1__5((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1));
    }
    if ((0x3c0ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__7((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0));
        Vtb_Question2___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x1803cULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__7((&vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB));
        Vtb_Question2___024root___act_comb__TOP__5(vlSelf);
    }
    if ((0x3c00ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2_LOPD_16bit___act_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__7((&vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1));
        Vtb_Question2___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((0x1803fULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2___024root___act_comb__TOP__7(vlSelf);
    }
    if ((0x3fc0ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question2___024root___ico_comb__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_Question2___024root___act_sequent__TOP__0(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___act_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->tb_Question2__DOT__i_clk) 
         ^ (IData)(vlSelf->tb_Question2__DOT____Vtogcov__i_clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_clk 
            = vlSelf->tb_Question2__DOT__i_clk;
    }
}

VL_INLINE_OPT void Vtb_Question2___024root___act_comb__TOP__0(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___act_comb__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->tb_Question2__DOT__i_rst_n) 
         ^ (IData)(vlSelf->tb_Question2__DOT____Vtogcov__i_rst_n))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_rst_n 
            = vlSelf->tb_Question2__DOT__i_rst_n;
    }
    if ((1U & (vlSelf->tb_Question2__DOT__i_addr ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfffffeU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (1U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((2U & (vlSelf->tb_Question2__DOT__i_addr ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfffffdU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (2U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((4U & (vlSelf->tb_Question2__DOT__i_addr ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfffffbU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (4U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((8U & (vlSelf->tb_Question2__DOT__i_addr ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfffff7U & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (8U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x10U & (vlSelf->tb_Question2__DOT__i_addr 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xffffefU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x10U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x20U & (vlSelf->tb_Question2__DOT__i_addr 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xffffdfU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x20U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x40U & (vlSelf->tb_Question2__DOT__i_addr 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xffffbfU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x40U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x80U & (vlSelf->tb_Question2__DOT__i_addr 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xffff7fU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x80U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x100U & (vlSelf->tb_Question2__DOT__i_addr 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfffeffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x100U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x200U & (vlSelf->tb_Question2__DOT__i_addr 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfffdffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x200U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x400U & (vlSelf->tb_Question2__DOT__i_addr 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfffbffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x400U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x800U & (vlSelf->tb_Question2__DOT__i_addr 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfff7ffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x800U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x1000U & (vlSelf->tb_Question2__DOT__i_addr 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xffefffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x1000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x2000U & (vlSelf->tb_Question2__DOT__i_addr 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xffdfffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x2000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x4000U & (vlSelf->tb_Question2__DOT__i_addr 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xffbfffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x4000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x8000U & (vlSelf->tb_Question2__DOT__i_addr 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xff7fffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x8000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x10000U & (vlSelf->tb_Question2__DOT__i_addr 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfeffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x10000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x20000U & (vlSelf->tb_Question2__DOT__i_addr 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfdffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x20000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x40000U & (vlSelf->tb_Question2__DOT__i_addr 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfbffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x40000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x80000U & (vlSelf->tb_Question2__DOT__i_addr 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xf7ffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x80000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x100000U & (vlSelf->tb_Question2__DOT__i_addr 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xefffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x100000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x200000U & (vlSelf->tb_Question2__DOT__i_addr 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xdfffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x200000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x400000U & (vlSelf->tb_Question2__DOT__i_addr 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xbfffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x400000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x800000U & (vlSelf->tb_Question2__DOT__i_addr 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0x7fffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x800000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((1U & (vlSelf->tb_Question2__DOT__i_data ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfffffeU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (1U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((2U & (vlSelf->tb_Question2__DOT__i_data ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfffffdU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (2U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((4U & (vlSelf->tb_Question2__DOT__i_data ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfffffbU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (4U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((8U & (vlSelf->tb_Question2__DOT__i_data ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfffff7U & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (8U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x10U & (vlSelf->tb_Question2__DOT__i_data 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xffffefU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x10U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x20U & (vlSelf->tb_Question2__DOT__i_data 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xffffdfU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x20U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x40U & (vlSelf->tb_Question2__DOT__i_data 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xffffbfU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x40U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x80U & (vlSelf->tb_Question2__DOT__i_data 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xffff7fU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x80U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x100U & (vlSelf->tb_Question2__DOT__i_data 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfffeffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x100U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x200U & (vlSelf->tb_Question2__DOT__i_data 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfffdffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x200U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x400U & (vlSelf->tb_Question2__DOT__i_data 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfffbffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x400U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x800U & (vlSelf->tb_Question2__DOT__i_data 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfff7ffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x800U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x1000U & (vlSelf->tb_Question2__DOT__i_data 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xffefffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x1000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x2000U & (vlSelf->tb_Question2__DOT__i_data 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xffdfffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x2000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x4000U & (vlSelf->tb_Question2__DOT__i_data 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xffbfffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x4000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x8000U & (vlSelf->tb_Question2__DOT__i_data 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xff7fffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x8000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x10000U & (vlSelf->tb_Question2__DOT__i_data 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfeffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x10000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x20000U & (vlSelf->tb_Question2__DOT__i_data 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfdffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x20000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x40000U & (vlSelf->tb_Question2__DOT__i_data 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfbffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x40000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x80000U & (vlSelf->tb_Question2__DOT__i_data 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xf7ffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x80000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x100000U & (vlSelf->tb_Question2__DOT__i_data 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xefffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x100000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x200000U & (vlSelf->tb_Question2__DOT__i_data 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xdfffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x200000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x400000U & (vlSelf->tb_Question2__DOT__i_data 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xbfffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x400000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x800000U & (vlSelf->tb_Question2__DOT__i_data 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0x7fffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x800000U & vlSelf->tb_Question2__DOT__i_data));
    }
}

VL_INLINE_OPT void Vtb_Question2___024root___act_comb__TOP__1(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___act_comb__TOP__1\n"); );
    // Body
    vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0 
        = (((IData)((0U != (0xc0000U & vlSelf->tb_Question2__DOT__i_data))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0) 
                                 >> 1U)) & (vlSelf->tb_Question2__DOT__i_data 
                                            >> 0x11U)) 
                            | (vlSelf->tb_Question2__DOT__i_data 
                               >> 0x13U))));
    if ((1U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0 
            = ((2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0 
            = ((1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0)));
    }
    vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0 
        = (1U & (~ (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0) 
                     >> 1U) | (IData)((0U != (0x30000U 
                                              & vlSelf->tb_Question2__DOT__i_data))))));
    if (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0;
    }
}

VL_INLINE_OPT void Vtb_Question2___024root___act_comb__TOP__2(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___act_comb__TOP__2\n"); );
    // Body
    vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1 
        = (((IData)((0U != (0xc00000U & vlSelf->tb_Question2__DOT__i_data))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1) 
                                 >> 1U)) & (vlSelf->tb_Question2__DOT__i_data 
                                            >> 0x15U)) 
                            | (vlSelf->tb_Question2__DOT__i_data 
                               >> 0x17U))));
    if ((1U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1 
            = ((2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1 
            = ((1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1)));
    }
    vlSelf->__VdfgRegularize_hd87f99a1_2_2 = (IData)(
                                                     (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1) 
                                                       >> 1U) 
                                                      | (0U 
                                                         != 
                                                         (0x300000U 
                                                          & vlSelf->tb_Question2__DOT__i_data))));
    if ((1U ^ ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_2) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_1)))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_1 
            = (1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_2)));
    }
}

VL_INLINE_OPT void Vtb_Question2___024root___act_comb__TOP__3(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___act_comb__TOP__3\n"); );
    // Body
    vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_zero_flag 
        = ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
           & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_2)));
    if (vlSelf->__VdfgRegularize_hd87f99a1_2_2) {
        vlSelf->__VdfgRegularize_hd87f99a1_2_3 = (1U 
                                                  & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1));
        vlSelf->__VdfgRegularize_hd87f99a1_2_4 = (1U 
                                                  & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1) 
                                                     >> 1U));
    } else {
        vlSelf->__VdfgRegularize_hd87f99a1_2_3 = (1U 
                                                  & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0));
        vlSelf->__VdfgRegularize_hd87f99a1_2_4 = (1U 
                                                  & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0) 
                                                     >> 1U));
    }
    if (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_zero_flag))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_zero_flag 
            = vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_zero_flag;
    }
    vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_pos_one 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_2) 
            << 2U) | (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_4) 
                       << 1U) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_3)));
    if ((1U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_pos_one) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one 
            = ((6U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)) 
               | (1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_pos_one)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_pos_one) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one 
            = ((5U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)) 
               | (2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_pos_one)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_pos_one) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one 
            = ((3U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)) 
               | (4U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_pos_one)));
    }
}

VL_INLINE_OPT void Vtb_Question2___024root___act_comb__TOP__5(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___act_comb__TOP__5\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_zero_flag) 
         ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_zero_flag))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_zero_flag 
            = vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_zero_flag;
    }
    if ((1U & ((IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one 
            = ((0xeU & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)) 
               | (1U & (IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one 
            = ((0xdU & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)) 
               | (2U & (IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one 
            = ((0xbU & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)) 
               | (4U & (IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one 
            = ((7U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)) 
               | (8U & (IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one)));
    }
}

VL_INLINE_OPT void Vtb_Question2___024root___act_comb__TOP__7(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___act_comb__TOP__7\n"); );
    // Body
    vlSelf->tb_Question2__DOT__DUT__DOT__w_zero_flag 
        = ((IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_zero_flag) 
           & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_zero_flag));
    vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position 
        = ((0x10U & ((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_zero_flag)) 
                     << 4U)) | ((0xfffffff8U & (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_zero_flag) 
                                                 << 3U) 
                                                & (IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one))) 
                                | ((4U & (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_zero_flag)
                                            ? ((IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one) 
                                               >> 2U)
                                            : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_2)) 
                                          << 2U)) | 
                                   ((2U & (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_zero_flag)
                                             ? ((IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one) 
                                                >> 1U)
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_4)) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_zero_flag)
                                              ? (IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one)
                                              : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_3)))))));
    if (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_zero_flag) 
         ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_zero_flag))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_zero_flag 
            = vlSelf->tb_Question2__DOT__DUT__DOT__w_zero_flag;
    }
    if ((1U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position)))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position 
            = ((0x1eU & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position)) 
               | (1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position)))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position 
            = ((0x1dU & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position)) 
               | (2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position)))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position 
            = ((0x1bU & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position)) 
               | (4U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position)))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position 
            = ((0x17U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position)) 
               | (8U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position) 
                  ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position)))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position 
            = ((0xfU & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position)) 
               | (0x10U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position)));
    }
}

void Vtb_Question2___024root___nba_sequent__TOP__0(Vtb_Question2___024root* vlSelf);
void Vtb_Question2___024root___nba_comb__TOP__0(Vtb_Question2___024root* vlSelf);
void Vtb_Question2_LOPD_16bit___nba_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__0(Vtb_Question2_LOPD_16bit* vlSelf);
void Vtb_Question2___024root___nba_comb__TOP__1(Vtb_Question2___024root* vlSelf);

void Vtb_Question2___024root___eval_nba(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___eval_nba\n"); );
    // Body
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_Question2___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_Question2___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x18000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_Question2___024root___nba_comb__TOP__0(vlSelf);
        Vtb_Question2_LOPD_16bit___nba_comb__TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__0((&vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB));
        Vtb_Question2___024root___nba_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_Question2___024root___nba_sequent__TOP__0(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___nba_sequent__TOP__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[121]);
    if (vlSelf->tb_Question2__DOT__i_rst_n) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->tb_Question2__DOT__o_one_position = vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position;
        vlSelf->tb_Question2__DOT__o_addr = vlSelf->tb_Question2__DOT__i_addr;
    } else {
        vlSelf->tb_Question2__DOT__o_one_position = 0U;
        vlSelf->tb_Question2__DOT__o_addr = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->tb_Question2__DOT__i_rst_n)))) {
        ++(vlSymsp->__Vcoverage[119]);
    }
    vlSelf->tb_Question2__DOT__o_zero_flag = ((IData)(vlSelf->tb_Question2__DOT__i_rst_n) 
                                              && (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_zero_flag));
    if (((IData)(vlSelf->tb_Question2__DOT__o_zero_flag) 
         ^ (IData)(vlSelf->tb_Question2__DOT____Vtogcov__o_zero_flag))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_zero_flag 
            = vlSelf->tb_Question2__DOT__o_zero_flag;
    }
    if ((1U & ((IData)(vlSelf->tb_Question2__DOT__o_one_position) 
               ^ (IData)(vlSelf->tb_Question2__DOT____Vtogcov__o_one_position)))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_one_position 
            = ((0x1eU & (IData)(vlSelf->tb_Question2__DOT____Vtogcov__o_one_position)) 
               | (1U & (IData)(vlSelf->tb_Question2__DOT__o_one_position)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question2__DOT__o_one_position) 
               ^ (IData)(vlSelf->tb_Question2__DOT____Vtogcov__o_one_position)))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_one_position 
            = ((0x1dU & (IData)(vlSelf->tb_Question2__DOT____Vtogcov__o_one_position)) 
               | (2U & (IData)(vlSelf->tb_Question2__DOT__o_one_position)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question2__DOT__o_one_position) 
               ^ (IData)(vlSelf->tb_Question2__DOT____Vtogcov__o_one_position)))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_one_position 
            = ((0x1bU & (IData)(vlSelf->tb_Question2__DOT____Vtogcov__o_one_position)) 
               | (4U & (IData)(vlSelf->tb_Question2__DOT__o_one_position)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question2__DOT__o_one_position) 
               ^ (IData)(vlSelf->tb_Question2__DOT____Vtogcov__o_one_position)))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_one_position 
            = ((0x17U & (IData)(vlSelf->tb_Question2__DOT____Vtogcov__o_one_position)) 
               | (8U & (IData)(vlSelf->tb_Question2__DOT__o_one_position)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_Question2__DOT__o_one_position) 
                  ^ (IData)(vlSelf->tb_Question2__DOT____Vtogcov__o_one_position)))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_one_position 
            = ((0xfU & (IData)(vlSelf->tb_Question2__DOT____Vtogcov__o_one_position)) 
               | (0x10U & (IData)(vlSelf->tb_Question2__DOT__o_one_position)));
    }
    if ((1U & (vlSelf->tb_Question2__DOT__o_addr ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xfffffeU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (1U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((2U & (vlSelf->tb_Question2__DOT__o_addr ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xfffffdU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (2U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((4U & (vlSelf->tb_Question2__DOT__o_addr ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xfffffbU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (4U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((8U & (vlSelf->tb_Question2__DOT__o_addr ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xfffff7U & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (8U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x10U & (vlSelf->tb_Question2__DOT__o_addr 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xffffefU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x10U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x20U & (vlSelf->tb_Question2__DOT__o_addr 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xffffdfU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x20U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x40U & (vlSelf->tb_Question2__DOT__o_addr 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xffffbfU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x40U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x80U & (vlSelf->tb_Question2__DOT__o_addr 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xffff7fU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x80U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x100U & (vlSelf->tb_Question2__DOT__o_addr 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xfffeffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x100U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x200U & (vlSelf->tb_Question2__DOT__o_addr 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xfffdffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x200U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x400U & (vlSelf->tb_Question2__DOT__o_addr 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xfffbffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x400U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x800U & (vlSelf->tb_Question2__DOT__o_addr 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xfff7ffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x800U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x1000U & (vlSelf->tb_Question2__DOT__o_addr 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xffefffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x1000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x2000U & (vlSelf->tb_Question2__DOT__o_addr 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xffdfffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x2000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x4000U & (vlSelf->tb_Question2__DOT__o_addr 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xffbfffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x4000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x8000U & (vlSelf->tb_Question2__DOT__o_addr 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xff7fffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x8000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x10000U & (vlSelf->tb_Question2__DOT__o_addr 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xfeffffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x10000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x20000U & (vlSelf->tb_Question2__DOT__o_addr 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xfdffffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x20000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x40000U & (vlSelf->tb_Question2__DOT__o_addr 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xfbffffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x40000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x80000U & (vlSelf->tb_Question2__DOT__o_addr 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xf7ffffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x80000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x100000U & (vlSelf->tb_Question2__DOT__o_addr 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xefffffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x100000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x200000U & (vlSelf->tb_Question2__DOT__o_addr 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xdfffffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x200000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x400000U & (vlSelf->tb_Question2__DOT__o_addr 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0xbfffffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x400000U & vlSelf->tb_Question2__DOT__o_addr));
    }
    if ((0x800000U & (vlSelf->tb_Question2__DOT__o_addr 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__o_addr))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->tb_Question2__DOT____Vtogcov__o_addr 
            = ((0x7fffffU & vlSelf->tb_Question2__DOT____Vtogcov__o_addr) 
               | (0x800000U & vlSelf->tb_Question2__DOT__o_addr));
    }
}

VL_INLINE_OPT void Vtb_Question2___024root___nba_comb__TOP__0(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___nba_comb__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->tb_Question2__DOT__i_rst_n) 
         ^ (IData)(vlSelf->tb_Question2__DOT____Vtogcov__i_rst_n))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_rst_n 
            = vlSelf->tb_Question2__DOT__i_rst_n;
    }
    if ((1U & (vlSelf->tb_Question2__DOT__i_addr ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfffffeU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (1U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((2U & (vlSelf->tb_Question2__DOT__i_addr ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfffffdU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (2U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((4U & (vlSelf->tb_Question2__DOT__i_addr ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfffffbU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (4U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((8U & (vlSelf->tb_Question2__DOT__i_addr ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfffff7U & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (8U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x10U & (vlSelf->tb_Question2__DOT__i_addr 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xffffefU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x10U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x20U & (vlSelf->tb_Question2__DOT__i_addr 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xffffdfU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x20U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x40U & (vlSelf->tb_Question2__DOT__i_addr 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xffffbfU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x40U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x80U & (vlSelf->tb_Question2__DOT__i_addr 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xffff7fU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x80U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x100U & (vlSelf->tb_Question2__DOT__i_addr 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfffeffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x100U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x200U & (vlSelf->tb_Question2__DOT__i_addr 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfffdffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x200U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x400U & (vlSelf->tb_Question2__DOT__i_addr 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfffbffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x400U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x800U & (vlSelf->tb_Question2__DOT__i_addr 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfff7ffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x800U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x1000U & (vlSelf->tb_Question2__DOT__i_addr 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xffefffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x1000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x2000U & (vlSelf->tb_Question2__DOT__i_addr 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xffdfffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x2000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x4000U & (vlSelf->tb_Question2__DOT__i_addr 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xffbfffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x4000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x8000U & (vlSelf->tb_Question2__DOT__i_addr 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xff7fffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x8000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x10000U & (vlSelf->tb_Question2__DOT__i_addr 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfeffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x10000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x20000U & (vlSelf->tb_Question2__DOT__i_addr 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfdffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x20000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x40000U & (vlSelf->tb_Question2__DOT__i_addr 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xfbffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x40000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x80000U & (vlSelf->tb_Question2__DOT__i_addr 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xf7ffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x80000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x100000U & (vlSelf->tb_Question2__DOT__i_addr 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xefffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x100000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x200000U & (vlSelf->tb_Question2__DOT__i_addr 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xdfffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x200000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x400000U & (vlSelf->tb_Question2__DOT__i_addr 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0xbfffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x400000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((0x800000U & (vlSelf->tb_Question2__DOT__i_addr 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_addr))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_addr 
            = ((0x7fffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_addr) 
               | (0x800000U & vlSelf->tb_Question2__DOT__i_addr));
    }
    if ((1U & (vlSelf->tb_Question2__DOT__i_data ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfffffeU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (1U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((2U & (vlSelf->tb_Question2__DOT__i_data ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfffffdU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (2U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((4U & (vlSelf->tb_Question2__DOT__i_data ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfffffbU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (4U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((8U & (vlSelf->tb_Question2__DOT__i_data ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfffff7U & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (8U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x10U & (vlSelf->tb_Question2__DOT__i_data 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xffffefU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x10U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x20U & (vlSelf->tb_Question2__DOT__i_data 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xffffdfU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x20U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x40U & (vlSelf->tb_Question2__DOT__i_data 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xffffbfU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x40U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x80U & (vlSelf->tb_Question2__DOT__i_data 
                  ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xffff7fU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x80U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x100U & (vlSelf->tb_Question2__DOT__i_data 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfffeffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x100U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x200U & (vlSelf->tb_Question2__DOT__i_data 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfffdffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x200U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x400U & (vlSelf->tb_Question2__DOT__i_data 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfffbffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x400U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x800U & (vlSelf->tb_Question2__DOT__i_data 
                   ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfff7ffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x800U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x1000U & (vlSelf->tb_Question2__DOT__i_data 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xffefffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x1000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x2000U & (vlSelf->tb_Question2__DOT__i_data 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xffdfffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x2000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x4000U & (vlSelf->tb_Question2__DOT__i_data 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xffbfffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x4000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x8000U & (vlSelf->tb_Question2__DOT__i_data 
                    ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xff7fffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x8000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x10000U & (vlSelf->tb_Question2__DOT__i_data 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfeffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x10000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x20000U & (vlSelf->tb_Question2__DOT__i_data 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfdffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x20000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x40000U & (vlSelf->tb_Question2__DOT__i_data 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xfbffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x40000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x80000U & (vlSelf->tb_Question2__DOT__i_data 
                     ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xf7ffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x80000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x100000U & (vlSelf->tb_Question2__DOT__i_data 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xefffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x100000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x200000U & (vlSelf->tb_Question2__DOT__i_data 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xdfffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x200000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x400000U & (vlSelf->tb_Question2__DOT__i_data 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0xbfffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x400000U & vlSelf->tb_Question2__DOT__i_data));
    }
    if ((0x800000U & (vlSelf->tb_Question2__DOT__i_data 
                      ^ vlSelf->tb_Question2__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_data 
            = ((0x7fffffU & vlSelf->tb_Question2__DOT____Vtogcov__i_data) 
               | (0x800000U & vlSelf->tb_Question2__DOT__i_data));
    }
    vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0 
        = (1U & (~ (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0) 
                     >> 1U) | (IData)((0U != (0x30000U 
                                              & vlSelf->tb_Question2__DOT__i_data))))));
    vlSelf->__VdfgRegularize_hd87f99a1_2_2 = (IData)(
                                                     (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1) 
                                                       >> 1U) 
                                                      | (0U 
                                                         != 
                                                         (0x300000U 
                                                          & vlSelf->tb_Question2__DOT__i_data))));
    if (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0;
    }
    if ((1U ^ ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_2) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_1)))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_1 
            = (1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_2)));
    }
    vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_zero_flag 
        = ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
           & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_2)));
    if (vlSelf->__VdfgRegularize_hd87f99a1_2_2) {
        vlSelf->__VdfgRegularize_hd87f99a1_2_3 = (1U 
                                                  & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1));
        vlSelf->__VdfgRegularize_hd87f99a1_2_4 = (1U 
                                                  & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1) 
                                                     >> 1U));
    } else {
        vlSelf->__VdfgRegularize_hd87f99a1_2_3 = (1U 
                                                  & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0));
        vlSelf->__VdfgRegularize_hd87f99a1_2_4 = (1U 
                                                  & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0) 
                                                     >> 1U));
    }
    if (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_zero_flag))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_zero_flag 
            = vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_zero_flag;
    }
    vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_pos_one 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_2) 
            << 2U) | (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_4) 
                       << 1U) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_3)));
    if ((1U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_pos_one) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one 
            = ((6U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)) 
               | (1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_pos_one)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_pos_one) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one 
            = ((5U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)) 
               | (2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_pos_one)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_pos_one) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one 
            = ((3U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)) 
               | (4U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_pos_one)));
    }
}

VL_INLINE_OPT void Vtb_Question2___024root___nba_comb__TOP__1(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___nba_comb__TOP__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_zero_flag) 
         ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_zero_flag))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_zero_flag 
            = vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_zero_flag;
    }
    vlSelf->tb_Question2__DOT__DUT__DOT__w_zero_flag 
        = ((IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_zero_flag) 
           & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_zero_flag));
    if ((1U & ((IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one 
            = ((0xeU & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)) 
               | (1U & (IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one 
            = ((0xdU & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)) 
               | (2U & (IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one 
            = ((0xbU & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)) 
               | (4U & (IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one 
            = ((7U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)) 
               | (8U & (IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one)));
    }
    vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position 
        = ((0x10U & ((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_zero_flag)) 
                     << 4U)) | ((0xfffffff8U & (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_zero_flag) 
                                                 << 3U) 
                                                & (IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one))) 
                                | ((4U & (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_zero_flag)
                                            ? ((IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one) 
                                               >> 2U)
                                            : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_2)) 
                                          << 2U)) | 
                                   ((2U & (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_zero_flag)
                                             ? ((IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one) 
                                                >> 1U)
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_4)) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_zero_flag)
                                              ? (IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one)
                                              : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_3)))))));
    if (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_zero_flag) 
         ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_zero_flag))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_zero_flag 
            = vlSelf->tb_Question2__DOT__DUT__DOT__w_zero_flag;
    }
    if ((1U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position)))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position 
            = ((0x1eU & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position)) 
               | (1U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position)))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position 
            = ((0x1dU & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position)) 
               | (2U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position)))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position 
            = ((0x1bU & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position)) 
               | (4U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position) 
               ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position)))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position 
            = ((0x17U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position)) 
               | (8U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position) 
                  ^ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position)))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position 
            = ((0xfU & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position)) 
               | (0x10U & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position)));
    }
}
