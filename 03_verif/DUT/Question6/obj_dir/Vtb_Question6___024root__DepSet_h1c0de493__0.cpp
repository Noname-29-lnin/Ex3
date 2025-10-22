// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question6.h for the primary calling header

#include "Vtb_Question6__pch.h"
#include "Vtb_Question6___024root.h"

VL_ATTR_COLD void Vtb_Question6___024root___eval_initial__TOP(Vtb_Question6___024root* vlSelf);
VlCoroutine Vtb_Question6___024root___eval_initial__TOP__Vtiming__0(Vtb_Question6___024root* vlSelf);
VlCoroutine Vtb_Question6___024root___eval_initial__TOP__Vtiming__1(Vtb_Question6___024root* vlSelf);

void Vtb_Question6___024root___eval_initial(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___eval_initial\n"); );
    // Body
    Vtb_Question6___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_Question6___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_Question6___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_Question6__DOT__i_clk__0 
        = vlSelf->tb_Question6__DOT__i_clk;
}

VL_INLINE_OPT VlCoroutine Vtb_Question6___024root___eval_initial__TOP__Vtiming__0(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_Question6__DOT__i_clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question6/tb_Question6.sv", 
                                           84);
        vlSelf->tb_Question6__DOT__i_clk = (1U & (~ (IData)(vlSelf->tb_Question6__DOT__i_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_Question6___024root___eval_initial__TOP__Vtiming__1(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ tb_Question6__DOT____Vrepeat2;
    tb_Question6__DOT____Vrepeat2 = 0;
    std::string __Vtask_tb_Question6__DOT__Display_Result__0__t_type;
    QData/*63:0*/ __Vtask_tb_Question6__DOT__Display_Result__0__t_arr;
    __Vtask_tb_Question6__DOT__Display_Result__0__t_arr = 0;
    VlUnpacked<CData/*7:0*/, 8> __Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr[__Vi0] = 0;
    }
    std::string __Vtask_tb_Question6__DOT__Display_Result__1__t_type;
    QData/*63:0*/ __Vtask_tb_Question6__DOT__Display_Result__1__t_arr;
    __Vtask_tb_Question6__DOT__Display_Result__1__t_arr = 0;
    VlUnpacked<CData/*7:0*/, 8> __Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr[__Vi0] = 0;
    }
    QData/*63:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__Vfuncout;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs = 0;
    QData/*63:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_i_data;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_i_data = 0;
    VlUnpacked<CData/*7:0*/, 8> __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr[__Vi0] = 0;
    }
    CData/*7:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp = 0;
    QData/*63:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__Vfuncout;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs = 0;
    QData/*63:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_i_data;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_i_data = 0;
    VlUnpacked<CData/*7:0*/, 8> __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr[__Vi0] = 0;
    }
    CData/*7:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp = 0;
    QData/*63:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__Vfuncout;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs = 0;
    QData/*63:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_i_data;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_i_data = 0;
    VlUnpacked<CData/*7:0*/, 8> __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr[__Vi0] = 0;
    }
    CData/*7:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp = 0;
    std::string __Vtask_tb_Question6__DOT__Display_Result__5__t_type;
    QData/*63:0*/ __Vtask_tb_Question6__DOT__Display_Result__5__t_arr;
    __Vtask_tb_Question6__DOT__Display_Result__5__t_arr = 0;
    VlUnpacked<CData/*7:0*/, 8> __Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr[__Vi0] = 0;
    }
    std::string __Vtask_tb_Question6__DOT__Display_Result__6__t_type;
    QData/*63:0*/ __Vtask_tb_Question6__DOT__Display_Result__6__t_arr;
    __Vtask_tb_Question6__DOT__Display_Result__6__t_arr = 0;
    VlUnpacked<CData/*7:0*/, 8> __Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr[__Vi0] = 0;
    }
    QData/*63:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__Vfuncout;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs = 0;
    QData/*63:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_i_data;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_i_data = 0;
    VlUnpacked<CData/*7:0*/, 8> __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr[__Vi0] = 0;
    }
    CData/*7:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp = 0;
    QData/*63:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__Vfuncout;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs = 0;
    QData/*63:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_i_data;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_i_data = 0;
    VlUnpacked<CData/*7:0*/, 8> __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr[__Vi0] = 0;
    }
    CData/*7:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp = 0;
    QData/*63:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__Vfuncout;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs = 0;
    QData/*63:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_i_data;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_i_data = 0;
    VlUnpacked<CData/*7:0*/, 8> __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr[__Vi0] = 0;
    }
    CData/*7:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp = 0;
    QData/*63:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__Vfuncout;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs = 0;
    QData/*63:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_i_data;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_i_data = 0;
    VlUnpacked<CData/*7:0*/, 8> __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr[__Vi0] = 0;
    }
    CData/*7:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp = 0;
    QData/*63:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__Vfuncout;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs = 0;
    QData/*63:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_i_data;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_i_data = 0;
    VlUnpacked<CData/*7:0*/, 8> __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr[__Vi0] = 0;
    }
    CData/*7:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp = 0;
    QData/*63:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__Vfuncout;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs = 0;
    QData/*63:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_i_data;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_i_data = 0;
    VlUnpacked<CData/*7:0*/, 8> __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr[__Vi0] = 0;
    }
    CData/*7:0*/ __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
    __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp = 0;
    IData/*31:0*/ __Vtemp_114;
    IData/*31:0*/ __Vtemp_284;
    IData/*31:0*/ __Vtemp_454;
    // Body
    vlSelf->tb_Question6__DOT__i_rst_n = 0U;
    vlSelf->tb_Question6__DOT__i_data = 0ULL;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question6/tb_Question6.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question6__DOT__i_rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question6/tb_Question6.sv", 
                                       100);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n===DESCENDING===\n\n",0);
    co_await vlSelf->__VtrigSched_hcd689571__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question6.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question6/tb_Question6.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question6/tb_Question6.sv", 
                                       105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question6__DOT__i_data = (QData)((IData)(
                                                        VL_RANDOM_I()));
    vlSelf->tb_Question6__DOT__i_data = 0ULL;
    VL_WRITEF_NX("\n\n",0);
    __Vtask_tb_Question6__DOT__Display_Result__0__t_arr 
        = vlSelf->tb_Question6__DOT__i_data;
    __Vtask_tb_Question6__DOT__Display_Result__0__t_type = 
        std::string{"Input"};
    __Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr[0U] 
        = (0xffU & (IData)(__Vtask_tb_Question6__DOT__Display_Result__0__t_arr));
    __Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr[1U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__0__t_arr 
                            >> 8U)));
    __Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr[2U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__0__t_arr 
                            >> 0x10U)));
    __Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr[3U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__0__t_arr 
                            >> 0x18U)));
    __Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr[4U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__0__t_arr 
                            >> 0x20U)));
    __Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr[5U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__0__t_arr 
                            >> 0x28U)));
    __Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr[6U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__0__t_arr 
                            >> 0x30U)));
    __Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr[7U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__0__t_arr 
                            >> 0x38U)));
    VL_WRITEF_NX("%@[          0] \t= %8x (%3#)\n%@[          1] \t= %8x (%3#)\n%@[          2] \t= %8x (%3#)\n%@[          3] \t= %8x (%3#)\n%@[          4] \t= %8x (%3#)\n%@[          5] \t= %8x (%3#)\n%@[          6] \t= %8x (%3#)\n%@[          7] \t= %8x (%3#)\n",0,
                 -1,&(__Vtask_tb_Question6__DOT__Display_Result__0__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr
                 [0U],8,__Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr
                 [0U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__0__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr
                 [1U],8,__Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr
                 [1U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__0__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr
                 [2U],8,__Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr
                 [2U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__0__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr
                 [3U],8,__Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr
                 [3U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__0__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr
                 [4U],8,__Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr
                 [4U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__0__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr
                 [5U],8,__Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr
                 [5U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__0__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr
                 [6U],8,__Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr
                 [6U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__0__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr
                 [7U],8,__Vtask_tb_Question6__DOT__Display_Result__0__t_t_arr
                 [7U]);
    co_await vlSelf->__VtrigSched_hcd689520__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question6.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question6/tb_Question6.sv", 
                                                       110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question6/tb_Question6.sv", 
                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n\n",0);
    __Vtask_tb_Question6__DOT__Display_Result__1__t_arr 
        = (((QData)((IData)(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare)
                              ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)
                              : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))) 
            << 0x38U) | (((QData)((IData)(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare)
                                            ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)
                                            : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))) 
                          << 0x30U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare)
                                                          ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)
                                                          : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                           ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)
                                                           : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                              ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)
                                                              : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)) 
                                                            << 0x18U) 
                                                           | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare)
                                                                 ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)
                                                                 : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                                               << 0x10U) 
                                                              | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare)
                                                                    ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)
                                                                    : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                                                  << 8U) 
                                                                 | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare)
                                                                     ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)
                                                                     : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0)))))))))));
    __Vtask_tb_Question6__DOT__Display_Result__1__t_type = 
        std::string{"Output"};
    __Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr[0U] 
        = (0xffU & (IData)(__Vtask_tb_Question6__DOT__Display_Result__1__t_arr));
    __Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr[1U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__1__t_arr 
                            >> 8U)));
    __Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr[2U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__1__t_arr 
                            >> 0x10U)));
    __Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr[3U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__1__t_arr 
                            >> 0x18U)));
    __Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr[4U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__1__t_arr 
                            >> 0x20U)));
    __Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr[5U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__1__t_arr 
                            >> 0x28U)));
    __Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr[6U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__1__t_arr 
                            >> 0x30U)));
    __Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr[7U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__1__t_arr 
                            >> 0x38U)));
    VL_WRITEF_NX("%@[          0] \t= %8x (%3#)\n%@[          1] \t= %8x (%3#)\n%@[          2] \t= %8x (%3#)\n%@[          3] \t= %8x (%3#)\n%@[          4] \t= %8x (%3#)\n%@[          5] \t= %8x (%3#)\n%@[          6] \t= %8x (%3#)\n%@[          7] \t= %8x (%3#)\n[TIME: %5t] [Zero] i_data = %x (%20#) \t| o_data = %x (%20#)\n",0,
                 -1,&(__Vtask_tb_Question6__DOT__Display_Result__1__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr
                 [0U],8,__Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr
                 [0U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__1__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr
                 [1U],8,__Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr
                 [1U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__1__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr
                 [2U],8,__Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr
                 [2U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__1__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr
                 [3U],8,__Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr
                 [3U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__1__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr
                 [4U],8,__Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr
                 [4U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__1__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr
                 [5U],8,__Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr
                 [5U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__1__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr
                 [6U],8,__Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr
                 [6U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__1__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr
                 [7U],8,__Vtask_tb_Question6__DOT__Display_Result__1__t_t_arr
                 [7U],64,VL_TIME_UNITED_Q(1000),-9,
                 64,vlSelf->tb_Question6__DOT__i_data,
                 64,vlSelf->tb_Question6__DOT__i_data,
                 64,(((QData)((IData)(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare)
                                        ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)
                                        : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))) 
                      << 0x38U) | (((QData)((IData)(
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare)
                                                      ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)
                                                      : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))) 
                                    << 0x30U) | (((QData)((IData)(
                                                                  ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare)
                                                                    ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)
                                                                    : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                       ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)
                                                                       : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                          ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)
                                                                          : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)) 
                                                                        << 0x18U) 
                                                                       | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare)
                                                                             ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)
                                                                             : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                                                           << 0x10U) 
                                                                          | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare)
                                                                                ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)
                                                                                : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                                                              << 8U) 
                                                                             | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare)
                                                                                 ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)
                                                                                 : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))))))))),
                 64,(((QData)((IData)(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare)
                                        ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)
                                        : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))) 
                      << 0x38U) | (((QData)((IData)(
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare)
                                                      ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)
                                                      : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))) 
                                    << 0x30U) | (((QData)((IData)(
                                                                  ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare)
                                                                    ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)
                                                                    : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                       ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)
                                                                       : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                          ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)
                                                                          : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)) 
                                                                        << 0x18U) 
                                                                       | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare)
                                                                             ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)
                                                                             : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                                                           << 0x10U) 
                                                                          | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare)
                                                                                ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)
                                                                                : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                                                              << 8U) 
                                                                             | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare)
                                                                                 ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)
                                                                                 : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))))))))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_i_data 
                                = vlSelf->tb_Question6__DOT__i_data;
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs = 1U;
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [0U] = (0xffU & (IData)(__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_i_data));
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_i_data 
                                                >> 8U)));
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_i_data 
                                                >> 0x10U)));
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [3U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_i_data 
                                                >> 0x18U)));
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [4U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_i_data 
                                                >> 0x20U)));
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [5U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_i_data 
                                                >> 0x28U)));
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [6U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_i_data 
                                                >> 0x30U)));
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [7U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_i_data 
                                                >> 0x38U)));
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [1U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [0U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [2U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [3U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [3U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [4U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [4U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [4U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [5U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [4U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [5U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [5U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [5U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [5U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [6U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [5U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [6U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [5U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [6U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [5U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [6U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [6U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [7U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [6U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [7U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [7U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [6U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [7U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [6U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [7U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [7U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [1U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [0U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [2U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [3U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [3U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [4U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [4U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [4U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [5U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [4U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [5U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [5U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [5U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [5U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [6U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [5U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [6U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [5U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [6U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [5U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [6U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [1U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [0U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [2U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [3U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [3U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [4U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [4U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [4U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [5U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [4U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [5U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [5U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [5U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [1U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [0U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [2U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [3U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [3U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [4U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [4U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [4U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [1U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [0U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [2U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [3U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [3U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [1U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [0U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [2U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                     [1U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [0U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                        [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__temp;
                            }
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__Vfuncout 
                                = ((0xffffffffff000000ULL 
                                    & __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__Vfuncout) 
                                   | (IData)((IData)(
                                                     ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                                       [2U] 
                                                       << 0x10U) 
                                                      | ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                                          [1U] 
                                                          << 8U) 
                                                         | __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                                         [0U])))));
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__Vfuncout 
                                = ((0xffff000000ffffffULL 
                                    & __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__Vfuncout) 
                                   | ((QData)((IData)(
                                                      ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                                        [5U] 
                                                        << 0x10U) 
                                                       | ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                                           [4U] 
                                                           << 8U) 
                                                          | __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                                          [3U])))) 
                                      << 0x18U));
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__Vfuncout 
                                = ((0xffffffffffffULL 
                                    & __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__Vfuncout) 
                                   | ((QData)((IData)(
                                                      ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                                        [7U] 
                                                        << 8U) 
                                                       | __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__arr
                                                       [6U]))) 
                                      << 0x30U));
                        }(), __Vfunc_tb_Question6__DOT__f_ARR_sorted__2__Vfuncout) 
                      == (((QData)((IData)(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare)
                                             ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)
                                             : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))) 
                           << 0x38U) | (((QData)((IData)(
                                                         ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare)
                                                           ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)
                                                           : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare)
                                                              ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)
                                                              : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                 ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)
                                                                 : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                    ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)
                                                                    : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)) 
                                                                  << 0x18U) 
                                                                 | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare)
                                                                       ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)
                                                                       : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                                                     << 0x10U) 
                                                                    | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare)
                                                                          ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)
                                                                          : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                                                        << 8U) 
                                                                       | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare)
                                                                           ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)
                                                                           : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))))))))))
                      ? 0x50415353U : 0x4641494cU),
                 64,([&]() {
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_i_data 
                        = vlSelf->tb_Question6__DOT__i_data;
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs = 1U;
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [0U] = (0xffU & (IData)(__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_i_data));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_i_data 
                                              >> 8U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_i_data 
                                              >> 0x10U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [3U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_i_data 
                                              >> 0x18U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [4U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_i_data 
                                              >> 0x20U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [5U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_i_data 
                                              >> 0x28U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [6U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_i_data 
                                              >> 0x30U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [7U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_i_data 
                                              >> 0x38U)));
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [3U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [4U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [5U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [5U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [5U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [5U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [6U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [6U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [5U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [6U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [5U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [6U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [6U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [7U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [6U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [7U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [7U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [6U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [7U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [6U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [7U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [7U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [3U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [4U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [5U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [5U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [5U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [5U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [6U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [6U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [5U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [6U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [5U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [6U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [3U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [4U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [5U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [5U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [5U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [3U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [4U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [3U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__temp;
                    }
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__Vfuncout 
                        = ((0xffffffffff000000ULL & __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__Vfuncout) 
                           | (IData)((IData)(((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                               [2U] 
                                               << 0x10U) 
                                              | ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                                  [1U] 
                                                  << 8U) 
                                                 | __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                                 [0U])))));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__Vfuncout 
                        = ((0xffff000000ffffffULL & __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__Vfuncout) 
                           | ((QData)((IData)(((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                                [5U] 
                                                << 0x10U) 
                                               | ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                                   [4U] 
                                                   << 8U) 
                                                  | __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                                  [3U])))) 
                              << 0x18U));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__Vfuncout 
                        = ((0xffffffffffffULL & __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__Vfuncout) 
                           | ((QData)((IData)(((__Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                                [7U] 
                                                << 8U) 
                                               | __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__arr
                                               [6U]))) 
                              << 0x30U));
                }(), __Vfunc_tb_Question6__DOT__f_ARR_sorted__3__Vfuncout),
                 64,(((QData)((IData)(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare)
                                        ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)
                                        : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))) 
                      << 0x38U) | (((QData)((IData)(
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare)
                                                      ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)
                                                      : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))) 
                                    << 0x30U) | (((QData)((IData)(
                                                                  ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare)
                                                                    ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)
                                                                    : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                       ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)
                                                                       : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                          ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)
                                                                          : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)) 
                                                                        << 0x18U) 
                                                                       | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare)
                                                                             ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)
                                                                             : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                                                           << 0x10U) 
                                                                          | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare)
                                                                                ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)
                                                                                : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                                                              << 8U) 
                                                                             | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare)
                                                                                 ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)
                                                                                 : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))))))))));
    vlSelf->tb_Question6__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question6__DOT__test_count);
    __Vtemp_114 = ((([&]() {
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_i_data 
                        = vlSelf->tb_Question6__DOT__i_data;
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs = 1U;
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [0U] = (0xffU & (IData)(__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_i_data));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_i_data 
                                              >> 8U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_i_data 
                                              >> 0x10U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [3U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_i_data 
                                              >> 0x18U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [4U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_i_data 
                                              >> 0x20U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [5U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_i_data 
                                              >> 0x28U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [6U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_i_data 
                                              >> 0x30U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [7U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_i_data 
                                              >> 0x38U)));
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [3U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [4U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [5U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [5U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [5U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [5U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [6U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [6U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [5U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [6U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [5U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [6U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [6U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [7U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [6U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [7U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [7U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [6U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [7U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [6U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [7U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [7U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [3U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [4U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [5U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [5U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [5U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [5U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [6U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [6U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [5U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [6U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [5U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [6U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [3U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [4U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [5U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [5U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [5U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [3U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [4U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [3U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__temp;
                    }
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__Vfuncout 
                        = ((0xffffffffff000000ULL & __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__Vfuncout) 
                           | (IData)((IData)(((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                               [2U] 
                                               << 0x10U) 
                                              | ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                                  [1U] 
                                                  << 8U) 
                                                 | __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                                 [0U])))));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__Vfuncout 
                        = ((0xffff000000ffffffULL & __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__Vfuncout) 
                           | ((QData)((IData)(((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                                [5U] 
                                                << 0x10U) 
                                               | ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                                   [4U] 
                                                   << 8U) 
                                                  | __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                                  [3U])))) 
                              << 0x18U));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__Vfuncout 
                        = ((0xffffffffffffULL & __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__Vfuncout) 
                           | ((QData)((IData)(((__Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                                [7U] 
                                                << 8U) 
                                               | __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__arr
                                               [6U]))) 
                              << 0x30U));
                }(), __Vfunc_tb_Question6__DOT__f_ARR_sorted__4__Vfuncout) 
                    == (((QData)((IData)(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare)
                                           ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)
                                           : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))) 
                         << 0x38U) | (((QData)((IData)(
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare)
                                                         ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)
                                                         : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))) 
                                       << 0x30U) | 
                                      (((QData)((IData)(
                                                        ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare)
                                                          ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)
                                                          : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                           ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)
                                                           : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                              ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)
                                                              : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)) 
                                                            << 0x18U) 
                                                           | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare)
                                                                 ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)
                                                                 : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                                               << 0x10U) 
                                                              | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare)
                                                                    ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)
                                                                    : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                                                  << 8U) 
                                                                 | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare)
                                                                     ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)
                                                                     : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))))))))))
                    ? ((IData)(1U) + vlSelf->tb_Question6__DOT__test_pass)
                    : vlSelf->tb_Question6__DOT__test_pass);
    vlSelf->tb_Question6__DOT__test_pass = __Vtemp_114;
    co_await vlSelf->__VtrigSched_hcd689571__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Question6.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question6/tb_Question6.sv", 
                                                       121);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question6/tb_Question6.sv", 
                                       122);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Question6__DOT__i_data = (QData)((IData)(
                                                        VL_RANDOM_I()));
    VL_WRITEF_NX("\n\n",0);
    __Vtask_tb_Question6__DOT__Display_Result__5__t_arr 
        = vlSelf->tb_Question6__DOT__i_data;
    __Vtask_tb_Question6__DOT__Display_Result__5__t_type = 
        std::string{"Input"};
    __Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr[0U] 
        = (0xffU & (IData)(__Vtask_tb_Question6__DOT__Display_Result__5__t_arr));
    __Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr[1U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__5__t_arr 
                            >> 8U)));
    __Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr[2U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__5__t_arr 
                            >> 0x10U)));
    __Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr[3U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__5__t_arr 
                            >> 0x18U)));
    __Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr[4U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__5__t_arr 
                            >> 0x20U)));
    __Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr[5U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__5__t_arr 
                            >> 0x28U)));
    __Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr[6U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__5__t_arr 
                            >> 0x30U)));
    __Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr[7U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__5__t_arr 
                            >> 0x38U)));
    VL_WRITEF_NX("%@[          0] \t= %8x (%3#)\n%@[          1] \t= %8x (%3#)\n%@[          2] \t= %8x (%3#)\n%@[          3] \t= %8x (%3#)\n%@[          4] \t= %8x (%3#)\n%@[          5] \t= %8x (%3#)\n%@[          6] \t= %8x (%3#)\n%@[          7] \t= %8x (%3#)\n",0,
                 -1,&(__Vtask_tb_Question6__DOT__Display_Result__5__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr
                 [0U],8,__Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr
                 [0U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__5__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr
                 [1U],8,__Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr
                 [1U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__5__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr
                 [2U],8,__Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr
                 [2U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__5__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr
                 [3U],8,__Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr
                 [3U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__5__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr
                 [4U],8,__Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr
                 [4U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__5__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr
                 [5U],8,__Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr
                 [5U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__5__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr
                 [6U],8,__Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr
                 [6U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__5__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr
                 [7U],8,__Vtask_tb_Question6__DOT__Display_Result__5__t_t_arr
                 [7U]);
    co_await vlSelf->__VtrigSched_hcd689520__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_Question6.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question6/tb_Question6.sv", 
                                                       126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question6/tb_Question6.sv", 
                                       127);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n\n",0);
    __Vtask_tb_Question6__DOT__Display_Result__6__t_arr 
        = (((QData)((IData)(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare)
                              ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)
                              : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))) 
            << 0x38U) | (((QData)((IData)(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare)
                                            ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)
                                            : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))) 
                          << 0x30U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare)
                                                          ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)
                                                          : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                           ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)
                                                           : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                              ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)
                                                              : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)) 
                                                            << 0x18U) 
                                                           | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare)
                                                                 ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)
                                                                 : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                                               << 0x10U) 
                                                              | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare)
                                                                    ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)
                                                                    : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                                                  << 8U) 
                                                                 | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare)
                                                                     ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)
                                                                     : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0)))))))))));
    __Vtask_tb_Question6__DOT__Display_Result__6__t_type = 
        std::string{"Output"};
    __Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr[0U] 
        = (0xffU & (IData)(__Vtask_tb_Question6__DOT__Display_Result__6__t_arr));
    __Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr[1U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__6__t_arr 
                            >> 8U)));
    __Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr[2U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__6__t_arr 
                            >> 0x10U)));
    __Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr[3U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__6__t_arr 
                            >> 0x18U)));
    __Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr[4U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__6__t_arr 
                            >> 0x20U)));
    __Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr[5U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__6__t_arr 
                            >> 0x28U)));
    __Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr[6U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__6__t_arr 
                            >> 0x30U)));
    __Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr[7U] 
        = (0xffU & (IData)((__Vtask_tb_Question6__DOT__Display_Result__6__t_arr 
                            >> 0x38U)));
    VL_WRITEF_NX("%@[          0] \t= %8x (%3#)\n%@[          1] \t= %8x (%3#)\n%@[          2] \t= %8x (%3#)\n%@[          3] \t= %8x (%3#)\n%@[          4] \t= %8x (%3#)\n%@[          5] \t= %8x (%3#)\n%@[          6] \t= %8x (%3#)\n%@[          7] \t= %8x (%3#)\n[TIME: %5t] [Random] i_data = %x (%20#) \t| o_data = %x (%20#)\n",0,
                 -1,&(__Vtask_tb_Question6__DOT__Display_Result__6__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr
                 [0U],8,__Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr
                 [0U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__6__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr
                 [1U],8,__Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr
                 [1U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__6__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr
                 [2U],8,__Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr
                 [2U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__6__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr
                 [3U],8,__Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr
                 [3U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__6__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr
                 [4U],8,__Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr
                 [4U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__6__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr
                 [5U],8,__Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr
                 [5U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__6__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr
                 [6U],8,__Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr
                 [6U],-1,&(__Vtask_tb_Question6__DOT__Display_Result__6__t_type),
                 8,__Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr
                 [7U],8,__Vtask_tb_Question6__DOT__Display_Result__6__t_t_arr
                 [7U],64,VL_TIME_UNITED_Q(1000),-9,
                 64,vlSelf->tb_Question6__DOT__i_data,
                 64,vlSelf->tb_Question6__DOT__i_data,
                 64,(((QData)((IData)(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare)
                                        ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)
                                        : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))) 
                      << 0x38U) | (((QData)((IData)(
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare)
                                                      ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)
                                                      : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))) 
                                    << 0x30U) | (((QData)((IData)(
                                                                  ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare)
                                                                    ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)
                                                                    : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                       ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)
                                                                       : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                          ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)
                                                                          : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)) 
                                                                        << 0x18U) 
                                                                       | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare)
                                                                             ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)
                                                                             : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                                                           << 0x10U) 
                                                                          | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare)
                                                                                ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)
                                                                                : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                                                              << 8U) 
                                                                             | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare)
                                                                                 ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)
                                                                                 : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))))))))),
                 64,(((QData)((IData)(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare)
                                        ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)
                                        : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))) 
                      << 0x38U) | (((QData)((IData)(
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare)
                                                      ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)
                                                      : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))) 
                                    << 0x30U) | (((QData)((IData)(
                                                                  ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare)
                                                                    ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)
                                                                    : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                       ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)
                                                                       : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                          ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)
                                                                          : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)) 
                                                                        << 0x18U) 
                                                                       | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare)
                                                                             ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)
                                                                             : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                                                           << 0x10U) 
                                                                          | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare)
                                                                                ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)
                                                                                : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                                                              << 8U) 
                                                                             | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare)
                                                                                 ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)
                                                                                 : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))))))))));
    VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                 32,((([&]() {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_i_data 
                                = vlSelf->tb_Question6__DOT__i_data;
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs = 1U;
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [0U] = (0xffU & (IData)(__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_i_data));
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_i_data 
                                                >> 8U)));
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_i_data 
                                                >> 0x10U)));
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [3U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_i_data 
                                                >> 0x18U)));
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [4U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_i_data 
                                                >> 0x20U)));
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [5U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_i_data 
                                                >> 0x28U)));
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [6U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_i_data 
                                                >> 0x30U)));
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [7U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_i_data 
                                                >> 0x38U)));
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [1U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [0U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [2U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [3U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [3U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [4U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [4U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [4U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [5U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [4U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [5U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [5U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [5U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [5U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [6U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [5U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [6U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [5U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [6U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [5U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [6U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [6U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [7U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [6U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [7U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [7U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [6U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [7U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [6U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [7U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [7U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [1U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [0U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [2U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [3U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [3U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [4U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [4U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [4U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [5U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [4U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [5U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [5U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [5U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [5U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [6U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [5U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [6U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [5U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [6U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [5U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [6U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [1U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [0U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [2U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [3U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [3U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [4U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [4U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [4U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [5U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [4U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [5U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [5U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [5U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [1U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [0U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [2U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [3U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [3U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [4U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [4U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [4U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [1U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [0U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [2U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [3U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [3U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [1U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [0U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [2U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__f_is_acs)) {
                                if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                     [1U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [0U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                                }
                            } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                        [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                       [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__temp;
                            }
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__Vfuncout 
                                = ((0xffffffffff000000ULL 
                                    & __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__Vfuncout) 
                                   | (IData)((IData)(
                                                     ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                                       [2U] 
                                                       << 0x10U) 
                                                      | ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                                          [1U] 
                                                          << 8U) 
                                                         | __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                                         [0U])))));
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__Vfuncout 
                                = ((0xffff000000ffffffULL 
                                    & __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__Vfuncout) 
                                   | ((QData)((IData)(
                                                      ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                                        [5U] 
                                                        << 0x10U) 
                                                       | ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                                           [4U] 
                                                           << 8U) 
                                                          | __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                                          [3U])))) 
                                      << 0x18U));
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__Vfuncout 
                                = ((0xffffffffffffULL 
                                    & __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__Vfuncout) 
                                   | ((QData)((IData)(
                                                      ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                                        [7U] 
                                                        << 8U) 
                                                       | __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__arr
                                                       [6U]))) 
                                      << 0x30U));
                        }(), __Vfunc_tb_Question6__DOT__f_ARR_sorted__7__Vfuncout) 
                      == (((QData)((IData)(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare)
                                             ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)
                                             : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))) 
                           << 0x38U) | (((QData)((IData)(
                                                         ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare)
                                                           ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)
                                                           : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare)
                                                              ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)
                                                              : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                 ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)
                                                                 : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                    ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)
                                                                    : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)) 
                                                                  << 0x18U) 
                                                                 | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare)
                                                                       ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)
                                                                       : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                                                     << 0x10U) 
                                                                    | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare)
                                                                          ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)
                                                                          : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                                                        << 8U) 
                                                                       | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare)
                                                                           ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)
                                                                           : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))))))))))
                      ? 0x50415353U : 0x4641494cU),
                 64,([&]() {
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_i_data 
                        = vlSelf->tb_Question6__DOT__i_data;
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs = 1U;
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [0U] = (0xffU & (IData)(__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_i_data));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_i_data 
                                              >> 8U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_i_data 
                                              >> 0x10U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [3U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_i_data 
                                              >> 0x18U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [4U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_i_data 
                                              >> 0x20U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [5U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_i_data 
                                              >> 0x28U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [6U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_i_data 
                                              >> 0x30U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [7U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_i_data 
                                              >> 0x38U)));
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [3U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [4U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [5U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [5U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [5U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [5U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [6U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [6U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [5U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [6U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [5U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [6U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [6U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [7U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [6U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [7U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [7U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [6U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [7U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [6U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [7U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [7U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [3U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [4U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [5U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [5U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [5U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [5U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [6U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [6U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [5U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [6U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [5U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [6U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [3U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [4U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [5U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [5U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [5U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [3U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [4U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [3U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__temp;
                    }
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__Vfuncout 
                        = ((0xffffffffff000000ULL & __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__Vfuncout) 
                           | (IData)((IData)(((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                               [2U] 
                                               << 0x10U) 
                                              | ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                                  [1U] 
                                                  << 8U) 
                                                 | __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                                 [0U])))));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__Vfuncout 
                        = ((0xffff000000ffffffULL & __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__Vfuncout) 
                           | ((QData)((IData)(((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                                [5U] 
                                                << 0x10U) 
                                               | ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                                   [4U] 
                                                   << 8U) 
                                                  | __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                                  [3U])))) 
                              << 0x18U));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__Vfuncout 
                        = ((0xffffffffffffULL & __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__Vfuncout) 
                           | ((QData)((IData)(((__Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                                [7U] 
                                                << 8U) 
                                               | __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__arr
                                               [6U]))) 
                              << 0x30U));
                }(), __Vfunc_tb_Question6__DOT__f_ARR_sorted__8__Vfuncout),
                 64,(((QData)((IData)(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare)
                                        ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)
                                        : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))) 
                      << 0x38U) | (((QData)((IData)(
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare)
                                                      ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)
                                                      : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))) 
                                    << 0x30U) | (((QData)((IData)(
                                                                  ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare)
                                                                    ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)
                                                                    : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                       ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)
                                                                       : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                          ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)
                                                                          : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)) 
                                                                        << 0x18U) 
                                                                       | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare)
                                                                             ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)
                                                                             : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                                                           << 0x10U) 
                                                                          | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare)
                                                                                ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)
                                                                                : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                                                              << 8U) 
                                                                             | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare)
                                                                                 ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)
                                                                                 : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))))))))));
    vlSelf->tb_Question6__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question6__DOT__test_count);
    __Vtemp_284 = ((([&]() {
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_i_data 
                        = vlSelf->tb_Question6__DOT__i_data;
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs = 1U;
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [0U] = (0xffU & (IData)(__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_i_data));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_i_data 
                                              >> 8U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_i_data 
                                              >> 0x10U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [3U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_i_data 
                                              >> 0x18U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [4U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_i_data 
                                              >> 0x20U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [5U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_i_data 
                                              >> 0x28U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [6U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_i_data 
                                              >> 0x30U)));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [7U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_i_data 
                                              >> 0x38U)));
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [3U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [4U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [5U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [5U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [5U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [5U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [6U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [6U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [5U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [6U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [5U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [6U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [6U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [7U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [6U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [7U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [7U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [6U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [7U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [6U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [7U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [7U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [3U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [4U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [5U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [5U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [5U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [5U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [6U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [6U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [5U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [6U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [5U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [6U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [3U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [4U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [5U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [5U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [5U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [3U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [4U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [4U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [3U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [3U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [2U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [2U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__f_is_acs)) {
                        if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                             [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                        }
                    } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                [1U])) {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp 
                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [0U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                            [1U];
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                     [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__temp;
                    }
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__Vfuncout 
                        = ((0xffffffffff000000ULL & __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__Vfuncout) 
                           | (IData)((IData)(((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                               [2U] 
                                               << 0x10U) 
                                              | ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                                  [1U] 
                                                  << 8U) 
                                                 | __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                                 [0U])))));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__Vfuncout 
                        = ((0xffff000000ffffffULL & __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__Vfuncout) 
                           | ((QData)((IData)(((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                                [5U] 
                                                << 0x10U) 
                                               | ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                                   [4U] 
                                                   << 8U) 
                                                  | __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                                  [3U])))) 
                              << 0x18U));
                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__Vfuncout 
                        = ((0xffffffffffffULL & __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__Vfuncout) 
                           | ((QData)((IData)(((__Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                                [7U] 
                                                << 8U) 
                                               | __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__arr
                                               [6U]))) 
                              << 0x30U));
                }(), __Vfunc_tb_Question6__DOT__f_ARR_sorted__9__Vfuncout) 
                    == (((QData)((IData)(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare)
                                           ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)
                                           : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))) 
                         << 0x38U) | (((QData)((IData)(
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare)
                                                         ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)
                                                         : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))) 
                                       << 0x30U) | 
                                      (((QData)((IData)(
                                                        ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare)
                                                          ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)
                                                          : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                           ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)
                                                           : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                              ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)
                                                              : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)) 
                                                            << 0x18U) 
                                                           | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare)
                                                                 ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)
                                                                 : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                                               << 0x10U) 
                                                              | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare)
                                                                    ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)
                                                                    : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                                                  << 8U) 
                                                                 | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare)
                                                                     ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)
                                                                     : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))))))))))
                    ? ((IData)(1U) + vlSelf->tb_Question6__DOT__test_pass)
                    : vlSelf->tb_Question6__DOT__test_pass);
    vlSelf->tb_Question6__DOT__test_pass = __Vtemp_284;
    tb_Question6__DOT____Vrepeat2 = 0x64U;
    while (VL_LTS_III(32, 0U, tb_Question6__DOT____Vrepeat2)) {
        co_await vlSelf->__VtrigSched_hcd689571__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_Question6.i_clk)", 
                                                           "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question6/tb_Question6.sv", 
                                                           137);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question6/tb_Question6.sv", 
                                           138);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_Question6__DOT__i_data = VL_EXTEND_QI(64,32, 
                                                         VL_URANDOM_RANGE_I(0U, 0xffffffffU));
        co_await vlSelf->__VtrigSched_hcd689520__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_Question6.i_clk)", 
                                                           "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question6/tb_Question6.sv", 
                                                           142);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question6/tb_Question6.sv", 
                                           143);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VL_WRITEF_NX("[TIME: %5t] [Random] i_data = %x (%20#) \t| o_data = %x (%20#)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,64,
                     vlSelf->tb_Question6__DOT__i_data,
                     64,vlSelf->tb_Question6__DOT__i_data,
                     64,(((QData)((IData)(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare)
                                            ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)
                                            : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))) 
                          << 0x38U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare)
                                                          ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)
                                                          : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))) 
                                        << 0x30U) | 
                                       (((QData)((IData)(
                                                         ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare)
                                                           ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)
                                                           : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))) 
                                         << 0x28U) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                              ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)
                                                              : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                 ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)
                                                                 : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)) 
                                                               << 0x18U) 
                                                              | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare)
                                                                    ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)
                                                                    : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                                                  << 0x10U) 
                                                                 | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare)
                                                                       ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)
                                                                       : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                                                     << 8U) 
                                                                    | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare)
                                                                        ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)
                                                                        : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))))))))),
                     64,(((QData)((IData)(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare)
                                            ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)
                                            : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))) 
                          << 0x38U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare)
                                                          ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)
                                                          : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))) 
                                        << 0x30U) | 
                                       (((QData)((IData)(
                                                         ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare)
                                                           ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)
                                                           : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))) 
                                         << 0x28U) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                              ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)
                                                              : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                 ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)
                                                                 : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)) 
                                                               << 0x18U) 
                                                              | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare)
                                                                    ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)
                                                                    : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                                                  << 0x10U) 
                                                                 | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare)
                                                                       ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)
                                                                       : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                                                     << 8U) 
                                                                    | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare)
                                                                        ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)
                                                                        : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))))))))));
        VL_WRITEF_NX("=> %4s: Expect: %8x, DUT: %8x \n",0,
                     32,((([&]() {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_i_data 
                                    = vlSelf->tb_Question6__DOT__i_data;
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs = 1U;
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [0U] = (0xffU & (IData)(__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_i_data));
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = (0xffU & (IData)(
                                                   (__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_i_data 
                                                    >> 8U)));
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = (0xffU & (IData)(
                                                   (__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_i_data 
                                                    >> 0x10U)));
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [3U] = (0xffU & (IData)(
                                                   (__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_i_data 
                                                    >> 0x18U)));
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [4U] = (0xffU & (IData)(
                                                   (__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_i_data 
                                                    >> 0x20U)));
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [5U] = (0xffU & (IData)(
                                                   (__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_i_data 
                                                    >> 0x28U)));
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [6U] = (0xffU & (IData)(
                                                   (__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_i_data 
                                                    >> 0x30U)));
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [7U] = (0xffU & (IData)(
                                                   (__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_i_data 
                                                    >> 0x38U)));
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [1U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [0U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [0U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [0U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [2U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [2U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [2U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [3U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [2U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [3U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [2U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [3U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [4U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [3U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [4U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [3U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [4U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [4U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [5U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [4U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [5U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [4U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [5U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [4U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [5U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [5U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [6U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [5U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [6U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [5U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [6U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [5U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [6U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [6U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [7U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [6U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [7U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [7U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [6U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [7U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [6U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [7U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [7U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [1U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [0U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [0U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [0U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [2U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [2U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [2U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [3U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [2U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [3U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [2U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [3U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [4U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [3U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [4U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [3U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [4U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [4U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [5U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [4U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [5U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [4U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [5U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [4U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [5U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [5U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [6U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [5U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [6U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [5U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [6U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [5U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [6U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [1U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [0U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [0U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [0U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [2U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [2U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [2U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [3U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [2U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [3U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [2U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [3U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [4U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [3U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [4U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [3U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [4U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [4U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [5U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [4U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [5U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [4U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [5U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [4U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [5U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [1U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [0U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [0U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [0U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [2U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [2U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [2U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [3U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [2U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [3U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [2U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [3U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [4U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [3U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [4U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [3U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [4U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [4U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [1U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [0U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [0U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [0U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [2U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [2U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [2U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [3U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [2U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [3U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [2U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [3U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [3U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [1U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [0U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [0U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [0U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [2U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [2U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [2U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [2U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__f_is_acs)) {
                                    if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                         [1U])) {
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                            = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [0U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U];
                                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                    }
                                } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [0U] > 
                                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                            [1U])) {
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp 
                                        = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [0U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                        [1U];
                                    __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                           [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__temp;
                                }
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__Vfuncout 
                                    = ((0xffffffffff000000ULL 
                                        & __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__Vfuncout) 
                                       | (IData)((IData)(
                                                         ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                                           [2U] 
                                                           << 0x10U) 
                                                          | ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                                              [1U] 
                                                              << 8U) 
                                                             | __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                                             [0U])))));
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__Vfuncout 
                                    = ((0xffff000000ffffffULL 
                                        & __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__Vfuncout) 
                                       | ((QData)((IData)(
                                                          ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                                            [5U] 
                                                            << 0x10U) 
                                                           | ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                                               [4U] 
                                                               << 8U) 
                                                              | __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                                              [3U])))) 
                                          << 0x18U));
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__Vfuncout 
                                    = ((0xffffffffffffULL 
                                        & __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__Vfuncout) 
                                       | ((QData)((IData)(
                                                          ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                                            [7U] 
                                                            << 8U) 
                                                           | __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__arr
                                                           [6U]))) 
                                          << 0x30U));
                            }(), __Vfunc_tb_Question6__DOT__f_ARR_sorted__10__Vfuncout) 
                          == (((QData)((IData)(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare)
                                                 ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)
                                                 : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))) 
                               << 0x38U) | (((QData)((IData)(
                                                             ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare)
                                                               ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)
                                                               : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare)
                                                                  ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)
                                                                  : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                     ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)
                                                                     : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                        ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)
                                                                        : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)) 
                                                                      << 0x18U) 
                                                                     | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare)
                                                                           ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)
                                                                           : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                                                         << 0x10U) 
                                                                        | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare)
                                                                              ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)
                                                                              : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                                                            << 8U) 
                                                                           | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare)
                                                                               ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)
                                                                               : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))))))))))
                          ? 0x50415353U : 0x4641494cU),
                     64,([&]() {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_i_data 
                            = vlSelf->tb_Question6__DOT__i_data;
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs = 1U;
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [0U] = (0xffU & (IData)(__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_i_data));
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_i_data 
                                                  >> 8U)));
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_i_data 
                                                  >> 0x10U)));
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [3U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_i_data 
                                                  >> 0x18U)));
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [4U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_i_data 
                                                  >> 0x20U)));
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [5U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_i_data 
                                                  >> 0x28U)));
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [6U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_i_data 
                                                  >> 0x30U)));
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [7U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_i_data 
                                                  >> 0x38U)));
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [3U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [4U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [5U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [5U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [5U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [5U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [6U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [5U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [6U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [5U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [6U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [6U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [6U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [7U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [6U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [7U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [7U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [6U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [7U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [6U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [7U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [7U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [3U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [4U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [5U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [5U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [5U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [5U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [6U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [5U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [6U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [5U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [6U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [6U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [3U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [4U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [5U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [5U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [5U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [3U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [4U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [3U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                 [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                    [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__temp;
                        }
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__Vfuncout 
                            = ((0xffffffffff000000ULL 
                                & __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__Vfuncout) 
                               | (IData)((IData)(((
                                                   __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                                      [1U] 
                                                      << 8U) 
                                                     | __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                                     [0U])))));
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__Vfuncout 
                            = ((0xffff000000ffffffULL 
                                & __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__Vfuncout) 
                               | ((QData)((IData)((
                                                   (__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                                    [5U] 
                                                    << 0x10U) 
                                                   | ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                                       [4U] 
                                                       << 8U) 
                                                      | __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                                      [3U])))) 
                                  << 0x18U));
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__Vfuncout 
                            = ((0xffffffffffffULL & __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__Vfuncout) 
                               | ((QData)((IData)((
                                                   (__Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                                    [7U] 
                                                    << 8U) 
                                                   | __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__arr
                                                   [6U]))) 
                                  << 0x30U));
                    }(), __Vfunc_tb_Question6__DOT__f_ARR_sorted__11__Vfuncout),
                     64,(((QData)((IData)(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare)
                                            ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)
                                            : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))) 
                          << 0x38U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare)
                                                          ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)
                                                          : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))) 
                                        << 0x30U) | 
                                       (((QData)((IData)(
                                                         ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare)
                                                           ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)
                                                           : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))) 
                                         << 0x28U) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                              ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)
                                                              : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                 ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)
                                                                 : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)) 
                                                               << 0x18U) 
                                                              | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare)
                                                                    ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)
                                                                    : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                                                  << 0x10U) 
                                                                 | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare)
                                                                       ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)
                                                                       : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                                                     << 8U) 
                                                                    | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare)
                                                                        ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)
                                                                        : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))))))))));
        vlSelf->tb_Question6__DOT__test_count = ((IData)(1U) 
                                                 + vlSelf->tb_Question6__DOT__test_count);
        __Vtemp_454 = ((([&]() {
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_i_data 
                            = vlSelf->tb_Question6__DOT__i_data;
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs = 1U;
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [0U] = (0xffU & (IData)(__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_i_data));
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_i_data 
                                                  >> 8U)));
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_i_data 
                                                  >> 0x10U)));
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [3U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_i_data 
                                                  >> 0x18U)));
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [4U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_i_data 
                                                  >> 0x20U)));
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [5U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_i_data 
                                                  >> 0x28U)));
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [6U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_i_data 
                                                  >> 0x30U)));
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [7U] = (0xffU & (IData)((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_i_data 
                                                  >> 0x38U)));
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [3U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [4U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [5U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [5U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [5U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [5U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [6U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [5U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [6U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [5U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [6U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [6U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [6U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [7U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [6U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [7U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [7U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [6U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [7U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [6U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [7U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [7U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [3U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [4U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [5U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [5U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [5U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [5U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [6U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [5U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [6U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [5U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [6U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [6U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [6U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [3U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [4U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [4U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [5U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [5U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [4U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [5U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [5U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [5U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [3U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [3U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [4U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [4U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [3U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [4U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [4U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [4U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [2U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [3U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [3U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [2U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [3U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [3U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [3U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [1U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [2U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [2U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [2U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [2U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [2U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        if ((0U != __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__f_is_acs)) {
                            if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [0U] <= __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                 [1U])) {
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                    = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [0U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U];
                                __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                            }
                        } else if ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [0U] > __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                    [1U])) {
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp 
                                = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [0U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [0U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                [1U];
                            __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                         [1U] = __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__temp;
                        }
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__Vfuncout 
                            = ((0xffffffffff000000ULL 
                                & __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__Vfuncout) 
                               | (IData)((IData)(((
                                                   __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                                      [1U] 
                                                      << 8U) 
                                                     | __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                                     [0U])))));
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__Vfuncout 
                            = ((0xffff000000ffffffULL 
                                & __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__Vfuncout) 
                               | ((QData)((IData)((
                                                   (__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                                    [5U] 
                                                    << 0x10U) 
                                                   | ((__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                                       [4U] 
                                                       << 8U) 
                                                      | __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                                      [3U])))) 
                                  << 0x18U));
                        __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__Vfuncout 
                            = ((0xffffffffffffULL & __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__Vfuncout) 
                               | ((QData)((IData)((
                                                   (__Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                                    [7U] 
                                                    << 8U) 
                                                   | __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__arr
                                                   [6U]))) 
                                  << 0x30U));
                    }(), __Vfunc_tb_Question6__DOT__f_ARR_sorted__12__Vfuncout) 
                        == (((QData)((IData)(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare)
                                               ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)
                                               : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))) 
                             << 0x38U) | (((QData)((IData)(
                                                           ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare)
                                                             ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)
                                                             : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))) 
                                           << 0x30U) 
                                          | (((QData)((IData)(
                                                              ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare)
                                                                ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)
                                                                : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))) 
                                              << 0x28U) 
                                             | (((QData)((IData)(
                                                                 ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                   ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)
                                                                   : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                      ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)
                                                                      : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)) 
                                                                    << 0x18U) 
                                                                   | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare)
                                                                         ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)
                                                                         : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                                                       << 0x10U) 
                                                                      | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare)
                                                                            ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)
                                                                            : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                                                          << 8U) 
                                                                         | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare)
                                                                             ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)
                                                                             : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))))))))))
                        ? ((IData)(1U) + vlSelf->tb_Question6__DOT__test_pass)
                        : vlSelf->tb_Question6__DOT__test_pass);
        vlSelf->tb_Question6__DOT__test_pass = __Vtemp_454;
        tb_Question6__DOT____Vrepeat2 = (tb_Question6__DOT____Vrepeat2 
                                         - (IData)(1U));
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question6/tb_Question6.sv", 
                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n================================\n==========TEST SUMMARY==========\nTotal test cases: %6d    \nPassed          : %6d    \nFailed          : %6d    \nPass rate       : %0.2f%%\n================================\n",0,
                 32,vlSelf->tb_Question6__DOT__test_count,
                 32,vlSelf->tb_Question6__DOT__test_pass,
                 32,(vlSelf->tb_Question6__DOT__test_count 
                     - vlSelf->tb_Question6__DOT__test_pass),
                 64,((100.0 * VL_ISTOR_D_I(32, vlSelf->tb_Question6__DOT__test_pass)) 
                     / VL_ISTOR_D_I(32, vlSelf->tb_Question6__DOT__test_count)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question6/tb_Question6.sv", 
                                       160);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("/home/noname/Documents/project_tiny/Ex3/03_verif/DUT/Question6/tb_Question6.sv", 162, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

void Vtb_Question6___024root___act_comb__TOP__0(Vtb_Question6___024root* vlSelf);

void Vtb_Question6___024root___eval_act(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___eval_act\n"); );
    // Body
    if ((7ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Question6___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_Question6___024root___act_comb__TOP__0(Vtb_Question6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[0U] 
        = (0xffU & (IData)(vlSelf->tb_Question6__DOT__i_data));
    vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[1U] 
        = (0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                            >> 8U)));
    vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[2U] 
        = (0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                            >> 0x10U)));
    vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[3U] 
        = (0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                            >> 0x18U)));
    vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[4U] 
        = (0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                            >> 0x20U)));
    vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[5U] 
        = (0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                            >> 0x28U)));
    vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[6U] 
        = (0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                            >> 0x30U)));
    vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[7U] 
        = (0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                            >> 0x38U)));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & ((IData)((vlSelf->tb_Question6__DOT__i_data 
                                                  >> 6U)) 
                                         ^ (IData)(
                                                   (vlSelf->tb_Question6__DOT__i_data 
                                                    >> 0xeU))))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & ((IData)((vlSelf->tb_Question6__DOT__i_data 
                                                  >> 0x16U)) 
                                         ^ (IData)(
                                                   (vlSelf->tb_Question6__DOT__i_data 
                                                    >> 0x1eU))))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & ((IData)((vlSelf->tb_Question6__DOT__i_data 
                                                  >> 0x26U)) 
                                         ^ (IData)(
                                                   (vlSelf->tb_Question6__DOT__i_data 
                                                    >> 0x2eU))))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & ((IData)((vlSelf->tb_Question6__DOT__i_data 
                                                  >> 0x36U)) 
                                         ^ (IData)(
                                                   (vlSelf->tb_Question6__DOT__i_data 
                                                    >> 0x3eU))))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__w_compare 
        = (1U & (((((~ (IData)((0ULL != (0xc0ULL & vlSelf->tb_Question6__DOT__i_data)))) 
                    & (IData)((vlSelf->tb_Question6__DOT__i_data 
                               >> 0xeU))) | ((IData)(
                                                     (0xc000ULL 
                                                      == 
                                                      (0xc040ULL 
                                                       & vlSelf->tb_Question6__DOT__i_data))) 
                                             | (IData)(
                                                       (0x8000ULL 
                                                        == 
                                                        (0x8080ULL 
                                                         & vlSelf->tb_Question6__DOT__i_data))))) 
                  | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (((~ (IData)((0ULL != (0x30ULL 
                                              & vlSelf->tb_Question6__DOT__i_data)))) 
                         & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                    >> 0xcU))) | ((IData)(
                                                          (0x3000ULL 
                                                           == 
                                                           (0x3010ULL 
                                                            & vlSelf->tb_Question6__DOT__i_data))) 
                                                  | (IData)(
                                                            (0x2000ULL 
                                                             == 
                                                             (0x2020ULL 
                                                              & vlSelf->tb_Question6__DOT__i_data))))))) 
                 | (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & ((IData)(
                                                        (vlSelf->tb_Question6__DOT__i_data 
                                                         >> 4U)) 
                                                ^ (IData)(
                                                          (vlSelf->tb_Question6__DOT__i_data 
                                                           >> 0xcU)))))))) 
                    & ((((~ (IData)((0ULL != (0xcULL 
                                              & vlSelf->tb_Question6__DOT__i_data)))) 
                         & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                    >> 0xaU))) | ((IData)(
                                                          (0xc00ULL 
                                                           == 
                                                           (0xc04ULL 
                                                            & vlSelf->tb_Question6__DOT__i_data))) 
                                                  | (IData)(
                                                            (0x800ULL 
                                                             == 
                                                             (0x808ULL 
                                                              & vlSelf->tb_Question6__DOT__i_data))))) 
                       | ((~ (IData)((0U != (3U & ((IData)(
                                                           (vlSelf->tb_Question6__DOT__i_data 
                                                            >> 2U)) 
                                                   ^ (IData)(
                                                             (vlSelf->tb_Question6__DOT__i_data 
                                                              >> 0xaU))))))) 
                          & (((~ ((IData)((vlSelf->tb_Question6__DOT__i_data 
                                           >> 1U)) 
                                  | (IData)(vlSelf->tb_Question6__DOT__i_data))) 
                              & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                         >> 8U))) | 
                             ((IData)((0x300ULL == 
                                       (0x301ULL & vlSelf->tb_Question6__DOT__i_data))) 
                              | (IData)((0x200ULL == 
                                         (0x202ULL 
                                          & vlSelf->tb_Question6__DOT__i_data))))))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__w_compare 
        = (1U & (((((~ (IData)((0ULL != (0xc00000ULL 
                                         & vlSelf->tb_Question6__DOT__i_data)))) 
                    & (IData)((vlSelf->tb_Question6__DOT__i_data 
                               >> 0x1eU))) | ((IData)(
                                                      (0xc0000000ULL 
                                                       == 
                                                       (0xc0400000ULL 
                                                        & vlSelf->tb_Question6__DOT__i_data))) 
                                              | (IData)(
                                                        (0x80000000ULL 
                                                         == 
                                                         (0x80800000ULL 
                                                          & vlSelf->tb_Question6__DOT__i_data))))) 
                  | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (((~ (IData)((0ULL != (0x300000ULL 
                                              & vlSelf->tb_Question6__DOT__i_data)))) 
                         & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                    >> 0x1cU))) | ((IData)(
                                                           (0x30000000ULL 
                                                            == 
                                                            (0x30100000ULL 
                                                             & vlSelf->tb_Question6__DOT__i_data))) 
                                                   | (IData)(
                                                             (0x20000000ULL 
                                                              == 
                                                              (0x20200000ULL 
                                                               & vlSelf->tb_Question6__DOT__i_data))))))) 
                 | (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & ((IData)(
                                                        (vlSelf->tb_Question6__DOT__i_data 
                                                         >> 0x14U)) 
                                                ^ (IData)(
                                                          (vlSelf->tb_Question6__DOT__i_data 
                                                           >> 0x1cU)))))))) 
                    & ((((~ (IData)((0ULL != (0xc0000ULL 
                                              & vlSelf->tb_Question6__DOT__i_data)))) 
                         & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                    >> 0x1aU))) | ((IData)(
                                                           (0xc000000ULL 
                                                            == 
                                                            (0xc040000ULL 
                                                             & vlSelf->tb_Question6__DOT__i_data))) 
                                                   | (IData)(
                                                             (0x8000000ULL 
                                                              == 
                                                              (0x8080000ULL 
                                                               & vlSelf->tb_Question6__DOT__i_data))))) 
                       | ((~ (IData)((0U != (3U & ((IData)(
                                                           (vlSelf->tb_Question6__DOT__i_data 
                                                            >> 0x12U)) 
                                                   ^ (IData)(
                                                             (vlSelf->tb_Question6__DOT__i_data 
                                                              >> 0x1aU))))))) 
                          & (((~ (IData)((0ULL != (0x30000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                              & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                         >> 0x18U))) 
                             | ((IData)((0x3000000ULL 
                                         == (0x3010000ULL 
                                             & vlSelf->tb_Question6__DOT__i_data))) 
                                | (IData)((0x2000000ULL 
                                           == (0x2020000ULL 
                                               & vlSelf->tb_Question6__DOT__i_data))))))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__w_compare 
        = (1U & (((((~ (IData)((0ULL != (0xc000000000ULL 
                                         & vlSelf->tb_Question6__DOT__i_data)))) 
                    & (IData)((vlSelf->tb_Question6__DOT__i_data 
                               >> 0x2eU))) | ((IData)(
                                                      (0xc00000000000ULL 
                                                       == 
                                                       (0xc04000000000ULL 
                                                        & vlSelf->tb_Question6__DOT__i_data))) 
                                              | (IData)(
                                                        (0x800000000000ULL 
                                                         == 
                                                         (0x808000000000ULL 
                                                          & vlSelf->tb_Question6__DOT__i_data))))) 
                  | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (((~ (IData)((0ULL != (0x3000000000ULL 
                                              & vlSelf->tb_Question6__DOT__i_data)))) 
                         & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                    >> 0x2cU))) | ((IData)(
                                                           (0x300000000000ULL 
                                                            == 
                                                            (0x301000000000ULL 
                                                             & vlSelf->tb_Question6__DOT__i_data))) 
                                                   | (IData)(
                                                             (0x200000000000ULL 
                                                              == 
                                                              (0x202000000000ULL 
                                                               & vlSelf->tb_Question6__DOT__i_data))))))) 
                 | (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & ((IData)(
                                                        (vlSelf->tb_Question6__DOT__i_data 
                                                         >> 0x24U)) 
                                                ^ (IData)(
                                                          (vlSelf->tb_Question6__DOT__i_data 
                                                           >> 0x2cU)))))))) 
                    & ((((~ (IData)((0ULL != (0xc00000000ULL 
                                              & vlSelf->tb_Question6__DOT__i_data)))) 
                         & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                    >> 0x2aU))) | ((IData)(
                                                           (0xc0000000000ULL 
                                                            == 
                                                            (0xc0400000000ULL 
                                                             & vlSelf->tb_Question6__DOT__i_data))) 
                                                   | (IData)(
                                                             (0x80000000000ULL 
                                                              == 
                                                              (0x80800000000ULL 
                                                               & vlSelf->tb_Question6__DOT__i_data))))) 
                       | ((~ (IData)((0U != (3U & ((IData)(
                                                           (vlSelf->tb_Question6__DOT__i_data 
                                                            >> 0x22U)) 
                                                   ^ (IData)(
                                                             (vlSelf->tb_Question6__DOT__i_data 
                                                              >> 0x2aU))))))) 
                          & (((~ (IData)((0ULL != (0x300000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                              & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                         >> 0x28U))) 
                             | ((IData)((0x30000000000ULL 
                                         == (0x30100000000ULL 
                                             & vlSelf->tb_Question6__DOT__i_data))) 
                                | (IData)((0x20000000000ULL 
                                           == (0x20200000000ULL 
                                               & vlSelf->tb_Question6__DOT__i_data))))))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__w_compare 
        = (1U & (((((~ (IData)((0ULL != (0xc0000000000000ULL 
                                         & vlSelf->tb_Question6__DOT__i_data)))) 
                    & (IData)((vlSelf->tb_Question6__DOT__i_data 
                               >> 0x3eU))) | ((IData)(
                                                      (0xc000000000000000ULL 
                                                       == 
                                                       (0xc040000000000000ULL 
                                                        & vlSelf->tb_Question6__DOT__i_data))) 
                                              | (IData)(
                                                        (0x8000000000000000ULL 
                                                         == 
                                                         (0x8080000000000000ULL 
                                                          & vlSelf->tb_Question6__DOT__i_data))))) 
                  | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (((~ (IData)((0ULL != (0x30000000000000ULL 
                                              & vlSelf->tb_Question6__DOT__i_data)))) 
                         & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                    >> 0x3cU))) | ((IData)(
                                                           (0x3000000000000000ULL 
                                                            == 
                                                            (0x3010000000000000ULL 
                                                             & vlSelf->tb_Question6__DOT__i_data))) 
                                                   | (IData)(
                                                             (0x2000000000000000ULL 
                                                              == 
                                                              (0x2020000000000000ULL 
                                                               & vlSelf->tb_Question6__DOT__i_data))))))) 
                 | (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & ((IData)(
                                                        (vlSelf->tb_Question6__DOT__i_data 
                                                         >> 0x34U)) 
                                                ^ (IData)(
                                                          (vlSelf->tb_Question6__DOT__i_data 
                                                           >> 0x3cU)))))))) 
                    & ((((~ (IData)((0ULL != (0xc000000000000ULL 
                                              & vlSelf->tb_Question6__DOT__i_data)))) 
                         & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                    >> 0x3aU))) | ((IData)(
                                                           (0xc00000000000000ULL 
                                                            == 
                                                            (0xc04000000000000ULL 
                                                             & vlSelf->tb_Question6__DOT__i_data))) 
                                                   | (IData)(
                                                             (0x800000000000000ULL 
                                                              == 
                                                              (0x808000000000000ULL 
                                                               & vlSelf->tb_Question6__DOT__i_data))))) 
                       | ((~ (IData)((0U != (3U & ((IData)(
                                                           (vlSelf->tb_Question6__DOT__i_data 
                                                            >> 0x32U)) 
                                                   ^ (IData)(
                                                             (vlSelf->tb_Question6__DOT__i_data 
                                                              >> 0x3aU))))))) 
                          & (((~ (IData)((0ULL != (0x3000000000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                              & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                         >> 0x38U))) 
                             | ((IData)((0x300000000000000ULL 
                                         == (0x301000000000000ULL 
                                             & vlSelf->tb_Question6__DOT__i_data))) 
                                | (IData)((0x200000000000000ULL 
                                           == (0x202000000000000ULL 
                                               & vlSelf->tb_Question6__DOT__i_data))))))))));
    if (vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__w_compare) {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0 
            = (0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                >> 8U)));
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0 
            = (0xffU & (IData)(vlSelf->tb_Question6__DOT__i_data));
    } else {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0 
            = (0xffU & (IData)(vlSelf->tb_Question6__DOT__i_data));
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0 
            = (0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                >> 8U)));
    }
    if (vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__w_compare) {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1 
            = (0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                >> 0x18U)));
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1 
            = (0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                >> 0x10U)));
    } else {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1 
            = (0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                >> 0x10U)));
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1 
            = (0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                >> 0x18U)));
    }
    if (vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__w_compare) {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0 
            = (0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                >> 0x28U)));
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0 
            = (0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                >> 0x20U)));
    } else {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0 
            = (0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                >> 0x20U)));
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0 
            = (0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                >> 0x28U)));
    }
    if (vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__w_compare) {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1 
            = (0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                >> 0x38U)));
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1 
            = (0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                >> 0x30U)));
    } else {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1 
            = (0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                >> 0x30U)));
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1 
            = (0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                >> 0x38U)));
    }
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                         >> 6U))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                         >> 6U))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                         >> 6U))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                         >> 6U))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__w_compare 
        = (1U & (((((~ (IData)((0U != (0xc0U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))))) 
                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                       >> 6U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                       >> 6U)) & (IData)(
                                                         (0xc0U 
                                                          == 
                                                          (0xc0U 
                                                           & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                  | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                         >> 7U)) & 
                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                      >> 7U)))) | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                                   & (((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))))) 
                                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                          >> 4U)) 
                                                      | (((~ 
                                                           ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                            >> 4U)) 
                                                          & (IData)(
                                                                    (0x30U 
                                                                     == 
                                                                     (0x30U 
                                                                      & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                                         | ((~ 
                                                             ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                              >> 5U)) 
                                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                               >> 5U)))))) 
                 | (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                >> 4U)))))) 
                    & ((((~ (IData)((0U != (0xcU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))))) 
                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                            >> 2U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                             >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                   >> 2U))))) 
                          & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                   >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                              & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                             | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0)) 
                                 & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                     >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))) 
                                | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                  >> 1U)))))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__w_compare 
        = (1U & (((((~ (IData)((0U != (0xc0U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))))) 
                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                       >> 6U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                       >> 6U)) & (IData)(
                                                         (0xc0U 
                                                          == 
                                                          (0xc0U 
                                                           & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                  | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                         >> 7U)) & 
                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                      >> 7U)))) | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                                   & (((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))))) 
                                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                          >> 4U)) 
                                                      | (((~ 
                                                           ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                            >> 4U)) 
                                                          & (IData)(
                                                                    (0x30U 
                                                                     == 
                                                                     (0x30U 
                                                                      & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                                         | ((~ 
                                                             ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                              >> 5U)) 
                                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                               >> 5U)))))) 
                 | (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                >> 4U)))))) 
                    & ((((~ (IData)((0U != (0xcU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))))) 
                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                            >> 2U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                             >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                   >> 2U))))) 
                          & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                   >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                              & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                             | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0)) 
                                 & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                     >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))) 
                                | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                  >> 1U)))))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__w_compare 
        = (1U & (((((~ (IData)((0U != (0xc0U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))))) 
                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                       >> 6U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                       >> 6U)) & (IData)(
                                                         (0xc0U 
                                                          == 
                                                          (0xc0U 
                                                           & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                  | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                         >> 7U)) & 
                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                      >> 7U)))) | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                                   & (((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))))) 
                                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                          >> 4U)) 
                                                      | (((~ 
                                                           ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                            >> 4U)) 
                                                          & (IData)(
                                                                    (0x30U 
                                                                     == 
                                                                     (0x30U 
                                                                      & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                                         | ((~ 
                                                             ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                              >> 5U)) 
                                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                               >> 5U)))))) 
                 | (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                >> 4U)))))) 
                    & ((((~ (IData)((0U != (0xcU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))))) 
                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                            >> 2U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                             >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                   >> 2U))))) 
                          & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                   >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                              & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                             | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0)) 
                                 & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                     >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))) 
                                | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                  >> 1U)))))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__w_compare 
        = (1U & (((((~ (IData)((0U != (0xc0U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))))) 
                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                       >> 6U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                       >> 6U)) & (IData)(
                                                         (0xc0U 
                                                          == 
                                                          (0xc0U 
                                                           & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                  | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                         >> 7U)) & 
                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                      >> 7U)))) | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                                   & (((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))))) 
                                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                          >> 4U)) 
                                                      | (((~ 
                                                           ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                            >> 4U)) 
                                                          & (IData)(
                                                                    (0x30U 
                                                                     == 
                                                                     (0x30U 
                                                                      & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                                         | ((~ 
                                                             ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                              >> 5U)) 
                                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                               >> 5U)))))) 
                 | (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                >> 4U)))))) 
                    & ((((~ (IData)((0U != (0xcU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))))) 
                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                            >> 2U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                             >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                   >> 2U))))) 
                          & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                   >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                              & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                             | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0)) 
                                 & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                     >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))) 
                                | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                  >> 1U)))))))));
    if (vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__w_compare) {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0;
    } else {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1;
    }
    if (vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__w_compare) {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1;
    } else {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0;
    }
    if (vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__w_compare) {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0;
    } else {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1;
    }
    if (vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__w_compare) {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1;
    } else {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0;
    }
    vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[0U] 
        = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0;
    vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[3U] 
        = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1;
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                         >> 6U))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[4U] 
        = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0;
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                         >> 6U))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[7U] 
        = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1;
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                         >> 6U))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                         >> 6U))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__w_compare 
        = (1U & (((((~ (IData)((0U != (0xc0U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))))) 
                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                       >> 6U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                       >> 6U)) & (IData)(
                                                         (0xc0U 
                                                          == 
                                                          (0xc0U 
                                                           & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                  | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                         >> 7U)) & 
                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                      >> 7U)))) | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                                   & (((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))))) 
                                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                          >> 4U)) 
                                                      | (((~ 
                                                           ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                            >> 4U)) 
                                                          & (IData)(
                                                                    (0x30U 
                                                                     == 
                                                                     (0x30U 
                                                                      & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                                         | ((~ 
                                                             ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                              >> 5U)) 
                                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                               >> 5U)))))) 
                 | (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                >> 4U)))))) 
                    & ((((~ (IData)((0U != (0xcU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))))) 
                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                            >> 2U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                             >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                   >> 2U))))) 
                          & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                   >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                              & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                             | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0)) 
                                 & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                     >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))) 
                                | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                  >> 1U)))))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare 
        = (1U & (((((~ (IData)((0U != (0xc0U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))) 
                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                       >> 6U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                       >> 6U)) & (IData)(
                                                         (0xc0U 
                                                          == 
                                                          (0xc0U 
                                                           & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                  | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                         >> 7U)) & 
                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                      >> 7U)))) | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                                   & (((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))) 
                                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                          >> 4U)) 
                                                      | (((~ 
                                                           ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                            >> 4U)) 
                                                          & (IData)(
                                                                    (0x30U 
                                                                     == 
                                                                     (0x30U 
                                                                      & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                                         | ((~ 
                                                             ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                              >> 5U)) 
                                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                               >> 5U)))))) 
                 | (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                >> 4U)))))) 
                    & ((((~ (IData)((0U != (0xcU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))) 
                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                            >> 2U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                             >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                   >> 2U))))) 
                          & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                   >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                              & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                             | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0)) 
                                 & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                     >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))) 
                                | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                  >> 1U)))))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare 
        = (1U & (((((~ (IData)((0U != (0xc0U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))))) 
                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                       >> 6U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                       >> 6U)) & (IData)(
                                                         (0xc0U 
                                                          == 
                                                          (0xc0U 
                                                           & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                  | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                         >> 7U)) & 
                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                      >> 7U)))) | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                                   & (((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))))) 
                                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                          >> 4U)) 
                                                      | (((~ 
                                                           ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                            >> 4U)) 
                                                          & (IData)(
                                                                    (0x30U 
                                                                     == 
                                                                     (0x30U 
                                                                      & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                                         | ((~ 
                                                             ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                              >> 5U)) 
                                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                               >> 5U)))))) 
                 | (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                >> 4U)))))) 
                    & ((((~ (IData)((0U != (0xcU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))))) 
                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                            >> 2U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                             >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                   >> 2U))))) 
                          & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                   >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                              & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                             | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)) 
                                 & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                     >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))) 
                                | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                       >> 1U)) & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                  >> 1U)))))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__w_compare 
        = (1U & (((((~ (IData)((0U != (0xc0U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))))) 
                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                       >> 6U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                       >> 6U)) & (IData)(
                                                         (0xc0U 
                                                          == 
                                                          (0xc0U 
                                                           & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                  | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                         >> 7U)) & 
                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                      >> 7U)))) | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                                   & (((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))))) 
                                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                          >> 4U)) 
                                                      | (((~ 
                                                           ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                            >> 4U)) 
                                                          & (IData)(
                                                                    (0x30U 
                                                                     == 
                                                                     (0x30U 
                                                                      & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                                         | ((~ 
                                                             ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                              >> 5U)) 
                                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                               >> 5U)))))) 
                 | (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                >> 4U)))))) 
                    & ((((~ (IData)((0U != (0xcU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))))) 
                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                            >> 2U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                             >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                   >> 2U))))) 
                          & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                   >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                              & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                             | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0)) 
                                 & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                     >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))) 
                                | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                  >> 1U)))))))));
    if (vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__w_compare) {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0;
    } else {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1;
    }
    if (vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare) {
        vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[0U] 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0;
    } else {
        vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[0U] 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0;
    }
    if (vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare) {
        vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[7U] 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1;
    } else {
        vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[7U] 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1;
    }
    if (vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__w_compare) {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0;
    } else {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1;
    }
    vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[1U] 
        = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0;
    vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[2U] 
        = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0;
    vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[5U] 
        = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0;
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                         >> 6U))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[6U] 
        = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0;
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                         >> 6U))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__w_compare 
        = (1U & (((((~ (IData)((0U != (0xc0U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))))) 
                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                       >> 6U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                       >> 6U)) & (IData)(
                                                         (0xc0U 
                                                          == 
                                                          (0xc0U 
                                                           & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                  | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                         >> 7U)) & 
                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                      >> 7U)))) | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                                   & (((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))))) 
                                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                          >> 4U)) 
                                                      | (((~ 
                                                           ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                            >> 4U)) 
                                                          & (IData)(
                                                                    (0x30U 
                                                                     == 
                                                                     (0x30U 
                                                                      & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                                         | ((~ 
                                                             ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                              >> 5U)) 
                                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                               >> 5U)))))) 
                 | (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                >> 4U)))))) 
                    & ((((~ (IData)((0U != (0xcU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))))) 
                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                            >> 2U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                             >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                   >> 2U))))) 
                          & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                   >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                              & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                             | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0)) 
                                 & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                     >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))) 
                                | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                  >> 1U)))))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__w_compare 
        = (1U & (((((~ (IData)((0U != (0xc0U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))))) 
                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                       >> 6U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                       >> 6U)) & (IData)(
                                                         (0xc0U 
                                                          == 
                                                          (0xc0U 
                                                           & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                  | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                         >> 7U)) & 
                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                      >> 7U)))) | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                                   & (((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))))) 
                                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                          >> 4U)) 
                                                      | (((~ 
                                                           ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                            >> 4U)) 
                                                          & (IData)(
                                                                    (0x30U 
                                                                     == 
                                                                     (0x30U 
                                                                      & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                                         | ((~ 
                                                             ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                              >> 5U)) 
                                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                               >> 5U)))))) 
                 | (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                >> 4U)))))) 
                    & ((((~ (IData)((0U != (0xcU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))))) 
                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                            >> 2U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                             >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                   >> 2U))))) 
                          & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                   >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                              & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                             | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0)) 
                                 & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                     >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))) 
                                | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                  >> 1U)))))))));
    if (vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__w_compare) {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0;
    } else {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0;
    }
    if (vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__w_compare) {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0;
    } else {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0;
    }
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                         >> 6U))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                         >> 6U))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                         >> 6U))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare 
        = (1U & (((((~ (IData)((0U != (0xc0U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))))) 
                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                       >> 6U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                       >> 6U)) & (IData)(
                                                         (0xc0U 
                                                          == 
                                                          (0xc0U 
                                                           & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                  | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                         >> 7U)) & 
                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                      >> 7U)))) | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                                   & (((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))))) 
                                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                          >> 4U)) 
                                                      | (((~ 
                                                           ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                            >> 4U)) 
                                                          & (IData)(
                                                                    (0x30U 
                                                                     == 
                                                                     (0x30U 
                                                                      & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                                         | ((~ 
                                                             ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                              >> 5U)) 
                                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                               >> 5U)))))) 
                 | (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                >> 4U)))))) 
                    & ((((~ (IData)((0U != (0xcU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))))) 
                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                            >> 2U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                             >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                   >> 2U))))) 
                          & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                   >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                              & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                             | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                 & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                     >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))) 
                                | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                  >> 1U)))))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare 
        = (1U & (((((~ (IData)((0U != (0xc0U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))))) 
                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                       >> 6U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                       >> 6U)) & (IData)(
                                                         (0xc0U 
                                                          == 
                                                          (0xc0U 
                                                           & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                  | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                         >> 7U)) & 
                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                      >> 7U)))) | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                                   & (((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))))) 
                                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                          >> 4U)) 
                                                      | (((~ 
                                                           ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                            >> 4U)) 
                                                          & (IData)(
                                                                    (0x30U 
                                                                     == 
                                                                     (0x30U 
                                                                      & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                                         | ((~ 
                                                             ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                              >> 5U)) 
                                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                               >> 5U)))))) 
                 | (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                >> 4U)))))) 
                    & ((((~ (IData)((0U != (0xcU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))))) 
                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                            >> 2U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                             >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                   >> 2U))))) 
                          & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                   >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                              & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                             | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)) 
                                 & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                     >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))) 
                                | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                       >> 1U)) & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                  >> 1U)))))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__w_compare 
        = (1U & (((((~ (IData)((0U != (0xc0U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))))) 
                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                       >> 6U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                       >> 6U)) & (IData)(
                                                         (0xc0U 
                                                          == 
                                                          (0xc0U 
                                                           & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                  | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                         >> 7U)) & 
                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                      >> 7U)))) | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                                   & (((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))))) 
                                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                          >> 4U)) 
                                                      | (((~ 
                                                           ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                            >> 4U)) 
                                                          & (IData)(
                                                                    (0x30U 
                                                                     == 
                                                                     (0x30U 
                                                                      & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                                         | ((~ 
                                                             ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                              >> 5U)) 
                                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                               >> 5U)))))) 
                 | (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                >> 4U)))))) 
                    & ((((~ (IData)((0U != (0xcU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))))) 
                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                            >> 2U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                             >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                   >> 2U))))) 
                          & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                   >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                              & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                             | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1)) 
                                 & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                     >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))) 
                                | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                       >> 1U)) & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                  >> 1U)))))))));
    if (vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare) {
        vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[1U] 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0;
    } else {
        vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[1U] 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1;
    }
    if (vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare) {
        vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[6U] 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3;
    } else {
        vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[6U] 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2;
    }
    if (vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__w_compare) {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1;
    } else {
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2;
    }
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                         >> 6U))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                         >> 6U))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare 
        = (1U & (((((~ (IData)((0U != (0xc0U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))))) 
                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                       >> 6U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                       >> 6U)) & (IData)(
                                                         (0xc0U 
                                                          == 
                                                          (0xc0U 
                                                           & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                  | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                         >> 7U)) & 
                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                      >> 7U)))) | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                                   & (((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))))) 
                                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                          >> 4U)) 
                                                      | (((~ 
                                                           ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                            >> 4U)) 
                                                          & (IData)(
                                                                    (0x30U 
                                                                     == 
                                                                     (0x30U 
                                                                      & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                                         | ((~ 
                                                             ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                              >> 5U)) 
                                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                               >> 5U)))))) 
                 | (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                >> 4U)))))) 
                    & ((((~ (IData)((0U != (0xcU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))))) 
                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                            >> 2U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                             >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                   >> 2U))))) 
                          & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                   >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                              & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                             | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                 & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                     >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))) 
                                | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                  >> 1U)))))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare 
        = (1U & (((((~ (IData)((0U != (0xc0U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))))) 
                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                       >> 6U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                       >> 6U)) & (IData)(
                                                         (0xc0U 
                                                          == 
                                                          (0xc0U 
                                                           & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                  | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                         >> 7U)) & 
                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                      >> 7U)))) | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                                   & (((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))))) 
                                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                          >> 4U)) 
                                                      | (((~ 
                                                           ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                            >> 4U)) 
                                                          & (IData)(
                                                                    (0x30U 
                                                                     == 
                                                                     (0x30U 
                                                                      & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                                         | ((~ 
                                                             ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                              >> 5U)) 
                                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                               >> 5U)))))) 
                 | (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                >> 4U)))))) 
                    & ((((~ (IData)((0U != (0xcU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))))) 
                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                            >> 2U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                             >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                   >> 2U))))) 
                          & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                   >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                              & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                             | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)) 
                                 & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                     >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))) 
                                | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                       >> 1U)) & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                  >> 1U)))))))));
    if (vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare) {
        vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[2U] 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0;
    } else {
        vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[2U] 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1;
    }
    if (vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare) {
        vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[5U] 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2;
    } else {
        vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[5U] 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2;
        vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1;
    }
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)) 
                                         >> 6U))))));
    vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare 
        = (1U & (((((~ (IData)((0U != (0xc0U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))))) 
                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                       >> 6U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                       >> 6U)) & (IData)(
                                                         (0xc0U 
                                                          == 
                                                          (0xc0U 
                                                           & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))))) 
                                  | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                         >> 7U)) & 
                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                      >> 7U)))) | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                                   & (((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))))) 
                                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                                          >> 4U)) 
                                                      | (((~ 
                                                           ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                            >> 4U)) 
                                                          & (IData)(
                                                                    (0x30U 
                                                                     == 
                                                                     (0x30U 
                                                                      & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))))) 
                                                         | ((~ 
                                                             ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                              >> 5U)) 
                                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                                               >> 5U)))))) 
                 | (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)) 
                                                >> 4U)))))) 
                    & ((((~ (IData)((0U != (0xcU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))))) 
                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                            >> 2U)) | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                             >> 3U)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)) 
                                                   >> 2U))))) 
                          & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                   >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))) 
                              & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)) 
                             | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)) 
                                 & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                     >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))) 
                                | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                       >> 1U)) & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                                  >> 1U)))))))));
    if (vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare) {
        vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[4U] 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0;
        vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[3U] 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1;
    } else {
        vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[4U] 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1;
        vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[3U] 
            = vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0;
    }
}
