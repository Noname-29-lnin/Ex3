// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_QUESTION3__SYMS_H_
#define VERILATED_VTB_QUESTION3__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_Question3.h"

// INCLUDE MODULE CLASSES
#include "Vtb_Question3___024root.h"
#include "Vtb_Question3_cla_4bit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_Question3__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_Question3* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_Question3___024root        TOP;
    Vtb_Question3_cla_4bit         TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4;
    Vtb_Question3_cla_4bit         TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4;
    Vtb_Question3_cla_4bit         TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4;
    Vtb_Question3_cla_4bit         TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4;
    Vtb_Question3_cla_4bit         TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4;
    Vtb_Question3_cla_4bit         TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4;
    Vtb_Question3_cla_4bit         TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4;
    Vtb_Question3_cla_4bit         TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4;

    // COVERAGE
    uint32_t __Vcoverage[267];

    // CONSTRUCTORS
    Vtb_Question3__Syms(VerilatedContext* contextp, const char* namep, Vtb_Question3* modelp);
    ~Vtb_Question3__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
