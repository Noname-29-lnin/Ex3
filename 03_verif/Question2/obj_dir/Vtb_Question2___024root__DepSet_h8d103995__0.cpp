// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question2.h for the primary calling header

#include "Vtb_Question2__pch.h"
#include "Vtb_Question2__Syms.h"
#include "Vtb_Question2___024root.h"

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
                                           71);
        vlSelf->tb_Question2__DOT__i_clk = (1U & (~ (IData)(vlSelf->tb_Question2__DOT__i_clk)));
        ++(vlSymsp->__Vcoverage[86]);
    }
    ++(vlSymsp->__Vcoverage[87]);
}

VL_INLINE_OPT VlCoroutine Vtb_Question2___024root___eval_initial__TOP__Vtiming__1(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ tb_Question2__DOT____Vrepeat1;
    tb_Question2__DOT____Vrepeat1 = 0;
    CData/*4:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout;
    __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
    __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data = 0;
    IData/*23:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp;
    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp = 0;
    IData/*31:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1;
    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0;
    CData/*4:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout;
    __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data = 0;
    IData/*23:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp;
    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp = 0;
    IData/*31:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1;
    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0;
    CData/*4:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout;
    __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data = 0;
    IData/*23:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp;
    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp = 0;
    IData/*31:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1;
    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0;
    CData/*4:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout;
    __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
    __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data = 0;
    IData/*23:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp;
    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp = 0;
    IData/*31:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1;
    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0;
    CData/*4:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout;
    __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data = 0;
    IData/*23:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp;
    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp = 0;
    IData/*31:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1;
    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0;
    CData/*4:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout;
    __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data = 0;
    IData/*23:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp;
    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp = 0;
    IData/*31:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1;
    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0;
    IData/*31:0*/ __Vtemp_7;
    IData/*31:0*/ __Vtemp_17;
    IData/*31:0*/ __Vtemp_27;
    IData/*31:0*/ __Vtemp_37;
    IData/*31:0*/ __Vtemp_47;
    IData/*31:0*/ __Vtemp_57;
    IData/*31:0*/ __Vtemp_67;
    IData/*31:0*/ __Vtemp_77;
    IData/*31:0*/ __Vtemp_87;
    IData/*31:0*/ __Vtemp_97;
    IData/*31:0*/ __Vtemp_107;
    IData/*31:0*/ __Vtemp_117;
    IData/*31:0*/ __Vtemp_127;
    IData/*31:0*/ __Vtemp_137;
    IData/*31:0*/ __Vtemp_147;
    IData/*31:0*/ __Vtemp_157;
    IData/*31:0*/ __Vtemp_167;
    IData/*31:0*/ __Vtemp_177;
    IData/*31:0*/ __Vtemp_187;
    IData/*31:0*/ __Vtemp_197;
    IData/*31:0*/ __Vtemp_207;
    IData/*31:0*/ __Vtemp_217;
    IData/*31:0*/ __Vtemp_227;
    IData/*31:0*/ __Vtemp_237;
    IData/*31:0*/ __Vtemp_241;
    IData/*31:0*/ __Vtemp_247;
    // Body
    vlSelf->tb_Question2__DOT__i_rst_n = 0U;
    vlSelf->tb_Question2__DOT__i_addr = 0U;
    vlSelf->tb_Question2__DOT__i_data = 0U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       87);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = 1U;
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_7 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                  == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                  ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                  : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_7;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_17 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                   ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                   : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_17;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_27 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                   ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                   : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_27;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_37 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                   ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                   : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_37;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_47 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                   ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                   : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_47;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_57 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                   ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                   : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_57;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_67 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                   ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                   : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_67;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_77 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                   ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                   : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_77;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_87 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                   ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                   : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_87;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_97 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                   ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                   : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_97;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_107 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                    == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_107;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_117 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                    == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_117;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_127 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                    == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_127;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_137 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                    == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_137;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_147 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                    == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_147;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_157 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                    == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_157;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_167 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                    == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_167;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_177 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                    == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_177;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_187 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                    == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_187;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_197 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                    == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_197;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_207 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                    == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_207;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_217 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                    == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_217;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_227 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                    == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_227;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,vlSelf->tb_Question2__DOT__o_one_position,
                 1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
    VL_WRITEF_NX("[TIME: %5t] [Direcly] - %4s: Expect: %8x, DUT: %8x \n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   ([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                                ++(vlSymsp->__Vcoverage[83]);
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                    ++(vlSymsp->__Vcoverage[82]);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[84]);
                            }
                            ++(vlSymsp->__Vcoverage[85]);
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                                                   == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                                                   ? 0x50415353U
                                                   : 0x4641494cU),
                 5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_237 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__2__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[83]);
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                            ++(vlSymsp->__Vcoverage[82]);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[84]);
                    }
                    ++(vlSymsp->__Vcoverage[85]);
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                    == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_237;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    ++(vlSymsp->__Vcoverage[89]);
    tb_Question2__DOT____Vrepeat1 = 0x3e8U;
    while (VL_LTS_III(32, 0U, tb_Question2__DOT____Vrepeat1)) {
        co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_Question2.i_clk)", 
                                                           "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                                           107);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                           108);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_Question2__DOT__bit_pos = VL_URANDOM_RANGE_I(0U, 0x17U);
        vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                             & VL_SHIFTL_III(24,24,32, (IData)(1U), vlSelf->tb_Question2__DOT__bit_pos));
        if ((0U != VL_URANDOM_RANGE_I(0U, 1U))) {
            __Vtemp_241 = (0xffffffU & (vlSelf->tb_Question2__DOT__i_data 
                                        | VL_URANDOM_RANGE_I(0U, 0xffffffU)));
            vlSelf->tb_Question2__DOT__i_data = __Vtemp_241;
            ++(vlSymsp->__Vcoverage[90]);
        } else {
            ++(vlSymsp->__Vcoverage[91]);
        }
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                           114);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VL_WRITEF_NX("=> i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                     24,vlSelf->tb_Question2__DOT__i_data,
                     24,vlSelf->tb_Question2__DOT__i_data,
                     5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                     5,vlSelf->tb_Question2__DOT__o_one_position,
                     1,(IData)(vlSelf->tb_Question2__DOT__o_zero_flag));
        VL_WRITEF_NX("[TIME: %5t] [Randome] - %4s: Expect: %8x, DUT: %8x \n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     ((([&]() {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                    = vlSelf->tb_Question2__DOT__i_data;
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                    = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                                if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                                    ++(vlSymsp->__Vcoverage[83]);
                                } else {
                                    while ((1U & (~ 
                                                  (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                   >> 0x17U)))) {
                                        __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                            = (0xffffffU 
                                               & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                        __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                            = ((IData)(1U) 
                                               + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                        ++(vlSymsp->__Vcoverage[82]);
                                    }
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                        = (0x1fU & 
                                           (((IData)(0x18U) 
                                             - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                            - (IData)(1U)));
                                    ++(vlSymsp->__Vcoverage[84]);
                                }
                                ++(vlSymsp->__Vcoverage[85]);
                            }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                       == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                       ? 0x50415353U : 0x4641494cU),
                     5,(IData)(vlSelf->tb_Question2__DOT__o_one_position),
                     5,([&]() {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                            = vlSelf->tb_Question2__DOT__i_data;
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                            = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                        if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                            ++(vlSymsp->__Vcoverage[83]);
                        } else {
                            while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                             >> 0x17U)))) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                    = (0xffffffU & 
                                       VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                                __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                    = ((IData)(1U) 
                                       + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                                ++(vlSymsp->__Vcoverage[82]);
                            }
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                                = (0x1fU & (((IData)(0x18U) 
                                             - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                            - (IData)(1U)));
                            ++(vlSymsp->__Vcoverage[84]);
                        }
                        ++(vlSymsp->__Vcoverage[85]);
                    }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
        vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                                 + vlSelf->tb_Question2__DOT__test_count);
        __Vtemp_247 = ((([&]() {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                            = vlSelf->tb_Question2__DOT__i_data;
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                            = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                        if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                            ++(vlSymsp->__Vcoverage[83]);
                        } else {
                            while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                             >> 0x17U)))) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                    = (0xffffffU & 
                                       VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                                __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                    = ((IData)(1U) 
                                       + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                                ++(vlSymsp->__Vcoverage[82]);
                            }
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                                = (0x1fU & (((IData)(0x18U) 
                                             - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                            - (IData)(1U)));
                            ++(vlSymsp->__Vcoverage[84]);
                        }
                        ++(vlSymsp->__Vcoverage[85]);
                    }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                        == (IData)(vlSelf->tb_Question2__DOT__o_one_position))
                        ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                        : vlSelf->tb_Question2__DOT__test_pass);
        vlSelf->tb_Question2__DOT__test_pass = __Vtemp_247;
        vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                             & ((IData)(1U) 
                                                + vlSelf->tb_Question2__DOT__i_addr));
        ++(vlSymsp->__Vcoverage[92]);
        tb_Question2__DOT____Vrepeat1 = (tb_Question2__DOT____Vrepeat1 
                                         - (IData)(1U));
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       122);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n================================\n==========TEST SUMMARY==========\nTotal test cases: %6d    \nPassed          : %6d    \nFailed          : %6d    \nPass rate       : %0.2f%%\n================================\n",0,
                 32,vlSelf->tb_Question2__DOT__test_count,
                 32,vlSelf->tb_Question2__DOT__test_pass,
                 32,(vlSelf->tb_Question2__DOT__test_count 
                     - vlSelf->tb_Question2__DOT__test_pass),
                 64,((100.0 * VL_ISTOR_D_I(32, vlSelf->tb_Question2__DOT__test_pass)) 
                     / VL_ISTOR_D_I(32, vlSelf->tb_Question2__DOT__test_count)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 
                                       130);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("/home/noname/Documents/project_tiny/Ex3/03_verif/Question2/tb_Question2.sv", 132, "");
    ++(vlSymsp->__Vcoverage[93]);
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question2___024root___dump_triggers__act(Vtb_Question2___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_Question2___024root___eval_triggers__act(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tb_Question2__DOT__i_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__i_clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__i_clk__0 
        = vlSelf->tb_Question2__DOT__i_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_Question2___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_Question2___024root___act_sequent__TOP__0(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___act_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->tb_Question2__DOT__i_clk) 
         ^ (IData)(vlSelf->tb_Question2__DOT____Vtogcov__i_clk))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->tb_Question2__DOT____Vtogcov__i_clk 
            = vlSelf->tb_Question2__DOT__i_clk;
    }
}

VL_INLINE_OPT void Vtb_Question2___024root___act_comb__TOP__0(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___act_comb__TOP__0\n"); );
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
