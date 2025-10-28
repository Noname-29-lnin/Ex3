// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question2.h for the primary calling header

#include "Vtb_Question2__pch.h"
#include "Vtb_Question2___024root.h"

VL_ATTR_COLD void Vtb_Question2___024root___eval_initial__TOP(Vtb_Question2___024root* vlSelf);
VlCoroutine Vtb_Question2___024root___eval_initial__TOP__Vtiming__0(Vtb_Question2___024root* vlSelf);
VlCoroutine Vtb_Question2___024root___eval_initial__TOP__Vtiming__1(Vtb_Question2___024root* vlSelf);

void Vtb_Question2___024root___eval_initial(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___eval_initial\n"); );
    // Body
    Vtb_Question2___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_Question2___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_Question2___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_Question2__DOT__i_clk__0 
        = vlSelf->tb_Question2__DOT__i_clk;
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
                                           "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                           53);
        vlSelf->tb_Question2__DOT__i_clk = (1U & (~ (IData)(vlSelf->tb_Question2__DOT__i_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_Question2___024root___eval_initial__TOP__Vtiming__1(Vtb_Question2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ tb_Question2__DOT____Vrepeat2;
    tb_Question2__DOT____Vrepeat2 = 0;
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
    CData/*4:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__6__Vfuncout;
    __Vfunc_tb_Question2__DOT__Test_LOPD__6__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__6__f_i_data;
    __Vfunc_tb_Question2__DOT__Test_LOPD__6__f_i_data = 0;
    IData/*23:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__6__t_temp;
    __Vfunc_tb_Question2__DOT__Test_LOPD__6__t_temp = 0;
    IData/*31:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__6__cnt_position_1;
    __Vfunc_tb_Question2__DOT__Test_LOPD__6__cnt_position_1 = 0;
    CData/*4:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__7__Vfuncout;
    __Vfunc_tb_Question2__DOT__Test_LOPD__7__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__7__f_i_data;
    __Vfunc_tb_Question2__DOT__Test_LOPD__7__f_i_data = 0;
    IData/*23:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__7__t_temp;
    __Vfunc_tb_Question2__DOT__Test_LOPD__7__t_temp = 0;
    IData/*31:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__7__cnt_position_1;
    __Vfunc_tb_Question2__DOT__Test_LOPD__7__cnt_position_1 = 0;
    CData/*4:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__8__Vfuncout;
    __Vfunc_tb_Question2__DOT__Test_LOPD__8__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__8__f_i_data;
    __Vfunc_tb_Question2__DOT__Test_LOPD__8__f_i_data = 0;
    IData/*23:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__8__t_temp;
    __Vfunc_tb_Question2__DOT__Test_LOPD__8__t_temp = 0;
    IData/*31:0*/ __Vfunc_tb_Question2__DOT__Test_LOPD__8__cnt_position_1;
    __Vfunc_tb_Question2__DOT__Test_LOPD__8__cnt_position_1 = 0;
    IData/*31:0*/ __Vtemp_7;
    IData/*31:0*/ __Vtemp_16;
    IData/*31:0*/ __Vtemp_26;
    IData/*31:0*/ __Vtemp_36;
    IData/*31:0*/ __Vtemp_46;
    IData/*31:0*/ __Vtemp_56;
    IData/*31:0*/ __Vtemp_66;
    IData/*31:0*/ __Vtemp_76;
    IData/*31:0*/ __Vtemp_86;
    IData/*31:0*/ __Vtemp_96;
    IData/*31:0*/ __Vtemp_106;
    IData/*31:0*/ __Vtemp_116;
    IData/*31:0*/ __Vtemp_126;
    IData/*31:0*/ __Vtemp_136;
    IData/*31:0*/ __Vtemp_146;
    IData/*31:0*/ __Vtemp_156;
    IData/*31:0*/ __Vtemp_166;
    IData/*31:0*/ __Vtemp_176;
    IData/*31:0*/ __Vtemp_186;
    IData/*31:0*/ __Vtemp_196;
    IData/*31:0*/ __Vtemp_206;
    IData/*31:0*/ __Vtemp_216;
    IData/*31:0*/ __Vtemp_226;
    IData/*31:0*/ __Vtemp_236;
    IData/*31:0*/ __Vtemp_246;
    IData/*31:0*/ __Vtemp_250;
    IData/*31:0*/ __Vtemp_256;
    // Body
    vlSelf->tb_Question2__DOT__i_rst_n = 0U;
    vlSelf->tb_Question2__DOT__i_addr = 0U;
    vlSelf->tb_Question2__DOT__i_data = 0U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = 0U;
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Zero] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__0__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__0__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__0__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__0__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__1__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__1__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__1__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__1__cnt_position_1) 
                                        - (IData)(1U)));
                    }
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
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__2__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__2__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__2__Vfuncout)) 
                  == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                             & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                            << 3U) 
                                           | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                 & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                 ? 
                                                ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                  : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                               << 2U) 
                                              | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                    ? 
                                                   ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                     ? 
                                                    ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                      : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                     : 
                                                    ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                      ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                      : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                    : 
                                                   ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                     ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                     : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                  << 1U) 
                                                 | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                       ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                       : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                       ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                       : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                     : 
                                                    ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                  ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                  : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_7;
    vlSelf->tb_Question2__DOT__bit_pos = 1U;
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_16 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                   == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                 << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                              & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                 & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                  ? 
                                                 ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                  : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                << 2U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                     : 
                                                    ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                      ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                      : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                       : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                   ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                   : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_16;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_26 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                   == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                 << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                              & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                 & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                  ? 
                                                 ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                  : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                << 2U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                     : 
                                                    ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                      ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                      : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                       : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                   ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                   : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_26;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_36 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                   == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                 << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                              & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                 & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                  ? 
                                                 ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                  : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                << 2U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                     : 
                                                    ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                      ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                      : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                       : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                   ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                   : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_36;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_46 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                   == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                 << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                              & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                 & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                  ? 
                                                 ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                  : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                << 2U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                     : 
                                                    ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                      ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                      : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                       : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                   ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                   : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_46;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_56 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                   == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                 << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                              & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                 & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                  ? 
                                                 ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                  : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                << 2U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                     : 
                                                    ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                      ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                      : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                       : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                   ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                   : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_56;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_66 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                   == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                 << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                              & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                 & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                  ? 
                                                 ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                  : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                << 2U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                     : 
                                                    ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                      ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                      : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                       : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                   ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                   : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_66;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_76 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                   == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                 << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                              & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                 & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                  ? 
                                                 ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                  : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                << 2U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                     : 
                                                    ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                      ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                      : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                       : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                   ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                   : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_76;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_86 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                   == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                 << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                              & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                 & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                  ? 
                                                 ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                  : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                << 2U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                     : 
                                                    ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                      ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                      : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                       : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                   ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                   : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_86;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_96 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                   == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                 << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                              & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                 & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                  ? 
                                                 ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                  : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                << 2U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                     : 
                                                    ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                      ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                      : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                       : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                   ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                   : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_96;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_106 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                    == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                  << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                               & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                              << 3U) 
                                             | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                   & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                   ? 
                                                  ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                 << 2U) 
                                                | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                       ? 
                                                      ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_106;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_116 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                    == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                  << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                               & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                              << 3U) 
                                             | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                   & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                   ? 
                                                  ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                 << 2U) 
                                                | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                       ? 
                                                      ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_116;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_126 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                    == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                  << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                               & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                              << 3U) 
                                             | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                   & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                   ? 
                                                  ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                 << 2U) 
                                                | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                       ? 
                                                      ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_126;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_136 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                    == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                  << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                               & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                              << 3U) 
                                             | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                   & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                   ? 
                                                  ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                 << 2U) 
                                                | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                       ? 
                                                      ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_136;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_146 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                    == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                  << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                               & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                              << 3U) 
                                             | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                   & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                   ? 
                                                  ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                 << 2U) 
                                                | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                       ? 
                                                      ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_146;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_156 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                    == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                  << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                               & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                              << 3U) 
                                             | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                   & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                   ? 
                                                  ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                 << 2U) 
                                                | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                       ? 
                                                      ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_156;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_166 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                    == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                  << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                               & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                              << 3U) 
                                             | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                   & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                   ? 
                                                  ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                 << 2U) 
                                                | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                       ? 
                                                      ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_166;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_176 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                    == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                  << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                               & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                              << 3U) 
                                             | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                   & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                   ? 
                                                  ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                 << 2U) 
                                                | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                       ? 
                                                      ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_176;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_186 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                    == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                  << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                               & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                              << 3U) 
                                             | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                   & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                   ? 
                                                  ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                 << 2U) 
                                                | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                       ? 
                                                      ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_186;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_196 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                    == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                  << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                               & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                              << 3U) 
                                             | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                   & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                   ? 
                                                  ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                 << 2U) 
                                                | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                       ? 
                                                      ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_196;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_206 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                    == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                  << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                               & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                              << 3U) 
                                             | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                   & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                   ? 
                                                  ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                 << 2U) 
                                                | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                       ? 
                                                      ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_206;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_216 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                    == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                  << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                               & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                              << 3U) 
                                             | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                   & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                   ? 
                                                  ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                 << 2U) 
                                                | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                       ? 
                                                      ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_216;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_226 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                    == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                  << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                               & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                              << 3U) 
                                             | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                   & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                   ? 
                                                  ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                 << 2U) 
                                                | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                       ? 
                                                      ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_226;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_236 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                    == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                  << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                               & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                              << 3U) 
                                             | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                   & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                   ? 
                                                  ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                 << 2U) 
                                                | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                       ? 
                                                      ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_236;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->tb_Question2__DOT__i_addr));
    vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                         & vlSelf->tb_Question2__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_h7131cd60__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TIME: %5t] [Direcly] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,24,vlSelf->tb_Question2__DOT__i_data,
                 24,vlSelf->tb_Question2__DOT__i_data,
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                     & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                    & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                = vlSelf->tb_Question2__DOT__i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                            __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                            if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
                            } else {
                                while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                                 >> 0x17U)))) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                        = (0xffffffU 
                                           & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp, 1U));
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 
                                        = ((IData)(1U) 
                                           + __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1);
                                }
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                    = (0x1fU & (((IData)(0x18U) 
                                                 - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                                - (IData)(1U)));
                            }
                        }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
                      == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                    << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                 & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                << 3U) 
                                               | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                     ? 
                                                    ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                     : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                   << 2U) 
                                                  | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                        ? 
                                                       ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                          : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                         ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                         : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                      ? 0x50415353U : 0x4641494cU),
                 5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                              << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                           & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                          << 3U) | 
                                         (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                             ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                              ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                   : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                              : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                               & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                               ? ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                 5,([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__4__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout)));
    vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question2__DOT__test_count);
    __Vtemp_246 = ((([&]() {
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data 
                        = vlSelf->tb_Question2__DOT__i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                        = __Vfunc_tb_Question2__DOT__Test_LOPD__5__f_i_data;
                    __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 = 0U;
                    if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp)) {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout = 0U;
                    } else {
                        while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                         >> 0x17U)))) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                = ((IData)(1U) + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                        }
                        __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                            = (0x1fU & (((IData)(0x18U) 
                                         - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                        - (IData)(1U)));
                    }
                }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
                    == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                  << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                               & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                              << 3U) 
                                             | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                   & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                   ? 
                                                  ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                 << 2U) 
                                                | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                       ? 
                                                      ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                    ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                    : vlSelf->tb_Question2__DOT__test_pass);
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_246;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    tb_Question2__DOT____Vrepeat2 = 0x64U;
    while (VL_LTS_III(32, 0U, tb_Question2__DOT____Vrepeat2)) {
        co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_Question2.i_clk)", 
                                                           "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                           101);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                           102);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_Question2__DOT__bit_pos = VL_URANDOM_RANGE_I(0U, 0x17U);
        vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                             & VL_SHIFTL_III(24,24,32, (IData)(1U), vlSelf->tb_Question2__DOT__bit_pos));
        if ((0U != VL_URANDOM_RANGE_I(0U, 1U))) {
            __Vtemp_250 = (0xffffffU & (vlSelf->tb_Question2__DOT__i_data 
                                        | VL_URANDOM_RANGE_I(0U, 0xffffffU)));
            vlSelf->tb_Question2__DOT__i_data = __Vtemp_250;
        }
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                           108);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VL_WRITEF_NX("[TIME: %5t] [Random] i_data = %b (%8#) \t| o_one_position = %b (%2#) \t| o_zero_flag = %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,24,
                     vlSelf->tb_Question2__DOT__i_data,
                     24,vlSelf->tb_Question2__DOT__i_data,
                     5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                  << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                               & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                              << 3U) 
                                             | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                   & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                   ? 
                                                  ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                 << 2U) 
                                                | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                       ? 
                                                      ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                     5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                  << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                               & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                              << 3U) 
                                             | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                   & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                   ? 
                                                  ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                 << 2U) 
                                                | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                       ? 
                                                      ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                     1,((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
                          & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                         & (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                        & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                           & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
        VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                     32,((([&]() {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__6__f_i_data 
                                    = vlSelf->tb_Question2__DOT__i_data;
                                __Vfunc_tb_Question2__DOT__Test_LOPD__6__t_temp 
                                    = __Vfunc_tb_Question2__DOT__Test_LOPD__6__f_i_data;
                                __Vfunc_tb_Question2__DOT__Test_LOPD__6__cnt_position_1 = 0U;
                                if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__6__t_temp)) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__6__Vfuncout = 0U;
                                } else {
                                    while ((1U & (~ 
                                                  (__Vfunc_tb_Question2__DOT__Test_LOPD__6__t_temp 
                                                   >> 0x17U)))) {
                                        __Vfunc_tb_Question2__DOT__Test_LOPD__6__t_temp 
                                            = (0xffffffU 
                                               & VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__6__t_temp, 1U));
                                        __Vfunc_tb_Question2__DOT__Test_LOPD__6__cnt_position_1 
                                            = ((IData)(1U) 
                                               + __Vfunc_tb_Question2__DOT__Test_LOPD__6__cnt_position_1);
                                    }
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__6__Vfuncout 
                                        = (0x1fU & 
                                           (((IData)(0x18U) 
                                             - __Vfunc_tb_Question2__DOT__Test_LOPD__6__cnt_position_1) 
                                            - (IData)(1U)));
                                }
                            }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__6__Vfuncout)) 
                          == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                            & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                        << 4U)) | (
                                                   (((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                     & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                        & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                    << 3U) 
                                                   | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                         & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                         ? 
                                                        ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                       << 2U) 
                                                      | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                            & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                            ? 
                                                           ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                             ? 
                                                            ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                              ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                              : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                             : 
                                                            ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                              ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                              : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                            : 
                                                           ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                             ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                             : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                          << 1U) 
                                                         | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                             ? 
                                                            ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                              ? 
                                                             ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                               : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                              : 
                                                             ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                               : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                             : 
                                                            ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                              ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                              : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                          ? 0x50415353U : 0x4641494cU),
                     5,((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                  << 4U)) | ((((~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                               & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                              << 3U) 
                                             | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                   & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                   ? 
                                                  ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                 << 2U) 
                                                | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                      ? 
                                                     ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                       ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                       : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                       ? 
                                                      ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))),
                     5,([&]() {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__7__f_i_data 
                            = vlSelf->tb_Question2__DOT__i_data;
                        __Vfunc_tb_Question2__DOT__Test_LOPD__7__t_temp 
                            = __Vfunc_tb_Question2__DOT__Test_LOPD__7__f_i_data;
                        __Vfunc_tb_Question2__DOT__Test_LOPD__7__cnt_position_1 = 0U;
                        if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__7__t_temp)) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__7__Vfuncout = 0U;
                        } else {
                            while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__7__t_temp 
                                             >> 0x17U)))) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__7__t_temp 
                                    = (0xffffffU & 
                                       VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__7__t_temp, 1U));
                                __Vfunc_tb_Question2__DOT__Test_LOPD__7__cnt_position_1 
                                    = ((IData)(1U) 
                                       + __Vfunc_tb_Question2__DOT__Test_LOPD__7__cnt_position_1);
                            }
                            __Vfunc_tb_Question2__DOT__Test_LOPD__7__Vfuncout 
                                = (0x1fU & (((IData)(0x18U) 
                                             - __Vfunc_tb_Question2__DOT__Test_LOPD__7__cnt_position_1) 
                                            - (IData)(1U)));
                        }
                    }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__7__Vfuncout)));
        vlSelf->tb_Question2__DOT__test_count = ((IData)(1U) 
                                                 + vlSelf->tb_Question2__DOT__test_count);
        __Vtemp_256 = ((([&]() {
                        __Vfunc_tb_Question2__DOT__Test_LOPD__8__f_i_data 
                            = vlSelf->tb_Question2__DOT__i_data;
                        __Vfunc_tb_Question2__DOT__Test_LOPD__8__t_temp 
                            = __Vfunc_tb_Question2__DOT__Test_LOPD__8__f_i_data;
                        __Vfunc_tb_Question2__DOT__Test_LOPD__8__cnt_position_1 = 0U;
                        if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__8__t_temp)) {
                            __Vfunc_tb_Question2__DOT__Test_LOPD__8__Vfuncout = 0U;
                        } else {
                            while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__8__t_temp 
                                             >> 0x17U)))) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__8__t_temp 
                                    = (0xffffffU & 
                                       VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__8__t_temp, 1U));
                                __Vfunc_tb_Question2__DOT__Test_LOPD__8__cnt_position_1 
                                    = ((IData)(1U) 
                                       + __Vfunc_tb_Question2__DOT__Test_LOPD__8__cnt_position_1);
                            }
                            __Vfunc_tb_Question2__DOT__Test_LOPD__8__Vfuncout 
                                = (0x1fU & (((IData)(0x18U) 
                                             - __Vfunc_tb_Question2__DOT__Test_LOPD__8__cnt_position_1) 
                                            - (IData)(1U)));
                        }
                    }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__8__Vfuncout)) 
                        == ((0x10U & ((~ ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                          & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                      << 4U)) | (((
                                                   (~ (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                                   & ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))) 
                                                  << 3U) 
                                                 | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                       & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                       ? 
                                                      ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                       : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                                     << 2U) 
                                                    | (((((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                          & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                          ? 
                                                         ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                           ? 
                                                          ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                            ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                            : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                           : 
                                                          ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                            ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                            : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                           ? (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                           : (IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                        << 1U) 
                                                       | (((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
                                                           & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))
                                                           ? 
                                                          ((IData)(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                            ? 
                                                           ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                             ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)
                                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4))
                                                            : 
                                                           ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                             ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                             : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)))
                                                           : 
                                                          ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                            ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                            : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10))))))))
                        ? ((IData)(1U) + vlSelf->tb_Question2__DOT__test_pass)
                        : vlSelf->tb_Question2__DOT__test_pass);
        vlSelf->tb_Question2__DOT__test_pass = __Vtemp_256;
        vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                             & ((IData)(1U) 
                                                + vlSelf->tb_Question2__DOT__i_addr));
        tb_Question2__DOT____Vrepeat2 = (tb_Question2__DOT____Vrepeat2 
                                         - (IData)(1U));
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       116);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n================================\n==========TEST SUMMARY==========\nTotal test cases: %6d    \nPassed          : %6d    \nFailed          : %6d    \nPass rate       : %0.2f%%\n================================\n",0,
                 32,vlSelf->tb_Question2__DOT__test_count,
                 32,vlSelf->tb_Question2__DOT__test_pass,
                 32,(vlSelf->tb_Question2__DOT__test_count 
                     - vlSelf->tb_Question2__DOT__test_pass),
                 64,((100.0 * VL_ISTOR_D_I(32, vlSelf->tb_Question2__DOT__test_pass)) 
                     / VL_ISTOR_D_I(32, vlSelf->tb_Question2__DOT__test_count)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       124);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 126, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}
