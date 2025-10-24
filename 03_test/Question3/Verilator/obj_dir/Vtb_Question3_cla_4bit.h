// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_Question3.h for the primary calling header

#ifndef VERILATED_VTB_QUESTION3_CLA_4BIT_H_
#define VERILATED_VTB_QUESTION3_CLA_4BIT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtb_Question3__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_Question3_cla_4bit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(A,3,0);
    VL_IN8(B,3,0);
    VL_IN8(Cin,0,0);
    VL_OUT8(Gblk,0,0);
    VL_OUT8(Pblk,0,0);
    VL_OUT8(S,3,0);
    VL_OUT8(__PVT__Cout,0,0);
    CData/*3:0*/ __PVT__p;
    CData/*3:0*/ __PVT__g;
    CData/*0:0*/ __PVT__c1;
    CData/*0:0*/ __PVT__c2;
    CData/*0:0*/ __PVT__c3;
    CData/*0:0*/ __PVT__or3;
    CData/*3:0*/ __Vtogcov__A;
    CData/*3:0*/ __Vtogcov__B;
    CData/*0:0*/ __Vtogcov__Cin;
    CData/*0:0*/ __Vtogcov__Gblk;
    CData/*0:0*/ __Vtogcov__Pblk;
    CData/*3:0*/ __Vtogcov__S;
    CData/*0:0*/ __Vtogcov__Cout;
    CData/*3:0*/ __Vtogcov__p;
    CData/*3:0*/ __Vtogcov__g;
    CData/*0:0*/ __Vtogcov__c1;
    CData/*0:0*/ __Vtogcov__c2;
    CData/*0:0*/ __Vtogcov__c3;
    CData/*0:0*/ __Vtogcov__or3;
    CData/*0:0*/ __VdfgRegularize_hf0430a2d_0_5;
    CData/*0:0*/ __VdfgRegularize_hf0430a2d_0_6;
    CData/*0:0*/ __VdfgRegularize_hf0430a2d_0_9;

    // INTERNAL VARIABLES
    Vtb_Question3__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_Question3_cla_4bit(Vtb_Question3__Syms* symsp, const char* v__name);
    ~Vtb_Question3_cla_4bit();
    VL_UNCOPYABLE(Vtb_Question3_cla_4bit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
