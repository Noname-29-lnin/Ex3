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
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__i_rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question2__DOT__bit_pos = 1U;
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_17 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_17;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_27 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_27;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_37 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_37;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_47 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_47;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_57 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_57;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_67 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_67;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_77 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_77;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_87 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_87;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_97 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_97;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_107 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_107;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_117 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_117;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_127 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_127;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_137 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_137;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_147 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_147;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_157 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_157;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_167 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_167;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_177 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_177;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_187 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_187;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_197 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_197;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_207 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_207;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_217 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_217;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_227 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_227;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question2.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       76);
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
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       80);
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
    __Vtemp_237 = ((([&]() {
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
    vlSelf->tb_Question2__DOT__test_pass = __Vtemp_237;
    vlSelf->tb_Question2__DOT__bit_pos = (vlSelf->tb_Question2__DOT__bit_pos 
                                          << 1U);
    tb_Question2__DOT____Vrepeat1 = 0x64U;
    while (VL_LTS_III(32, 0U, tb_Question2__DOT____Vrepeat1)) {
        co_await vlSelf->__VtrigSched_h7131ccb1__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_Question2.i_clk)", 
                                                           "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                           89);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_Question2__DOT__bit_pos = VL_URANDOM_RANGE_I(0U, 0x17U);
        vlSelf->tb_Question2__DOT__i_data = (0xffffffU 
                                             & VL_SHIFTL_III(24,24,32, (IData)(1U), vlSelf->tb_Question2__DOT__bit_pos));
        if ((0U != VL_URANDOM_RANGE_I(0U, 1U))) {
            __Vtemp_241 = (0xffffffU & (vlSelf->tb_Question2__DOT__i_data 
                                        | VL_URANDOM_RANGE_I(0U, 0xffffffU)));
            vlSelf->tb_Question2__DOT__i_data = __Vtemp_241;
        }
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                           95);
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
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data 
                                    = vlSelf->tb_Question2__DOT__i_data;
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp 
                                    = __Vfunc_tb_Question2__DOT__Test_LOPD__3__f_i_data;
                                __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1 = 0U;
                                if ((0U == __Vfunc_tb_Question2__DOT__Test_LOPD__3__t_temp)) {
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout = 0U;
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
                                    }
                                    __Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout 
                                        = (0x1fU & 
                                           (((IData)(0x18U) 
                                             - __Vfunc_tb_Question2__DOT__Test_LOPD__3__cnt_position_1) 
                                            - (IData)(1U)));
                                }
                            }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__3__Vfuncout)) 
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
                                    = (0xffffffU & 
                                       VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__4__t_temp, 1U));
                                __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1 
                                    = ((IData)(1U) 
                                       + __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1);
                            }
                            __Vfunc_tb_Question2__DOT__Test_LOPD__4__Vfuncout 
                                = (0x1fU & (((IData)(0x18U) 
                                             - __Vfunc_tb_Question2__DOT__Test_LOPD__4__cnt_position_1) 
                                            - (IData)(1U)));
                        }
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
                        } else {
                            while ((1U & (~ (__Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                             >> 0x17U)))) {
                                __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp 
                                    = (0xffffffU & 
                                       VL_SHIFTL_III(24,24,32, __Vfunc_tb_Question2__DOT__Test_LOPD__5__t_temp, 1U));
                                __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1 
                                    = ((IData)(1U) 
                                       + __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1);
                            }
                            __Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout 
                                = (0x1fU & (((IData)(0x18U) 
                                             - __Vfunc_tb_Question2__DOT__Test_LOPD__5__cnt_position_1) 
                                            - (IData)(1U)));
                        }
                    }(), (IData)(__Vfunc_tb_Question2__DOT__Test_LOPD__5__Vfuncout)) 
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
        vlSelf->tb_Question2__DOT__test_pass = __Vtemp_247;
        vlSelf->tb_Question2__DOT__i_addr = (0xffffffU 
                                             & ((IData)(1U) 
                                                + vlSelf->tb_Question2__DOT__i_addr));
        tb_Question2__DOT____Vrepeat1 = (tb_Question2__DOT____Vrepeat1 
                                         - (IData)(1U));
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 
                                       103);
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
                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question2/tb_Question2.sv", 113, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}
