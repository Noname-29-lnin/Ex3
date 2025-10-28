// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_Question5.h for the primary calling header

#ifndef VERILATED_VTB_QUESTION5___024ROOT_H_
#define VERILATED_VTB_QUESTION5___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtb_Question5__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_Question5___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*7:0*/ tb_Question5__DOT__A;
        CData/*7:0*/ tb_Question5__DOT__B;
        CData/*0:0*/ tb_Question5__DOT__S1;
        CData/*0:0*/ tb_Question5__DOT__S0;
        CData/*0:0*/ tb_Question5__DOT__Cin;
        CData/*7:0*/ tb_Question5__DOT__F;
        CData/*7:0*/ tb_Question5__DOT____Vtogcov__A;
        CData/*7:0*/ tb_Question5__DOT____Vtogcov__B;
        CData/*0:0*/ tb_Question5__DOT____Vtogcov__S1;
        CData/*0:0*/ tb_Question5__DOT____Vtogcov__S0;
        CData/*0:0*/ tb_Question5__DOT____Vtogcov__Cin;
        CData/*7:0*/ tb_Question5__DOT____Vtogcov__F;
        CData/*0:0*/ tb_Question5__DOT____Vtogcov__Cout;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__sel_op1;
        CData/*7:0*/ tb_Question5__DOT__dut__DOT__Op1;
        CData/*7:0*/ tb_Question5__DOT__dut__DOT__Op2;
        CData/*7:0*/ tb_Question5__DOT__dut__DOT____Vtogcov__B_comp;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT____Vtogcov__sel_op1;
        CData/*7:0*/ tb_Question5__DOT__dut__DOT____Vtogcov__Op1;
        CData/*7:0*/ tb_Question5__DOT__dut__DOT____Vtogcov__Op2;
        CData/*1:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__Gblk;
        CData/*1:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__Pblk;
        CData/*2:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk;
        CData/*1:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Gblk;
        CData/*1:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Pblk;
        CData/*2:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT____Vtogcov__Cblk;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Pblk;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Gblk;
        CData/*3:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__sum;
        CData/*3:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__0__KET____DOT__u4__A;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Pblk;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Gblk;
        CData/*3:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__sum;
        CData/*3:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__1__KET____DOT__u4__A;
        CData/*3:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g;
        CData/*3:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c1;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c2;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c3;
        CData/*3:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__A;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__cout;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__Pblk;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__Gblk;
        CData/*3:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__sum;
        CData/*3:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__g;
        CData/*3:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__p;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__c1;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__c2;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____Vtogcov__c3;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_5;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_8;
        CData/*3:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g;
        CData/*3:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c1;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c2;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c3;
        CData/*3:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__A;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__cout;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__Pblk;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__Gblk;
        CData/*3:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__sum;
        CData/*3:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__g;
        CData/*3:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__p;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__c1;
    };
    struct {
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__c2;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____Vtogcov__c3;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_5;
        CData/*0:0*/ tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT____VdfgRegularize_hf0430a2d_0_8;
        CData/*2:0*/ __Vtrigprevexpr___TOP__tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*2:0*/ __Vtrigprevexpr___TOP__tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk__1;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ tb_Question5__DOT__total_tests;
        IData/*31:0*/ tb_Question5__DOT__errors;
        IData/*31:0*/ tb_Question5__DOT__test_count;
        IData/*31:0*/ tb_Question5__DOT__test_pass;
        IData/*31:0*/ tb_Question5__DOT__seed;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    double tb_Question5__DOT__unnamedblk1__DOT__pass_rate;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_Question5__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_Question5___024root(Vtb_Question5__Syms* symsp, const char* v__name);
    ~Vtb_Question5___024root();
    VL_UNCOPYABLE(Vtb_Question5___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
