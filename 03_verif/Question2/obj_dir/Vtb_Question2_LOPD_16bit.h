// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_Question2.h for the primary calling header

#ifndef VERILATED_VTB_QUESTION2_LOPD_16BIT_H_
#define VERILATED_VTB_QUESTION2_LOPD_16BIT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtb_Question2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_Question2_LOPD_16bit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(o_pos_one,3,0);
    VL_OUT8(o_zero_flag,0,0);
    CData/*2:0*/ __PVT__w_pos_one_0;
    CData/*0:0*/ __PVT__w_zero_flag_0;
    CData/*2:0*/ __PVT__w_pos_one_1;
    CData/*0:0*/ __PVT__w_zero_flag_1;
    CData/*3:0*/ __Vtogcov__o_pos_one;
    CData/*0:0*/ __Vtogcov__o_zero_flag;
    CData/*2:0*/ __Vtogcov__w_pos_one_0;
    CData/*0:0*/ __Vtogcov__w_zero_flag_0;
    CData/*2:0*/ __Vtogcov__w_pos_one_1;
    CData/*0:0*/ __Vtogcov__w_zero_flag_1;
    CData/*0:0*/ __PVT__LOPD_8bit_unit_0__DOT__w_zero_flag_0;
    CData/*1:0*/ __PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    CData/*1:0*/ __PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    CData/*0:0*/ LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_0;
    CData/*1:0*/ LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0;
    CData/*0:0*/ LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_1;
    CData/*1:0*/ LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1;
    CData/*0:0*/ __PVT__LOPD_8bit_unit_1__DOT__w_zero_flag_0;
    CData/*1:0*/ __PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    CData/*1:0*/ __PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    CData/*0:0*/ LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_0;
    CData/*1:0*/ LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0;
    CData/*0:0*/ LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_1;
    CData/*1:0*/ LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1;
    CData/*0:0*/ __VdfgRegularize_h1f2f0f73_0_2;
    CData/*0:0*/ __VdfgRegularize_h1f2f0f73_0_5;
    CData/*0:0*/ __VdfgRegularize_h1f2f0f73_0_6;
    CData/*0:0*/ __VdfgRegularize_h1f2f0f73_0_7;
    CData/*0:0*/ __VdfgRegularize_h1f2f0f73_0_8;
    CData/*0:0*/ __VdfgRegularize_h1f2f0f73_0_9;
    VL_IN16(i_data,15,0);
    SData/*15:0*/ __Vtogcov__i_data;

    // INTERNAL VARIABLES
    Vtb_Question2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_Question2_LOPD_16bit(Vtb_Question2__Syms* symsp, const char* v__name);
    ~Vtb_Question2_LOPD_16bit();
    VL_UNCOPYABLE(Vtb_Question2_LOPD_16bit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
