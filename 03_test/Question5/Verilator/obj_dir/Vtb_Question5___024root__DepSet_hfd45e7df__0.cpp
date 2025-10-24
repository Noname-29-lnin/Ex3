// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question5.h for the primary calling header

#include "Vtb_Question5__pch.h"
#include "Vtb_Question5__Syms.h"
#include "Vtb_Question5___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_Question5___024root___eval_initial__TOP__Vtiming__0(Vtb_Question5___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlUnpacked<CData/*7:0*/, 7> __Vtask_tb_Question5__DOT__run_test__0__edgeA;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        __Vtask_tb_Question5__DOT__run_test__0__edgeA[__Vi0] = 0;
    }
    VlUnpacked<CData/*7:0*/, 7> __Vtask_tb_Question5__DOT__run_test__0__edgeB;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        __Vtask_tb_Question5__DOT__run_test__0__edgeB[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_Question5__DOT__run_test__0__rctl;
    __Vtask_tb_Question5__DOT__run_test__0__rctl = 0;
    CData/*7:0*/ __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA = 0;
    CData/*7:0*/ __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB = 0;
    CData/*0:0*/ __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0;
    CData/*0:0*/ __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0;
    CData/*0:0*/ __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0;
    std::string __Vtask_tb_Question5__DOT__apply_and_check__1__test_label;
    IData/*31:0*/ __Vtask_tb_Question5__DOT__apply_and_check__1__expected;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected = 0;
    CData/*7:0*/ __Vtask_tb_Question5__DOT__apply_and_check__1__expF;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF = 0;
    CData/*0:0*/ __Vtask_tb_Question5__DOT__apply_and_check__1__expC;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC = 0;
    std::string __Vtask_tb_Question5__DOT__apply_and_check__1__passfail;
    IData/*31:0*/ __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = 0;
    CData/*7:0*/ __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = 0;
    CData/*0:0*/ __Vfunc_tb_Question5__DOT__ref_model__2__S1_i;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = 0;
    CData/*0:0*/ __Vfunc_tb_Question5__DOT__ref_model__2__S0_i;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = 0;
    CData/*0:0*/ __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i = 0;
    CData/*7:0*/ __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp = 0;
    CData/*7:0*/ __Vfunc_tb_Question5__DOT__ref_model__2__Op1;
    __Vfunc_tb_Question5__DOT__ref_model__2__Op1 = 0;
    CData/*7:0*/ __Vfunc_tb_Question5__DOT__ref_model__2__Op2;
    __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0;
    IData/*31:0*/ __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 0;
    CData/*7:0*/ __Vtask_tb_Question5__DOT__apply_and_check__3__tvA;
    __Vtask_tb_Question5__DOT__apply_and_check__3__tvA = 0;
    CData/*7:0*/ __Vtask_tb_Question5__DOT__apply_and_check__3__tvB;
    __Vtask_tb_Question5__DOT__apply_and_check__3__tvB = 0;
    CData/*0:0*/ __Vtask_tb_Question5__DOT__apply_and_check__3__tvS1;
    __Vtask_tb_Question5__DOT__apply_and_check__3__tvS1 = 0;
    CData/*0:0*/ __Vtask_tb_Question5__DOT__apply_and_check__3__tvS0;
    __Vtask_tb_Question5__DOT__apply_and_check__3__tvS0 = 0;
    CData/*0:0*/ __Vtask_tb_Question5__DOT__apply_and_check__3__tvCin;
    __Vtask_tb_Question5__DOT__apply_and_check__3__tvCin = 0;
    std::string __Vtask_tb_Question5__DOT__apply_and_check__3__test_label;
    IData/*31:0*/ __Vtask_tb_Question5__DOT__apply_and_check__3__expected;
    __Vtask_tb_Question5__DOT__apply_and_check__3__expected = 0;
    CData/*7:0*/ __Vtask_tb_Question5__DOT__apply_and_check__3__expF;
    __Vtask_tb_Question5__DOT__apply_and_check__3__expF = 0;
    CData/*0:0*/ __Vtask_tb_Question5__DOT__apply_and_check__3__expC;
    __Vtask_tb_Question5__DOT__apply_and_check__3__expC = 0;
    std::string __Vtask_tb_Question5__DOT__apply_and_check__3__passfail;
    IData/*31:0*/ __Vfunc_tb_Question5__DOT__ref_model__4__Vfuncout;
    __Vfunc_tb_Question5__DOT__ref_model__4__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_Question5__DOT__ref_model__4__A_i;
    __Vfunc_tb_Question5__DOT__ref_model__4__A_i = 0;
    CData/*7:0*/ __Vfunc_tb_Question5__DOT__ref_model__4__B_i;
    __Vfunc_tb_Question5__DOT__ref_model__4__B_i = 0;
    CData/*0:0*/ __Vfunc_tb_Question5__DOT__ref_model__4__S1_i;
    __Vfunc_tb_Question5__DOT__ref_model__4__S1_i = 0;
    CData/*0:0*/ __Vfunc_tb_Question5__DOT__ref_model__4__S0_i;
    __Vfunc_tb_Question5__DOT__ref_model__4__S0_i = 0;
    CData/*0:0*/ __Vfunc_tb_Question5__DOT__ref_model__4__Cin_i;
    __Vfunc_tb_Question5__DOT__ref_model__4__Cin_i = 0;
    CData/*7:0*/ __Vfunc_tb_Question5__DOT__ref_model__4__B_comp;
    __Vfunc_tb_Question5__DOT__ref_model__4__B_comp = 0;
    CData/*7:0*/ __Vfunc_tb_Question5__DOT__ref_model__4__Op1;
    __Vfunc_tb_Question5__DOT__ref_model__4__Op1 = 0;
    CData/*7:0*/ __Vfunc_tb_Question5__DOT__ref_model__4__Op2;
    __Vfunc_tb_Question5__DOT__ref_model__4__Op2 = 0;
    IData/*31:0*/ __Vfunc_tb_Question5__DOT__ref_model__4__sum9;
    __Vfunc_tb_Question5__DOT__ref_model__4__sum9 = 0;
    CData/*7:0*/ __Vtask_tb_Question5__DOT__apply_and_check__5__tvA;
    __Vtask_tb_Question5__DOT__apply_and_check__5__tvA = 0;
    CData/*7:0*/ __Vtask_tb_Question5__DOT__apply_and_check__5__tvB;
    __Vtask_tb_Question5__DOT__apply_and_check__5__tvB = 0;
    CData/*0:0*/ __Vtask_tb_Question5__DOT__apply_and_check__5__tvS1;
    __Vtask_tb_Question5__DOT__apply_and_check__5__tvS1 = 0;
    CData/*0:0*/ __Vtask_tb_Question5__DOT__apply_and_check__5__tvS0;
    __Vtask_tb_Question5__DOT__apply_and_check__5__tvS0 = 0;
    CData/*0:0*/ __Vtask_tb_Question5__DOT__apply_and_check__5__tvCin;
    __Vtask_tb_Question5__DOT__apply_and_check__5__tvCin = 0;
    std::string __Vtask_tb_Question5__DOT__apply_and_check__5__test_label;
    IData/*31:0*/ __Vtask_tb_Question5__DOT__apply_and_check__5__expected;
    __Vtask_tb_Question5__DOT__apply_and_check__5__expected = 0;
    CData/*7:0*/ __Vtask_tb_Question5__DOT__apply_and_check__5__expF;
    __Vtask_tb_Question5__DOT__apply_and_check__5__expF = 0;
    CData/*0:0*/ __Vtask_tb_Question5__DOT__apply_and_check__5__expC;
    __Vtask_tb_Question5__DOT__apply_and_check__5__expC = 0;
    std::string __Vtask_tb_Question5__DOT__apply_and_check__5__passfail;
    IData/*31:0*/ __Vfunc_tb_Question5__DOT__ref_model__6__Vfuncout;
    __Vfunc_tb_Question5__DOT__ref_model__6__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_Question5__DOT__ref_model__6__A_i;
    __Vfunc_tb_Question5__DOT__ref_model__6__A_i = 0;
    CData/*7:0*/ __Vfunc_tb_Question5__DOT__ref_model__6__B_i;
    __Vfunc_tb_Question5__DOT__ref_model__6__B_i = 0;
    CData/*0:0*/ __Vfunc_tb_Question5__DOT__ref_model__6__S1_i;
    __Vfunc_tb_Question5__DOT__ref_model__6__S1_i = 0;
    CData/*0:0*/ __Vfunc_tb_Question5__DOT__ref_model__6__S0_i;
    __Vfunc_tb_Question5__DOT__ref_model__6__S0_i = 0;
    CData/*0:0*/ __Vfunc_tb_Question5__DOT__ref_model__6__Cin_i;
    __Vfunc_tb_Question5__DOT__ref_model__6__Cin_i = 0;
    CData/*7:0*/ __Vfunc_tb_Question5__DOT__ref_model__6__B_comp;
    __Vfunc_tb_Question5__DOT__ref_model__6__B_comp = 0;
    CData/*7:0*/ __Vfunc_tb_Question5__DOT__ref_model__6__Op1;
    __Vfunc_tb_Question5__DOT__ref_model__6__Op1 = 0;
    CData/*7:0*/ __Vfunc_tb_Question5__DOT__ref_model__6__Op2;
    __Vfunc_tb_Question5__DOT__ref_model__6__Op2 = 0;
    IData/*31:0*/ __Vfunc_tb_Question5__DOT__ref_model__6__sum9;
    __Vfunc_tb_Question5__DOT__ref_model__6__sum9 = 0;
    // Body
    VL_WRITEF_NX("=== TB ALU8 start ===\n",0);
    vlSelf->tb_Question5__DOT__total_tests = 0U;
    vlSelf->tb_Question5__DOT__errors = 0U;
    vlSelf->tb_Question5__DOT__test_count = 0U;
    vlSelf->tb_Question5__DOT__test_pass = 0U;
    __Vtask_tb_Question5__DOT__run_test__0__edgeA[0U] = 0U;
    __Vtask_tb_Question5__DOT__run_test__0__edgeB[0U] = 0U;
    __Vtask_tb_Question5__DOT__run_test__0__edgeA[1U] = 0xffU;
    __Vtask_tb_Question5__DOT__run_test__0__edgeB[1U] = 0xffU;
    __Vtask_tb_Question5__DOT__run_test__0__edgeA[2U] = 0xffU;
    __Vtask_tb_Question5__DOT__run_test__0__edgeB[2U] = 1U;
    __Vtask_tb_Question5__DOT__run_test__0__edgeA[3U] = 0x80U;
    __Vtask_tb_Question5__DOT__run_test__0__edgeB[3U] = 0x80U;
    __Vtask_tb_Question5__DOT__run_test__0__edgeA[4U] = 0xaaU;
    __Vtask_tb_Question5__DOT__run_test__0__edgeB[4U] = 0x55U;
    __Vtask_tb_Question5__DOT__run_test__0__edgeA[5U] = 0x55U;
    __Vtask_tb_Question5__DOT__run_test__0__edgeB[5U] = 0xaaU;
    __Vtask_tb_Question5__DOT__run_test__0__edgeA[6U] = 0xfU;
    __Vtask_tb_Question5__DOT__run_test__0__edgeB[6U] = 0xf0U;
    VL_WRITEF_NX("\n========== STARTING DIRECTED TESTS ==========\n\n",0);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [0U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [0U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = 0U;
    vlSelf->tb_Question5__DOT__S0 = 0U;
    vlSelf->tb_Question5__DOT__Cin = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [0U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [0U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [0U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [0U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [0U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [0U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    ++(vlSymsp->__Vcoverage[44]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [0U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [0U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [0U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [0U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [0U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [0U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [0U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [0U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    ++(vlSymsp->__Vcoverage[44]);
    ++(vlSymsp->__Vcoverage[45]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [1U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [1U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [1U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [1U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [1U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [1U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [1U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [1U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    ++(vlSymsp->__Vcoverage[44]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [1U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [1U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [1U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [1U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [1U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [1U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [1U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [1U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    ++(vlSymsp->__Vcoverage[44]);
    ++(vlSymsp->__Vcoverage[45]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [2U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [2U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [2U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [2U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [2U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [2U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [2U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [2U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    ++(vlSymsp->__Vcoverage[44]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [2U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [2U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [2U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [2U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [2U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [2U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [2U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [2U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    ++(vlSymsp->__Vcoverage[44]);
    ++(vlSymsp->__Vcoverage[45]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [3U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [3U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [3U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [3U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [3U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [3U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [3U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [3U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    ++(vlSymsp->__Vcoverage[44]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [3U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [3U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [3U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [3U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [3U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [3U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [3U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [3U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    ++(vlSymsp->__Vcoverage[44]);
    ++(vlSymsp->__Vcoverage[45]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [4U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [4U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [4U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [4U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [4U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [4U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [4U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [4U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    ++(vlSymsp->__Vcoverage[44]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [4U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [4U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [4U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [4U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [4U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [4U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [4U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [4U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    ++(vlSymsp->__Vcoverage[44]);
    ++(vlSymsp->__Vcoverage[45]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [5U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [5U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [5U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [5U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [5U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [5U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [5U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [5U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    ++(vlSymsp->__Vcoverage[44]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [5U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [5U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [5U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [5U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [5U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [5U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [5U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [5U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    ++(vlSymsp->__Vcoverage[44]);
    ++(vlSymsp->__Vcoverage[45]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [6U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [6U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [6U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [6U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [6U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [6U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [6U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [6U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    ++(vlSymsp->__Vcoverage[44]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [6U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [6U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [6U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [6U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [6U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [6U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__test_label = 
        std::string{"Direct"};
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1 = 1U;
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvB 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeB
        [6U];
    __Vtask_tb_Question5__DOT__apply_and_check__1__tvA 
        = __Vtask_tb_Question5__DOT__run_test__0__edgeA
        [6U];
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__1__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__1__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__1__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__1__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__2__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__2__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__2__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__2__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__2__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__B_i)));
    if (__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__2__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__2__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__2__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__2__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__2__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__2__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__2__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__1__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__1__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__1__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__1__expected 
                 >> 8U));
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__1__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__1__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__1__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__1__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__1__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    ++(vlSymsp->__Vcoverage[42]);
    ++(vlSymsp->__Vcoverage[43]);
    ++(vlSymsp->__Vcoverage[44]);
    ++(vlSymsp->__Vcoverage[45]);
    VL_WRITEF_NX("\n========== ZERO CASE TEST ==========\n\n",0);
    __Vtask_tb_Question5__DOT__apply_and_check__3__test_label = 
        std::string{"Zero"};
    __Vtask_tb_Question5__DOT__apply_and_check__3__tvCin = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__3__tvS0 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__3__tvS1 = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__3__tvB = 0U;
    __Vtask_tb_Question5__DOT__apply_and_check__3__tvA = 0U;
    vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__3__tvA;
    vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__3__tvB;
    vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__3__tvS1;
    vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__3__tvS0;
    vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__3__tvCin;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_Question5__DOT__ref_model__4__Cin_i 
        = vlSelf->tb_Question5__DOT__Cin;
    __Vfunc_tb_Question5__DOT__ref_model__4__S0_i = vlSelf->tb_Question5__DOT__S0;
    __Vfunc_tb_Question5__DOT__ref_model__4__S1_i = vlSelf->tb_Question5__DOT__S1;
    __Vfunc_tb_Question5__DOT__ref_model__4__B_i = vlSelf->tb_Question5__DOT__B;
    __Vfunc_tb_Question5__DOT__ref_model__4__A_i = vlSelf->tb_Question5__DOT__A;
    __Vfunc_tb_Question5__DOT__ref_model__4__B_comp 
        = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__4__B_i)));
    if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__4__S1_i) 
         & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__4__S0_i)))) {
        __Vfunc_tb_Question5__DOT__ref_model__4__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__4__B_comp;
        ++(vlSymsp->__Vcoverage[29]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__4__Op1 
            = __Vfunc_tb_Question5__DOT__ref_model__4__A_i;
        ++(vlSymsp->__Vcoverage[30]);
    }
    if (__Vfunc_tb_Question5__DOT__ref_model__4__S1_i) {
        if (__Vfunc_tb_Question5__DOT__ref_model__4__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__4__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__4__B_comp;
            ++(vlSymsp->__Vcoverage[34]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__4__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[33]);
        }
    } else if (__Vfunc_tb_Question5__DOT__ref_model__4__S0_i) {
        __Vfunc_tb_Question5__DOT__ref_model__4__Op2 = 0U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vfunc_tb_Question5__DOT__ref_model__4__Op2 
            = __Vfunc_tb_Question5__DOT__ref_model__4__B_i;
        ++(vlSymsp->__Vcoverage[31]);
    }
    __Vfunc_tb_Question5__DOT__ref_model__4__sum9 = 
        (((IData)(__Vfunc_tb_Question5__DOT__ref_model__4__Op1) 
          + (IData)(__Vfunc_tb_Question5__DOT__ref_model__4__Op2)) 
         + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__4__Cin_i)
             ? 1U : 0U));
    __Vfunc_tb_Question5__DOT__ref_model__4__Vfuncout 
        = __Vfunc_tb_Question5__DOT__ref_model__4__sum9;
    ++(vlSymsp->__Vcoverage[36]);
    __Vtask_tb_Question5__DOT__apply_and_check__3__expected 
        = __Vfunc_tb_Question5__DOT__ref_model__4__Vfuncout;
    __Vtask_tb_Question5__DOT__apply_and_check__3__expF 
        = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__3__expected);
    __Vtask_tb_Question5__DOT__apply_and_check__3__expC 
        = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__3__expected 
                 >> 8U));
    vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                              + vlSelf->tb_Question5__DOT__total_tests);
    vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__test_count);
    if ((((IData)(vlSelf->tb_Question5__DOT__F) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__3__expF)) 
         | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                   >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__3__expC)))) {
        __Vtask_tb_Question5__DOT__apply_and_check__3__passfail = 
            std::string{"FAIL"};
        vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_Question5__DOT__errors);
        ++(vlSymsp->__Vcoverage[37]);
    } else {
        __Vtask_tb_Question5__DOT__apply_and_check__3__passfail = 
            std::string{"PASS"};
        vlSelf->tb_Question5__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_Question5__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[38]);
    }
    VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_tb_Question5__DOT__apply_and_check__3__test_label),
                 8,(IData)(vlSelf->tb_Question5__DOT__A),
                 8,vlSelf->tb_Question5__DOT__B,1,(IData)(vlSelf->tb_Question5__DOT__S1),
                 1,vlSelf->tb_Question5__DOT__S0,1,
                 (IData)(vlSelf->tb_Question5__DOT__Cin),
                 8,vlSelf->tb_Question5__DOT__F,1,(1U 
                                                   & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                      >> 2U)),
                 -1,&(__Vtask_tb_Question5__DOT__apply_and_check__3__passfail),
                 8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__3__expF),
                 8,__Vtask_tb_Question5__DOT__apply_and_check__3__expF,
                 8,(IData)(vlSelf->tb_Question5__DOT__F),
                 8,vlSelf->tb_Question5__DOT__F);
    if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__3__passfail))) {
        VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                     8,__Vtask_tb_Question5__DOT__apply_and_check__3__expF,
                     1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__3__expC),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)));
        ++(vlSymsp->__Vcoverage[39]);
    } else {
        ++(vlSymsp->__Vcoverage[40]);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n",0);
    ++(vlSymsp->__Vcoverage[41]);
    VL_WRITEF_NX("\n========== STARTING RANDOM TESTS ==========\n\n",0);
    vlSelf->tb_Question5__DOT__seed = 0xcafebabeU;
    while (VL_GTS_III(32, 0x64U, vlSelf->tb_Question5__DOT__total_tests)) {
        vlSelf->tb_Question5__DOT__A = (0xffU & VL_URANDOM_SEEDED_II(vlSelf->tb_Question5__DOT__seed));
        vlSelf->tb_Question5__DOT__B = (0xffU & VL_URANDOM_SEEDED_II(
                                                                     ((IData)(1U) 
                                                                      + vlSelf->tb_Question5__DOT__seed)));
        __Vtask_tb_Question5__DOT__run_test__0__rctl 
            = (7U & VL_URANDOM_SEEDED_II(((IData)(2U) 
                                          + vlSelf->tb_Question5__DOT__seed)));
        vlSelf->tb_Question5__DOT__S1 = (1U & (__Vtask_tb_Question5__DOT__run_test__0__rctl 
                                               >> 2U));
        vlSelf->tb_Question5__DOT__S0 = (1U & (__Vtask_tb_Question5__DOT__run_test__0__rctl 
                                               >> 1U));
        vlSelf->tb_Question5__DOT__Cin = (1U & __Vtask_tb_Question5__DOT__run_test__0__rctl);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                           178);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_Question5__DOT__apply_and_check__5__test_label = 
            std::string{"Random"};
        __Vtask_tb_Question5__DOT__apply_and_check__5__tvCin 
            = vlSelf->tb_Question5__DOT__Cin;
        __Vtask_tb_Question5__DOT__apply_and_check__5__tvS0 
            = vlSelf->tb_Question5__DOT__S0;
        __Vtask_tb_Question5__DOT__apply_and_check__5__tvS1 
            = vlSelf->tb_Question5__DOT__S1;
        __Vtask_tb_Question5__DOT__apply_and_check__5__tvB 
            = vlSelf->tb_Question5__DOT__B;
        __Vtask_tb_Question5__DOT__apply_and_check__5__tvA 
            = vlSelf->tb_Question5__DOT__A;
        vlSelf->tb_Question5__DOT__A = __Vtask_tb_Question5__DOT__apply_and_check__5__tvA;
        vlSelf->tb_Question5__DOT__B = __Vtask_tb_Question5__DOT__apply_and_check__5__tvB;
        vlSelf->tb_Question5__DOT__S1 = __Vtask_tb_Question5__DOT__apply_and_check__5__tvS1;
        vlSelf->tb_Question5__DOT__S0 = __Vtask_tb_Question5__DOT__apply_and_check__5__tvS0;
        vlSelf->tb_Question5__DOT__Cin = __Vtask_tb_Question5__DOT__apply_and_check__5__tvCin;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 
                                           98);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vfunc_tb_Question5__DOT__ref_model__6__Cin_i 
            = vlSelf->tb_Question5__DOT__Cin;
        __Vfunc_tb_Question5__DOT__ref_model__6__S0_i 
            = vlSelf->tb_Question5__DOT__S0;
        __Vfunc_tb_Question5__DOT__ref_model__6__S1_i 
            = vlSelf->tb_Question5__DOT__S1;
        __Vfunc_tb_Question5__DOT__ref_model__6__B_i 
            = vlSelf->tb_Question5__DOT__B;
        __Vfunc_tb_Question5__DOT__ref_model__6__A_i 
            = vlSelf->tb_Question5__DOT__A;
        __Vfunc_tb_Question5__DOT__ref_model__6__B_comp 
            = (0xffU & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__6__B_i)));
        if (((IData)(__Vfunc_tb_Question5__DOT__ref_model__6__S1_i) 
             & (~ (IData)(__Vfunc_tb_Question5__DOT__ref_model__6__S0_i)))) {
            __Vfunc_tb_Question5__DOT__ref_model__6__Op1 
                = __Vfunc_tb_Question5__DOT__ref_model__6__B_comp;
            ++(vlSymsp->__Vcoverage[29]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__6__Op1 
                = __Vfunc_tb_Question5__DOT__ref_model__6__A_i;
            ++(vlSymsp->__Vcoverage[30]);
        }
        if (__Vfunc_tb_Question5__DOT__ref_model__6__S1_i) {
            if (__Vfunc_tb_Question5__DOT__ref_model__6__S0_i) {
                __Vfunc_tb_Question5__DOT__ref_model__6__Op2 
                    = __Vfunc_tb_Question5__DOT__ref_model__6__B_comp;
                ++(vlSymsp->__Vcoverage[34]);
            } else {
                __Vfunc_tb_Question5__DOT__ref_model__6__Op2 = 0U;
                ++(vlSymsp->__Vcoverage[33]);
            }
        } else if (__Vfunc_tb_Question5__DOT__ref_model__6__S0_i) {
            __Vfunc_tb_Question5__DOT__ref_model__6__Op2 = 0U;
            ++(vlSymsp->__Vcoverage[32]);
        } else {
            __Vfunc_tb_Question5__DOT__ref_model__6__Op2 
                = __Vfunc_tb_Question5__DOT__ref_model__6__B_i;
            ++(vlSymsp->__Vcoverage[31]);
        }
        __Vfunc_tb_Question5__DOT__ref_model__6__sum9 
            = (((IData)(__Vfunc_tb_Question5__DOT__ref_model__6__Op1) 
                + (IData)(__Vfunc_tb_Question5__DOT__ref_model__6__Op2)) 
               + ((IData)(__Vfunc_tb_Question5__DOT__ref_model__6__Cin_i)
                   ? 1U : 0U));
        __Vfunc_tb_Question5__DOT__ref_model__6__Vfuncout 
            = __Vfunc_tb_Question5__DOT__ref_model__6__sum9;
        ++(vlSymsp->__Vcoverage[36]);
        __Vtask_tb_Question5__DOT__apply_and_check__5__expected 
            = __Vfunc_tb_Question5__DOT__ref_model__6__Vfuncout;
        __Vtask_tb_Question5__DOT__apply_and_check__5__expF 
            = (0xffU & __Vtask_tb_Question5__DOT__apply_and_check__5__expected);
        __Vtask_tb_Question5__DOT__apply_and_check__5__expC 
            = (1U & (__Vtask_tb_Question5__DOT__apply_and_check__5__expected 
                     >> 8U));
        vlSelf->tb_Question5__DOT__total_tests = ((IData)(1U) 
                                                  + vlSelf->tb_Question5__DOT__total_tests);
        vlSelf->tb_Question5__DOT__test_count = ((IData)(1U) 
                                                 + vlSelf->tb_Question5__DOT__test_count);
        if ((((IData)(vlSelf->tb_Question5__DOT__F) 
              != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__5__expF)) 
             | ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                       >> 2U)) != (IData)(__Vtask_tb_Question5__DOT__apply_and_check__5__expC)))) {
            __Vtask_tb_Question5__DOT__apply_and_check__5__passfail = 
                std::string{"FAIL"};
            vlSelf->tb_Question5__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->tb_Question5__DOT__errors);
            ++(vlSymsp->__Vcoverage[37]);
        } else {
            __Vtask_tb_Question5__DOT__apply_and_check__5__passfail = 
                std::string{"PASS"};
            vlSelf->tb_Question5__DOT__test_pass = 
                ((IData)(1U) + vlSelf->tb_Question5__DOT__test_pass);
            ++(vlSymsp->__Vcoverage[38]);
        }
        VL_WRITEF_NX("[TIME: %6t] [%@] A=%02x B=%02x S1S0=%b%b Cin=%b | F=%02x Cout=%b\n=> %4@: Expect: %02x (%0#), DUT: %02x (%0#)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,-1,
                     &(__Vtask_tb_Question5__DOT__apply_and_check__5__test_label),
                     8,(IData)(vlSelf->tb_Question5__DOT__A),
                     8,vlSelf->tb_Question5__DOT__B,
                     1,(IData)(vlSelf->tb_Question5__DOT__S1),
                     1,vlSelf->tb_Question5__DOT__S0,
                     1,(IData)(vlSelf->tb_Question5__DOT__Cin),
                     8,vlSelf->tb_Question5__DOT__F,
                     1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                              >> 2U)),-1,&(__Vtask_tb_Question5__DOT__apply_and_check__5__passfail),
                     8,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__5__expF),
                     8,__Vtask_tb_Question5__DOT__apply_and_check__5__expF,
                     8,(IData)(vlSelf->tb_Question5__DOT__F),
                     8,vlSelf->tb_Question5__DOT__F);
        if (VL_UNLIKELY((std::string{"FAIL"} == __Vtask_tb_Question5__DOT__apply_and_check__5__passfail))) {
            VL_WRITEF_NX("    >>> MISMATCH: Expected F=%02x Cout=%b | Got F=%02x Cout=%b\n",0,
                         8,__Vtask_tb_Question5__DOT__apply_and_check__5__expF,
                         1,(IData)(__Vtask_tb_Question5__DOT__apply_and_check__5__expC),
                         8,vlSelf->tb_Question5__DOT__F,
                         1,(1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                  >> 2U)));
            ++(vlSymsp->__Vcoverage[39]);
        } else {
            ++(vlSymsp->__Vcoverage[40]);
        }
        VL_WRITEF_NX("------------------------------------------------------------\n",0);
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->tb_Question5__DOT__seed = ((IData)(0x3039U) 
                                           + vlSelf->tb_Question5__DOT__seed);
        ++(vlSymsp->__Vcoverage[46]);
    }
    ++(vlSymsp->__Vcoverage[47]);
    VL_WRITEF_NX("\n============================================\n=============== TEST SUMMARY ===============\nTotal test cases : %0d\nPassed            : %0d\nFailed            : %0d\n",0,
                 32,vlSelf->tb_Question5__DOT__test_count,
                 32,vlSelf->tb_Question5__DOT__test_pass,
                 32,(vlSelf->tb_Question5__DOT__test_count 
                     - vlSelf->tb_Question5__DOT__test_pass));
    vlSelf->tb_Question5__DOT__unnamedblk1__DOT__pass_rate 
        = ((0U == vlSelf->tb_Question5__DOT__test_count)
            ? 0.0 : ((100.0 * VL_ISTOR_D_I(32, vlSelf->tb_Question5__DOT__test_pass)) 
                     / VL_ISTOR_D_I(32, vlSelf->tb_Question5__DOT__test_count)));
    VL_WRITEF_NX("Pass rate         : %6.2f %%\n============================================\n\n",0,
                 64,vlSelf->tb_Question5__DOT__unnamedblk1__DOT__pass_rate);
    if ((0U == vlSelf->tb_Question5__DOT__errors)) {
        VL_WRITEF_NX("PASS: All tests succeeded.\n",0);
        VL_FINISH_MT("/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 211, "");
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        VL_WRITEF_NX("FAIL: %0d errors detected.\n[%0t] %%Fatal: tb_Question5.sv:214: Assertion failed in %Ntb_Question5.unnamedblk1\n",0,
                     32,vlSelf->tb_Question5__DOT__errors,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/noname/Documents/project_tiny/Ex3/03_test/Question5/tb_Question5.sv", 214, "");
    }
    ++(vlSymsp->__Vcoverage[49]);
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Question5___024root___dump_triggers__act(Vtb_Question5___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_Question5___024root___eval_triggers__act(Vtb_Question5___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk__1)));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk__1 
        = vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_Question5___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_Question5___024root___act_sequent__TOP__0(Vtb_Question5___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_10;
    tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_10 = 0;
    CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_10;
    tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_10 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_0;
    __VdfgRegularize_hd87f99a1_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_1;
    __VdfgRegularize_hd87f99a1_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_2;
    __VdfgRegularize_hd87f99a1_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_3;
    __VdfgRegularize_hd87f99a1_0_3 = 0;
    // Body
    if ((1U & (~ (IData)(vlSelf->tb_Question5__DOT__S1)))) {
        if ((1U & (~ (IData)(vlSelf->tb_Question5__DOT__S0)))) {
            ++(vlSymsp->__Vcoverage[75]);
        }
        if (vlSelf->tb_Question5__DOT__S0) {
            ++(vlSymsp->__Vcoverage[76]);
        }
    }
    if (vlSelf->tb_Question5__DOT__S1) {
        if (vlSelf->tb_Question5__DOT__S0) {
            ++(vlSymsp->__Vcoverage[78]);
            vlSelf->tb_Question5__DOT__dut__DOT__Op2 
                = (0xffU & (~ (IData)(vlSelf->tb_Question5__DOT__B)));
        } else {
            vlSelf->tb_Question5__DOT__dut__DOT__Op2 
                = (0xffU & 0U);
        }
        if ((1U & (~ (IData)(vlSelf->tb_Question5__DOT__S0)))) {
            ++(vlSymsp->__Vcoverage[77]);
        }
    } else {
        vlSelf->tb_Question5__DOT__dut__DOT__Op2 = 
            (0xffU & ((IData)(vlSelf->tb_Question5__DOT__S0)
                       ? 0U : (IData)(vlSelf->tb_Question5__DOT__B)));
    }
    if (((IData)(vlSelf->tb_Question5__DOT__S1) ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__S1))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->tb_Question5__DOT____Vtogcov__S1 = vlSelf->tb_Question5__DOT__S1;
    }
    if (((IData)(vlSelf->tb_Question5__DOT__S0) ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__S0))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->tb_Question5__DOT____Vtogcov__S0 = vlSelf->tb_Question5__DOT__S0;
    }
    if (((IData)(vlSelf->tb_Question5__DOT__Cin) ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__Cin))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->tb_Question5__DOT____Vtogcov__Cin = vlSelf->tb_Question5__DOT__Cin;
    }
    if ((1U & ((IData)(vlSelf->tb_Question5__DOT__A) 
               ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->tb_Question5__DOT____Vtogcov__A = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__A)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question5__DOT__A) 
               ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->tb_Question5__DOT____Vtogcov__A = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__A)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question5__DOT__A) 
               ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->tb_Question5__DOT____Vtogcov__A = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__A)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question5__DOT__A) 
               ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->tb_Question5__DOT____Vtogcov__A = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__A)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_Question5__DOT__A) 
                  ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->tb_Question5__DOT____Vtogcov__A = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__A)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_Question5__DOT__A) 
                  ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->tb_Question5__DOT____Vtogcov__A = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)) 
                                                   | (0x20U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__A)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_Question5__DOT__A) 
                  ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->tb_Question5__DOT____Vtogcov__A = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)) 
                                                   | (0x40U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__A)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_Question5__DOT__A) 
                  ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->tb_Question5__DOT____Vtogcov__A = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)) 
                                                   | (0x80U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__A)));
    }
    if ((1U & ((IData)(vlSelf->tb_Question5__DOT__B) 
               ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->tb_Question5__DOT____Vtogcov__B = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__B)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question5__DOT__B) 
               ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->tb_Question5__DOT____Vtogcov__B = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__B)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question5__DOT__B) 
               ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->tb_Question5__DOT____Vtogcov__B = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__B)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question5__DOT__B) 
               ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->tb_Question5__DOT____Vtogcov__B = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__B)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_Question5__DOT__B) 
                  ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->tb_Question5__DOT____Vtogcov__B = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__B)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_Question5__DOT__B) 
                  ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->tb_Question5__DOT____Vtogcov__B = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)) 
                                                   | (0x20U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__B)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_Question5__DOT__B) 
                  ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->tb_Question5__DOT____Vtogcov__B = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)) 
                                                   | (0x40U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__B)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_Question5__DOT__B) 
                  ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->tb_Question5__DOT____Vtogcov__B = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)) 
                                                   | (0x80U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__B)));
    }
    if ((1U & ((~ (IData)(vlSelf->tb_Question5__DOT__B)) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp)))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp 
            = ((0xfeU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp)) 
               | (1U & (~ (IData)(vlSelf->tb_Question5__DOT__B))));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                   >> 1U)) ^ ((IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp) 
                              >> 1U)))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp 
            = ((0xfdU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp)) 
               | (2U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                            >> 1U)) << 1U)));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                   >> 2U)) ^ ((IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp) 
                              >> 2U)))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp 
            = ((0xfbU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp)) 
               | (4U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                            >> 2U)) << 2U)));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                   >> 3U)) ^ ((IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp) 
                              >> 3U)))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp 
            = ((0xf7U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp)) 
               | (8U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                            >> 3U)) << 3U)));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                   >> 4U)) ^ ((IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp) 
                              >> 4U)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp 
            = ((0xefU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp)) 
               | (0x10U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                               >> 4U)) << 4U)));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                   >> 5U)) ^ ((IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp) 
                              >> 5U)))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp 
            = ((0xdfU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp)) 
               | (0x20U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                               >> 5U)) << 5U)));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                   >> 6U)) ^ ((IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp) 
                              >> 6U)))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp 
            = ((0xbfU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp)) 
               | (0x40U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                               >> 6U)) << 6U)));
    }
    if ((1U ^ (((IData)(vlSelf->tb_Question5__DOT__B) 
                ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp)) 
               >> 7U))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp 
            = ((0x7fU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp)) 
               | (0x80U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                               >> 7U)) << 7U)));
    }
    vlSelf->tb_Question5__DOT__dut__DOT__sel_op1 = 
        ((~ (IData)(vlSelf->tb_Question5__DOT__S0)) 
         & (IData)(vlSelf->tb_Question5__DOT__S1));
    if ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2 
            = ((0xfeU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2)) 
               | (1U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2 
            = ((0xfdU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2)) 
               | (2U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2 
            = ((0xfbU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2)) 
               | (4U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2 
            = ((0xf7U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2)) 
               | (8U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2) 
                  ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2)))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2 
            = ((0xefU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2)) 
               | (0x10U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2) 
                  ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2 
            = ((0xdfU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2)) 
               | (0x20U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2) 
                  ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2)))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2 
            = ((0xbfU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2)) 
               | (0x40U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2) 
                  ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2)))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2 
            = ((0x7fU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op2)) 
               | (0x80U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2)));
    }
    if (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__sel_op1) 
         ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__sel_op1))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__sel_op1 
            = vlSelf->tb_Question5__DOT__dut__DOT__sel_op1;
    }
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__0__KET____DOT__u4__A 
        = ((8U & (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__sel_op1)
                    ? (~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                          >> 3U)) : ((IData)(vlSelf->tb_Question5__DOT__A) 
                                     >> 3U)) << 3U)) 
           | ((4U & (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__sel_op1)
                       ? (~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                             >> 2U)) : ((IData)(vlSelf->tb_Question5__DOT__A) 
                                        >> 2U)) << 2U)) 
              | ((2U & (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__sel_op1)
                          ? (~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                                >> 1U)) : ((IData)(vlSelf->tb_Question5__DOT__A) 
                                           >> 1U)) 
                        << 1U)) | (1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__sel_op1)
                                          ? (~ (IData)(vlSelf->tb_Question5__DOT__B))
                                          : (IData)(vlSelf->tb_Question5__DOT__A))))));
    if (vlSelf->tb_Question5__DOT__dut__DOT__sel_op1) {
        __VdfgRegularize_hd87f99a1_0_0 = (1U & (~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                                                   >> 7U)));
        __VdfgRegularize_hd87f99a1_0_1 = (1U & (~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                                                   >> 6U)));
        __VdfgRegularize_hd87f99a1_0_2 = (1U & (~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                                                   >> 5U)));
        __VdfgRegularize_hd87f99a1_0_3 = (1U & (~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                                                   >> 4U)));
    } else {
        __VdfgRegularize_hd87f99a1_0_0 = (1U & ((IData)(vlSelf->tb_Question5__DOT__A) 
                                                >> 7U));
        __VdfgRegularize_hd87f99a1_0_1 = (1U & ((IData)(vlSelf->tb_Question5__DOT__A) 
                                                >> 6U));
        __VdfgRegularize_hd87f99a1_0_2 = (1U & ((IData)(vlSelf->tb_Question5__DOT__A) 
                                                >> 5U));
        __VdfgRegularize_hd87f99a1_0_3 = (1U & ((IData)(vlSelf->tb_Question5__DOT__A) 
                                                >> 4U));
    }
    if ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__0__KET____DOT__u4__A) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__A 
            = ((0xeU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__A)) 
               | (1U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__0__KET____DOT__u4__A)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__0__KET____DOT__u4__A) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__A 
            = ((0xdU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__A)) 
               | (2U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__0__KET____DOT__u4__A)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__0__KET____DOT__u4__A) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__A 
            = ((0xbU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__A)) 
               | (4U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__0__KET____DOT__u4__A)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__0__KET____DOT__u4__A) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__A 
            = ((7U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__A)) 
               | (8U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__0__KET____DOT__u4__A)));
    }
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g 
        = ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__0__KET____DOT__u4__A) 
           & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2));
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p 
        = (0xfU & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__0__KET____DOT__u4__A) 
                   ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2)));
    vlSelf->tb_Question5__DOT__dut__DOT__Op1 = (((IData)(__VdfgRegularize_hd87f99a1_0_0) 
                                                 << 7U) 
                                                | (((IData)(__VdfgRegularize_hd87f99a1_0_1) 
                                                    << 6U) 
                                                   | (((IData)(__VdfgRegularize_hd87f99a1_0_2) 
                                                       << 5U) 
                                                      | (((IData)(__VdfgRegularize_hd87f99a1_0_3) 
                                                          << 4U) 
                                                         | (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__0__KET____DOT__u4__A)))));
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__1__KET____DOT__u4__A 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_0) 
            << 3U) | (((IData)(__VdfgRegularize_hd87f99a1_0_1) 
                       << 2U) | (((IData)(__VdfgRegularize_hd87f99a1_0_2) 
                                  << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_3))));
    if ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__g 
            = ((0xeU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__g)) 
               | (1U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__g 
            = ((0xdU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__g)) 
               | (2U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__g 
            = ((0xbU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__g)) 
               | (4U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__g 
            = ((7U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__g)) 
               | (8U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g)));
    }
    if ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__p 
            = ((0xeU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__p)) 
               | (1U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__p 
            = ((0xdU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__p)) 
               | (2U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__p 
            = ((0xbU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__p)) 
               | (4U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__p 
            = ((7U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__p)) 
               | (8U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p)));
    }
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_5 
        = (IData)((3U == (3U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p))));
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_8 
        = (IData)((6U == (6U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p))));
    tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_10 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p))));
    if ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op1) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1)))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1 
            = ((0xfeU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1)) 
               | (1U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op1)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op1) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1)))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1 
            = ((0xfdU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1)) 
               | (2U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op1)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op1) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1)))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1 
            = ((0xfbU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1)) 
               | (4U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op1)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op1) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1)))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1 
            = ((0xf7U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1)) 
               | (8U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op1)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op1) 
                  ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1)))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1 
            = ((0xefU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1)) 
               | (0x10U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op1)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op1) 
                  ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1)))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1 
            = ((0xdfU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1)) 
               | (0x20U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op1)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op1) 
                  ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1)))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1 
            = ((0xbfU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1)) 
               | (0x40U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op1)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op1) 
                  ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1 
            = ((0x7fU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__Op1)) 
               | (0x80U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op1)));
    }
    if ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__1__KET____DOT__u4__A) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__A 
            = ((0xeU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__A)) 
               | (1U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__1__KET____DOT__u4__A)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__1__KET____DOT__u4__A) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__A 
            = ((0xdU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__A)) 
               | (2U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__1__KET____DOT__u4__A)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__1__KET____DOT__u4__A) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__A 
            = ((0xbU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__A)) 
               | (4U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__1__KET____DOT__u4__A)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__1__KET____DOT__u4__A) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__A 
            = ((7U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__A)) 
               | (8U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__1__KET____DOT__u4__A)));
    }
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g 
        = ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__1__KET____DOT__u4__A) 
           & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2) 
              >> 4U));
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p 
        = (0xfU & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__1__KET____DOT__u4__A) 
                   ^ ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2) 
                      >> 4U)));
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Pblk 
        = ((IData)(tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_10) 
           & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_5));
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Gblk 
        = (1U & (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g) 
                  >> 3U) | ((((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g) 
                              >> 2U) & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p) 
                                        >> 3U)) | (
                                                   (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g) 
                                                     >> 1U) 
                                                    & (IData)(tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_10)) 
                                                   | ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g) 
                                                      & (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p) 
                                                          >> 3U) 
                                                         & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_8)))))));
    if ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__g 
            = ((0xeU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__g)) 
               | (1U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__g 
            = ((0xdU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__g)) 
               | (2U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__g 
            = ((0xbU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__g)) 
               | (4U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__g 
            = ((7U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__g)) 
               | (8U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g)));
    }
    if ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__p 
            = ((0xeU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__p)) 
               | (1U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__p 
            = ((0xdU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__p)) 
               | (2U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__p 
            = ((0xbU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__p)) 
               | (4U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__p 
            = ((7U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__p)) 
               | (8U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p)));
    }
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_5 
        = (IData)((3U == (3U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p))));
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_8 
        = (IData)((6U == (6U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p))));
    tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_10 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p))));
    if (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Pblk) 
         ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__Pblk))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__Pblk 
            = vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Pblk;
    }
    if (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Gblk) 
         ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__Gblk))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__Gblk 
            = vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Gblk;
    }
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Pblk 
        = ((IData)(tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_10) 
           & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_5));
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Gblk 
        = (1U & (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g) 
                  >> 3U) | ((((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g) 
                              >> 2U) & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p) 
                                        >> 3U)) | (
                                                   (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g) 
                                                     >> 1U) 
                                                    & (IData)(tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_10)) 
                                                   | ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g) 
                                                      & (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p) 
                                                          >> 3U) 
                                                         & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_8)))))));
    if (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Pblk) 
         ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__Pblk))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__Pblk 
            = vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Pblk;
    }
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Pblk 
        = (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Pblk) 
            << 1U) | (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Pblk));
    if (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Gblk) 
         ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__Gblk))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__Gblk 
            = vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Gblk;
    }
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Gblk 
        = (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Gblk) 
            << 1U) | (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Gblk));
    if ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Pblk) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Pblk)))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Pblk 
            = ((2U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Pblk)) 
               | (1U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Pblk)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Pblk) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Pblk)))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Pblk 
            = ((1U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Pblk)) 
               | (2U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Pblk)));
    }
    if ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Gblk) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Gblk)))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Gblk 
            = ((2U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Gblk)) 
               | (1U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Gblk)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Gblk) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Gblk)))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Gblk 
            = ((1U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Gblk)) 
               | (2U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Gblk)));
    }
}

