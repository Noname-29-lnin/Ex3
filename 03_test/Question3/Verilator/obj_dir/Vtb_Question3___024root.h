// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_Question3.h for the primary calling header

#ifndef VERILATED_VTB_QUESTION3___024ROOT_H_
#define VERILATED_VTB_QUESTION3___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtb_Question3_cla_4bit;


class Vtb_Question3__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_Question3___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_Question3_cla_4bit* __PVT__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4;
    Vtb_Question3_cla_4bit* __PVT__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4;
    Vtb_Question3_cla_4bit* __PVT__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4;
    Vtb_Question3_cla_4bit* __PVT__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4;
    Vtb_Question3_cla_4bit* __PVT__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4;
    Vtb_Question3_cla_4bit* __PVT__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4;
    Vtb_Question3_cla_4bit* __PVT__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4;
    Vtb_Question3_cla_4bit* __PVT__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_Question3__DOT__clk;
    CData/*0:0*/ tb_Question3__DOT__rst_n;
    CData/*0:0*/ tb_Question3__DOT__Cin_tb;
    CData/*0:0*/ tb_Question3__DOT__Cout_tb;
    CData/*0:0*/ tb_Question3__DOT__run_test__Vstatic__tv_cin;
    CData/*0:0*/ tb_Question3__DOT____Vtogcov__clk;
    CData/*0:0*/ tb_Question3__DOT____Vtogcov__rst_n;
    CData/*0:0*/ tb_Question3__DOT____Vtogcov__Cin_tb;
    CData/*0:0*/ tb_Question3__DOT____Vtogcov__Cout_tb;
    CData/*0:0*/ tb_Question3__DOT__DUT__DOT__Cin_r;
    CData/*7:0*/ tb_Question3__DOT__DUT__DOT__Pblk;
    CData/*7:0*/ tb_Question3__DOT__DUT__DOT__Gblk;
    CData/*0:0*/ tb_Question3__DOT__DUT__DOT____Vtogcov__Cin_r;
    CData/*7:0*/ tb_Question3__DOT__DUT__DOT____Vtogcov__Pblk;
    CData/*7:0*/ tb_Question3__DOT__DUT__DOT____Vtogcov__Gblk;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_Question3__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_Question3__DOT__rst_n__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ tb_Question3__DOT__DUT__DOT__Cblk;
    SData/*8:0*/ tb_Question3__DOT__DUT__DOT____Vtogcov__Cblk;
    SData/*8:0*/ __Vtrigprevexpr___TOP__tb_Question3__DOT__DUT__DOT__Cblk__0;
    SData/*8:0*/ __Vtrigprevexpr___TOP__tb_Question3__DOT__DUT__DOT__Cblk__1;
    IData/*31:0*/ tb_Question3__DOT__A_tb;
    IData/*31:0*/ tb_Question3__DOT__B_tb;
    IData/*31:0*/ tb_Question3__DOT__Sum_tb;
    IData/*31:0*/ tb_Question3__DOT__pass_count;
    IData/*31:0*/ tb_Question3__DOT__fail_count;
    IData/*31:0*/ tb_Question3__DOT__run_test__Vstatic__idx;
    IData/*31:0*/ tb_Question3__DOT__run_test__Vstatic__tv_a;
    IData/*31:0*/ tb_Question3__DOT__run_test__Vstatic__tv_b;
    IData/*31:0*/ tb_Question3__DOT____Vtogcov__A_tb;
    IData/*31:0*/ tb_Question3__DOT____Vtogcov__B_tb;
    IData/*31:0*/ tb_Question3__DOT____Vtogcov__Sum_tb;
    IData/*31:0*/ tb_Question3__DOT__DUT__DOT__A_r;
    IData/*31:0*/ tb_Question3__DOT__DUT__DOT__B_r;
    IData/*31:0*/ tb_Question3__DOT__DUT__DOT__Sum_c;
    IData/*31:0*/ tb_Question3__DOT__DUT__DOT____Vtogcov__A_r;
    IData/*31:0*/ tb_Question3__DOT__DUT__DOT____Vtogcov__B_r;
    IData/*31:0*/ tb_Question3__DOT__DUT__DOT____Vtogcov__Sum_c;
    IData/*31:0*/ __VactIterCount;
    QData/*32:0*/ tb_Question3__DOT__run_test__Vstatic__expected;
    QData/*32:0*/ tb_Question3__DOT__run_test__Vstatic__got;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h67325541__0;
    VlTriggerScheduler __VtrigSched_hb4c71d24__0;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_Question3__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_Question3___024root(Vtb_Question3__Syms* symsp, const char* v__name);
    ~Vtb_Question3___024root();
    VL_UNCOPYABLE(Vtb_Question3___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
