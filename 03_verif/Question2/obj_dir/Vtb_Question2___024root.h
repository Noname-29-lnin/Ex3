// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_Question2.h for the primary calling header

#ifndef VERILATED_VTB_QUESTION2___024ROOT_H_
#define VERILATED_VTB_QUESTION2___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtb_Question2_LOPD_16bit;


class Vtb_Question2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_Question2___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_Question2_LOPD_16bit* __PVT__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB;
    Vtb_Question2_LOPD_16bit* __PVT__LOPD_32bit__DOT__LOPD_16bit_unit_0;
    Vtb_Question2_LOPD_16bit* __PVT__LOPD_32bit__DOT__LOPD_16bit_unit_1;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_Question2__DOT__i_clk;
        CData/*0:0*/ tb_Question2__DOT__i_rst_n;
        VL_OUT8(o_pos_one,4,0);
        VL_OUT8(o_zero_flag,0,0);
        CData/*4:0*/ tb_Question2__DOT__o_one_position;
        CData/*0:0*/ tb_Question2__DOT__o_zero_flag;
        CData/*0:0*/ tb_Question2__DOT____Vtogcov__i_clk;
        CData/*0:0*/ tb_Question2__DOT____Vtogcov__i_rst_n;
        CData/*4:0*/ tb_Question2__DOT____Vtogcov__o_one_position;
        CData/*0:0*/ tb_Question2__DOT____Vtogcov__o_zero_flag;
        CData/*4:0*/ tb_Question2__DOT__DUT__DOT__w_one_position;
        CData/*0:0*/ tb_Question2__DOT__DUT__DOT__w_zero_flag;
        CData/*4:0*/ tb_Question2__DOT__DUT__DOT____Vtogcov__w_one_position;
        CData/*0:0*/ tb_Question2__DOT__DUT__DOT____Vtogcov__w_zero_flag;
        CData/*2:0*/ tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_pos_one;
        CData/*0:0*/ tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_zero_flag;
        CData/*3:0*/ tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one;
        CData/*0:0*/ tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD16_o_zero_flag;
        CData/*2:0*/ tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one;
        CData/*0:0*/ tb_Question2__DOT__DUT__DOT__DUT__DOT____Vtogcov__LOPD8_o_zero_flag;
        CData/*0:0*/ tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0;
        CData/*1:0*/ tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0;
        CData/*1:0*/ tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1;
        CData/*0:0*/ tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_0;
        CData/*1:0*/ tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0;
        CData/*0:0*/ tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_1;
        CData/*1:0*/ tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1;
        CData/*4:0*/ LOPD_32bit__DOT____Vtogcov__o_pos_one;
        CData/*0:0*/ LOPD_32bit__DOT____Vtogcov__o_zero_flag;
        CData/*3:0*/ LOPD_32bit__DOT____Vtogcov__w_pos_one_0;
        CData/*0:0*/ LOPD_32bit__DOT____Vtogcov__w_zero_flag_0;
        CData/*3:0*/ LOPD_32bit__DOT____Vtogcov__w_pos_one_1;
        CData/*0:0*/ LOPD_32bit__DOT____Vtogcov__w_zero_flag_1;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_2_2;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_2_3;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_2_4;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1__1;
    };
    struct {
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__2;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__2;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__2;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__2;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0__2;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1__2;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0__2;
        CData/*1:0*/ __Vtrigprevexpr___TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1____PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1__2;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_Question2__DOT__i_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_Question2__DOT__i_rst_n__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        VL_IN(i_data,31,0);
        IData/*23:0*/ tb_Question2__DOT__i_addr;
        IData/*23:0*/ tb_Question2__DOT__i_data;
        IData/*23:0*/ tb_Question2__DOT__o_addr;
        IData/*31:0*/ tb_Question2__DOT__bit_pos;
        IData/*23:0*/ tb_Question2__DOT____Vtogcov__i_addr;
        IData/*23:0*/ tb_Question2__DOT____Vtogcov__i_data;
        IData/*23:0*/ tb_Question2__DOT____Vtogcov__o_addr;
        IData/*23:0*/ tb_Question2__DOT__DUT__DOT__w_o_addr;
        IData/*23:0*/ tb_Question2__DOT__DUT__DOT____Vtogcov__w_o_addr;
        IData/*31:0*/ LOPD_32bit__DOT____Vtogcov__i_data;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h7131ccb1__0;
    VlTriggerVec<15> __VstlTriggered;
    VlTriggerVec<9> __VicoTriggered;
    VlTriggerVec<17> __VactTriggered;
    VlTriggerVec<17> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_Question2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_Question2___024root(Vtb_Question2__Syms* symsp, const char* v__name);
    ~Vtb_Question2___024root();
    VL_UNCOPYABLE(Vtb_Question2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
