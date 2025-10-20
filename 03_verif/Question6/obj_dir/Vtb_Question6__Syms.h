// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_QUESTION6__SYMS_H_
#define VERILATED_VTB_QUESTION6__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_Question6.h"

// INCLUDE MODULE CLASSES
#include "Vtb_Question6___024root.h"
#include "Vtb_Question6_Compare_and_Swap_unit__I0.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_Question6__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_Question6* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_Question6___024root        TOP;
    Vtb_Question6_Compare_and_Swap_unit__I0 TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0;
    Vtb_Question6_Compare_and_Swap_unit__I0 TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1;
    Vtb_Question6_Compare_and_Swap_unit__I0 TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0;
    Vtb_Question6_Compare_and_Swap_unit__I0 TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1;
    Vtb_Question6_Compare_and_Swap_unit__I0 TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0;
    Vtb_Question6_Compare_and_Swap_unit__I0 TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0;
    Vtb_Question6_Compare_and_Swap_unit__I0 TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1;
    Vtb_Question6_Compare_and_Swap_unit__I0 TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0;
    Vtb_Question6_Compare_and_Swap_unit__I0 TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1;
    Vtb_Question6_Compare_and_Swap_unit__I0 TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0;
    Vtb_Question6_Compare_and_Swap_unit__I0 TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0;
    Vtb_Question6_Compare_and_Swap_unit__I0 TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1;
    Vtb_Question6_Compare_and_Swap_unit__I0 TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2;
    Vtb_Question6_Compare_and_Swap_unit__I0 TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3;
    Vtb_Question6_Compare_and_Swap_unit__I0 TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0;
    Vtb_Question6_Compare_and_Swap_unit__I0 TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1;
    Vtb_Question6_Compare_and_Swap_unit__I0 TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2;
    Vtb_Question6_Compare_and_Swap_unit__I0 TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0;
    Vtb_Question6_Compare_and_Swap_unit__I0 TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1;

    // CONSTRUCTORS
    Vtb_Question6__Syms(VerilatedContext* contextp, const char* namep, Vtb_Question6* modelp);
    ~Vtb_Question6__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
