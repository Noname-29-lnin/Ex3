// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_Question3__pch.h"
#include "Vtb_Question3.h"
#include "Vtb_Question3___024root.h"
#include "Vtb_Question3_cla_4bit.h"

// FUNCTIONS
Vtb_Question3__Syms::~Vtb_Question3__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtb_Question3__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtb_Question3__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtb_Question3__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtb_Question3__Syms::Vtb_Question3__Syms(VerilatedContext* contextp, const char* namep, Vtb_Question3* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4{this, Verilated::catName(namep, "tb_Question3.DUT.BLK[0].u4")}
    , TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4{this, Verilated::catName(namep, "tb_Question3.DUT.BLK[1].u4")}
    , TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4{this, Verilated::catName(namep, "tb_Question3.DUT.BLK[2].u4")}
    , TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4{this, Verilated::catName(namep, "tb_Question3.DUT.BLK[3].u4")}
    , TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4{this, Verilated::catName(namep, "tb_Question3.DUT.BLK[4].u4")}
    , TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4{this, Verilated::catName(namep, "tb_Question3.DUT.BLK[5].u4")}
    , TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4{this, Verilated::catName(namep, "tb_Question3.DUT.BLK[6].u4")}
    , TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4{this, Verilated::catName(namep, "tb_Question3.DUT.BLK[7].u4")}
{
        // Check resources
        Verilated::stackCheck(138);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4 = &TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4;
    TOP.__PVT__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4 = &TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4;
    TOP.__PVT__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4 = &TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4;
    TOP.__PVT__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4 = &TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4;
    TOP.__PVT__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4 = &TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4;
    TOP.__PVT__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4 = &TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4;
    TOP.__PVT__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4 = &TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4;
    TOP.__PVT__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4 = &TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.__Vconfigure(true);
    TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.__Vconfigure(false);
    TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.__Vconfigure(false);
    TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.__Vconfigure(false);
    TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.__Vconfigure(false);
    TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.__Vconfigure(false);
    TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.__Vconfigure(false);
    TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.__Vconfigure(false);
}
