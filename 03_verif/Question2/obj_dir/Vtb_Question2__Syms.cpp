// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_Question2__pch.h"
#include "Vtb_Question2.h"
#include "Vtb_Question2___024root.h"
#include "Vtb_Question2_LOPD_16bit.h"

// FUNCTIONS
Vtb_Question2__Syms::~Vtb_Question2__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtb_Question2__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtb_Question2__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtb_Question2__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtb_Question2__Syms::Vtb_Question2__Syms(VerilatedContext* contextp, const char* namep, Vtb_Question2* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0{this, Verilated::catName(namep, "LOPD_32bit.LOPD_16bit_unit_0")}
    , TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1{this, Verilated::catName(namep, "LOPD_32bit.LOPD_16bit_unit_1")}
    , TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB{this, Verilated::catName(namep, "tb_Question2.DUT.DUT.LOPD_16bit_UNIT_LSB")}
{
        // Check resources
        Verilated::stackCheck(55);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__LOPD_32bit__DOT__LOPD_16bit_unit_0 = &TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0;
    TOP.__PVT__LOPD_32bit__DOT__LOPD_16bit_unit_1 = &TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1;
    TOP.__PVT__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB = &TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__Vconfigure(true);
    TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__Vconfigure(false);
    TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__Vconfigure(false);
}
