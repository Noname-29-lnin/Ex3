// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_Question6.h for the primary calling header

#ifndef VERILATED_VTB_QUESTION6___024ROOT_H_
#define VERILATED_VTB_QUESTION6___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_Question6__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_Question6___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_Question6__DOT__i_clk;
        CData/*0:0*/ tb_Question6__DOT__i_rst_n;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__w_compare;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__w_compare;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__w_compare;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__w_compare;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__w_compare;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__w_compare;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__w_compare;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__w_compare;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__w_compare;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__w_compare;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_0;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_3;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_0;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_2;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_0;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0;
        CData/*7:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_1;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__w_compare;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
    };
    struct {
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__w_compare;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__w_compare;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare;
        CData/*0:0*/ tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_Question6__DOT__i_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_Question6__DOT__i_rst_n__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ tb_Question6__DOT__k;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 8> tb_Question6__DOT__i_data;
        VlUnpacked<CData/*7:0*/, 8> tb_Question6__DOT__o_sorted;
        VlUnpacked<CData/*7:0*/, 8> tb_Question6__DOT__dut__DOT__t_o_sorted;
        VlUnpacked<CData/*7:0*/, 8> tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data;
        VlUnpacked<CData/*7:0*/, 8> tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data;
        VlUnpacked<CData/*7:0*/, 8> tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_Question6__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_Question6___024root(Vtb_Question6__Syms* symsp, const char* v__name);
    ~Vtb_Question6___024root();
    VL_UNCOPYABLE(Vtb_Question6___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
