// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_Question6.h for the primary calling header

#ifndef VERILATED_VTB_QUESTION6_COMPARE_AND_SWAP_UNIT__I0_H_
#define VERILATED_VTB_QUESTION6_COMPARE_AND_SWAP_UNIT__I0_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_Question6__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_Question6_Compare_and_Swap_unit__I0 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_data_a,7,0);
    VL_IN8(i_data_b,7,0);
    VL_OUT8(o_data_max,7,0);
    VL_OUT8(o_data_min,7,0);
    CData/*0:0*/ __PVT__w_compare;
    CData/*0:0*/ __PVT__COMP_UNT__DOT__w_max_0_0;
    CData/*0:0*/ __PVT__COMP_UNT__DOT__w_min_0_0;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6;
    CData/*0:0*/ COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2;

    // INTERNAL VARIABLES
    Vtb_Question6__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_Question6_Compare_and_Swap_unit__I0(Vtb_Question6__Syms* symsp, const char* v__name);
    ~Vtb_Question6_Compare_and_Swap_unit__I0();
    VL_UNCOPYABLE(Vtb_Question6_Compare_and_Swap_unit__I0);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