VL_INLINE_OPT void Vtb_Question5___024root___act_comb__TOP__0(Vtb_Question5___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_2;
    tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_2 = 0;
    CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_2;
    tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_2 = 0;
    // Body
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk 
        = ((4U & (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Gblk) 
                   | ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Pblk) 
                      & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk))) 
                  << 1U)) | ((2U & (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Gblk) 
                                     | ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Pblk) 
                                        & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk))) 
                                    << 1U)) | (IData)(vlSelf->tb_Question5__DOT__Cin)));
    if ((IData)((((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                  >> 2U) ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__Cout)))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->tb_Question5__DOT____Vtogcov__Cout 
            = (1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                     >> 2U));
    }
    if ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Cblk)))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Cblk 
            = ((6U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Cblk)) 
               | (1U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Cblk)))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Cblk 
            = ((5U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Cblk)) 
               | (2U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk)));
    }
    if ((((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Gblk) 
          | ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Pblk) 
             & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk))) 
         ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__cout 
            = ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Gblk) 
               | ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Pblk) 
                  & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk)));
    }
    if ((((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Gblk) 
          | ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Pblk) 
             & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                >> 1U))) ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__cout 
            = ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Gblk) 
               | ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Pblk) 
                  & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                     >> 1U)));
    }
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c2 
        = (1U & (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g) 
                  >> 1U) | (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g) 
                             & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p) 
                                >> 1U)) | ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_5) 
                                           & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk)))));
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c2 
        = (1U & (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g) 
                  >> 1U) | (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g) 
                             & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p) 
                                >> 1U)) | ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_5) 
                                           & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                              >> 1U)))));
    tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_2 
        = (1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p) 
                 & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk)));
    tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_2 
        = (1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p) 
                 & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                    >> 1U)));
    if (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c2) 
         ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__c2))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__c2 
            = vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c2;
    }
    if (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c2) 
         ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__c2))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__c2 
            = vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c2;
    }
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c1 
        = (1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g) 
                 | (IData)(tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_2)));
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c3 
        = (1U & (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g) 
                  >> 2U) | ((((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g) 
                              >> 1U) & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p) 
                                        >> 2U)) | (
                                                   ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g) 
                                                    & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_8)) 
                                                   | ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_8) 
                                                      & (IData)(tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_2))))));
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c1 
        = (1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g) 
                 | (IData)(tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_2)));
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c3 
        = (1U & (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g) 
                  >> 2U) | ((((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g) 
                              >> 1U) & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p) 
                                        >> 2U)) | (
                                                   ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g) 
                                                    & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_8)) 
                                                   | ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_8) 
                                                      & (IData)(tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_2))))));
    if (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c1) 
         ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__c1))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__c1 
            = vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c1;
    }
    if (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c3) 
         ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__c3))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__c3 
            = vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c3;
    }
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__sum 
        = (((IData)((((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p) 
                      >> 3U) ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c3))) 
            << 3U) | ((4U & ((0xfffffffcU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p)) 
                             ^ ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c2) 
                                << 2U))) | ((2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p)) 
                                                   ^ 
                                                   ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c1) 
                                                    << 1U))) 
                                            | (1U & 
                                               ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p) 
                                                ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk))))));
    if (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c1) 
         ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__c1))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__c1 
            = vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c1;
    }
    if (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c3) 
         ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__c3))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__c3 
            = vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c3;
    }
    vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__sum 
        = (((IData)((((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p) 
                      >> 3U) ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c3))) 
            << 3U) | ((4U & ((0xfffffffcU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p)) 
                             ^ ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c2) 
                                << 2U))) | ((2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p)) 
                                                   ^ 
                                                   ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c1) 
                                                    << 1U))) 
                                            | (1U & 
                                               ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p) 
                                                ^ ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                                   >> 1U))))));
    if ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__sum) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__sum 
            = ((0xeU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__sum)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__sum) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__sum 
            = ((0xdU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__sum)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__sum) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__sum 
            = ((0xbU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__sum)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__sum) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__sum 
            = ((7U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__sum)));
    }
    if ((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__sum) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__sum 
            = ((0xeU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__sum)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__sum) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__sum 
            = ((0xdU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__sum)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__sum) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__sum 
            = ((0xbU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__sum)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__sum) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__sum 
            = ((7U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__sum)));
    }
    vlSelf->tb_Question5__DOT__F = (((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__sum) 
                                     << 4U) | (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__sum));
    if ((1U & ((IData)(vlSelf->tb_Question5__DOT__F) 
               ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->tb_Question5__DOT____Vtogcov__F = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__F)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__F)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question5__DOT__F) 
               ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->tb_Question5__DOT____Vtogcov__F = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__F)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__F)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question5__DOT__F) 
               ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->tb_Question5__DOT____Vtogcov__F = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__F)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__F)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question5__DOT__F) 
               ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->tb_Question5__DOT____Vtogcov__F = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__F)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__F)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_Question5__DOT__F) 
                  ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->tb_Question5__DOT____Vtogcov__F = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__F)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__F)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_Question5__DOT__F) 
                  ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->tb_Question5__DOT____Vtogcov__F = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__F)) 
                                                   | (0x20U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__F)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_Question5__DOT__F) 
                  ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->tb_Question5__DOT____Vtogcov__F = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__F)) 
                                                   | (0x40U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__F)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_Question5__DOT__F) 
                  ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->tb_Question5__DOT____Vtogcov__F = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__F)) 
                                                   | (0x80U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__F)));
    }
}

