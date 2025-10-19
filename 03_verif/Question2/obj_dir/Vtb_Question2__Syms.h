// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_QUESTION2__SYMS_H_
#define VERILATED_VTB_QUESTION2__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_Question2.h"

// INCLUDE MODULE CLASSES
#include "Vtb_Question2___024root.h"
#include "Vtb_Question2_LOPD_16bit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_Question2__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_Question2* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_Question2___024root        TOP;
    Vtb_Question2_LOPD_16bit       TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0;
    Vtb_Question2_LOPD_16bit       TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1;
    Vtb_Question2_LOPD_16bit       TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB;

    // COVERAGE
    uint32_t __Vcoverage[226];

    // CONSTRUCTORS
    Vtb_Question2__Syms(VerilatedContext* contextp, const char* namep, Vtb_Question2* modelp);
    ~Vtb_Question2__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
