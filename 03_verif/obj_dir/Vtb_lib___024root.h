// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_lib.h for the primary calling header

#ifndef VERILATED_VTB_LIB___024ROOT_H_
#define VERILATED_VTB_LIB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_lib__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_lib___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_top__DOT__i_clk;
        CData/*0:0*/ tb_top__DOT__i_rst_n;
        VL_IN8(i_data_a,7,0);
        VL_IN8(i_data_b,7,0);
        VL_OUT8(o_less,0,0);
        CData/*0:0*/ tb_top__DOT__w_start;
        CData/*0:0*/ tb_top__DOT__w_finish;
        CData/*1:0*/ tb_top__DOT__DRIVER__DOT__cur_state;
        CData/*1:0*/ tb_top__DOT__DRIVER__DOT__next_state;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__w_compare;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__w_compare;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__w_compare;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__w_compare;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__w_compare;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__w_compare;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__w_compare;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__w_compare;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__w_compare;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__w_compare;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_0;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_3;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_0;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_2;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_0;
    };
    struct {
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0;
        CData/*7:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_1;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__w_compare;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__w_compare;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__w_compare;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_top__DOT__SCOREBOARD__DOT__test_complete;
        CData/*0:0*/ COMP_parallel_prefix_binary__DOT__w_max_0_0;
        CData/*0:0*/ COMP_parallel_prefix_binary__DOT__w_min_0_0;
        CData/*0:0*/ COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2;
        CData/*0:0*/ COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3;
        CData/*0:0*/ COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6;
        CData/*0:0*/ COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2;
        CData/*0:0*/ COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3;
        CData/*0:0*/ COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6;
        CData/*0:0*/ COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2;
        CData/*7:0*/ __Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__temp;
        CData/*0:0*/ __Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_complete__v0;
        CData/*0:0*/ __Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_pass__v0;
        CData/*0:0*/ __Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_count__v0;
        CData/*0:0*/ __Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_count__v1;
        CData/*0:0*/ __Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_pass__v1;
        CData/*0:0*/ __Vdlyvset__tb_top__DOT__SCOREBOARD__DOT__test_complete__v1;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__i_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__i_rst_n__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ tb_top__DOT__DRIVER__DOT__counter;
        IData/*31:0*/ tb_top__DOT__SCOREBOARD__DOT__test_count;
        IData/*31:0*/ tb_top__DOT__SCOREBOARD__DOT__test_pass;
        IData/*31:0*/ __Vdlyvval__tb_top__DOT__SCOREBOARD__DOT__test_pass__v0;
        IData/*31:0*/ __Vdlyvval__tb_top__DOT__SCOREBOARD__DOT__test_count__v0;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ tb_top__DOT__w_i_data;
        QData/*63:0*/ tb_top__DOT__w_o_data;
        QData/*63:0*/ tb_top__DOT__SCOREBOARD__DOT__expected_sorted;
        QData/*63:0*/ __Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__Vfuncout;
        VlUnpacked<CData/*7:0*/, 8> tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data;
        VlUnpacked<CData/*7:0*/, 8> tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data;
        VlUnpacked<CData/*7:0*/, 8> tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted;
        VlUnpacked<CData/*7:0*/, 8> __Vfunc_tb_top__DOT__SCOREBOARD__DOT__f_ARR_sorted__3__arr;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h07ac3bfd__0;
    VlTriggerScheduler __VtrigSched_h45b4f461__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_lib__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_lib___024root(Vtb_lib__Syms* symsp, const char* v__name);
    ~Vtb_lib___024root();
    VL_UNCOPYABLE(Vtb_lib___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