VL_INLINE_OPT void Vtb_Question5___024root___nba_sequent__TOP__0(Vtb_Question5___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root___nba_sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->tb_Question5__DOT__S1)))) {
        if ((1U & (~ (IData)(vlSelf->tb_Question5__DOT__S0)))) {
            ++(vlSymsp->__Vcoverage[75]);
        }
        if (vlSelf->tb_Question5__DOT__S0) {
            ++(vlSymsp->__Vcoverage[76]);
        }
    }
    if (vlSelf->tb_Question5__DOT__S1) {
        if (vlSelf->tb_Question5__DOT__S0) {
            ++(vlSymsp->__Vcoverage[78]);
        }
        if ((1U & (~ (IData)(vlSelf->tb_Question5__DOT__S0)))) {
            ++(vlSymsp->__Vcoverage[77]);
        }
    }
    if (((IData)(vlSelf->tb_Question5__DOT__S1) ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__S1))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->tb_Question5__DOT____Vtogcov__S1 = vlSelf->tb_Question5__DOT__S1;
    }
    if (((IData)(vlSelf->tb_Question5__DOT__S0) ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__S0))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->tb_Question5__DOT____Vtogcov__S0 = vlSelf->tb_Question5__DOT__S0;
    }
    if (((IData)(vlSelf->tb_Question5__DOT__Cin) ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__Cin))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->tb_Question5__DOT____Vtogcov__Cin = vlSelf->tb_Question5__DOT__Cin;
    }
    if ((1U & ((IData)(vlSelf->tb_Question5__DOT__A) 
               ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->tb_Question5__DOT____Vtogcov__A = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__A)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question5__DOT__A) 
               ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->tb_Question5__DOT____Vtogcov__A = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__A)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question5__DOT__A) 
               ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->tb_Question5__DOT____Vtogcov__A = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__A)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question5__DOT__A) 
               ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->tb_Question5__DOT____Vtogcov__A = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__A)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_Question5__DOT__A) 
                  ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->tb_Question5__DOT____Vtogcov__A = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__A)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_Question5__DOT__A) 
                  ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->tb_Question5__DOT____Vtogcov__A = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)) 
                                                   | (0x20U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__A)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_Question5__DOT__A) 
                  ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->tb_Question5__DOT____Vtogcov__A = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)) 
                                                   | (0x40U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__A)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_Question5__DOT__A) 
                  ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->tb_Question5__DOT____Vtogcov__A = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__A)) 
                                                   | (0x80U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__A)));
    }
    if ((1U & ((IData)(vlSelf->tb_Question5__DOT__B) 
               ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->tb_Question5__DOT____Vtogcov__B = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__B)));
    }
    if ((2U & ((IData)(vlSelf->tb_Question5__DOT__B) 
               ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->tb_Question5__DOT____Vtogcov__B = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__B)));
    }
    if ((4U & ((IData)(vlSelf->tb_Question5__DOT__B) 
               ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->tb_Question5__DOT____Vtogcov__B = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__B)));
    }
    if ((8U & ((IData)(vlSelf->tb_Question5__DOT__B) 
               ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->tb_Question5__DOT____Vtogcov__B = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__B)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_Question5__DOT__B) 
                  ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->tb_Question5__DOT____Vtogcov__B = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__B)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_Question5__DOT__B) 
                  ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->tb_Question5__DOT____Vtogcov__B = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)) 
                                                   | (0x20U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__B)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_Question5__DOT__B) 
                  ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->tb_Question5__DOT____Vtogcov__B = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)) 
                                                   | (0x40U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__B)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_Question5__DOT__B) 
                  ^ (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->tb_Question5__DOT____Vtogcov__B = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->tb_Question5__DOT____Vtogcov__B)) 
                                                   | (0x80U 
                                                      & (IData)(vlSelf->tb_Question5__DOT__B)));
    }
    if ((1U & ((~ (IData)(vlSelf->tb_Question5__DOT__B)) 
               ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp)))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp 
            = ((0xfeU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp)) 
               | (1U & (~ (IData)(vlSelf->tb_Question5__DOT__B))));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                   >> 1U)) ^ ((IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp) 
                              >> 1U)))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp 
            = ((0xfdU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp)) 
               | (2U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                            >> 1U)) << 1U)));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                   >> 2U)) ^ ((IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp) 
                              >> 2U)))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp 
            = ((0xfbU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp)) 
               | (4U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                            >> 2U)) << 2U)));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                   >> 3U)) ^ ((IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp) 
                              >> 3U)))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp 
            = ((0xf7U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp)) 
               | (8U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                            >> 3U)) << 3U)));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                   >> 4U)) ^ ((IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp) 
                              >> 4U)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp 
            = ((0xefU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp)) 
               | (0x10U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                               >> 4U)) << 4U)));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                   >> 5U)) ^ ((IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp) 
                              >> 5U)))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp 
            = ((0xdfU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp)) 
               | (0x20U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                               >> 5U)) << 5U)));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                   >> 6U)) ^ ((IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp) 
                              >> 6U)))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp 
            = ((0xbfU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp)) 
               | (0x40U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                               >> 6U)) << 6U)));
    }
    if ((1U ^ (((IData)(vlSelf->tb_Question5__DOT__B) 
                ^ (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp)) 
               >> 7U))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp 
            = ((0x7fU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT____Vtogcov__B_comp)) 
               | (0x80U & ((~ ((IData)(vlSelf->tb_Question5__DOT__B) 
                               >> 7U)) << 7U)));
    }
}
