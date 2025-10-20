// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_Question6__pch.h"
#include "Vtb_Question6.h"
#include "Vtb_Question6___024root.h"
#include "Vtb_Question6_Compare_and_Swap_unit__I0.h"

// FUNCTIONS
Vtb_Question6__Syms::~Vtb_Question6__Syms()
{
}

Vtb_Question6__Syms::Vtb_Question6__Syms(VerilatedContext* contextp, const char* namep, Vtb_Question6* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0{this, Verilated::catName(namep, "tb_Question6.dut.DUT.BN_4_UNIT_0.CAS_0_0")}
    , TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1{this, Verilated::catName(namep, "tb_Question6.dut.DUT.BN_4_UNIT_0.CAS_0_1")}
    , TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0{this, Verilated::catName(namep, "tb_Question6.dut.DUT.BN_4_UNIT_0.CAS_1_0")}
    , TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1{this, Verilated::catName(namep, "tb_Question6.dut.DUT.BN_4_UNIT_0.CAS_1_1")}
    , TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0{this, Verilated::catName(namep, "tb_Question6.dut.DUT.BN_4_UNIT_0.CAS_2_0")}
    , TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0{this, Verilated::catName(namep, "tb_Question6.dut.DUT.BN_4_UNIT_1.CAS_0_0")}
    , TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1{this, Verilated::catName(namep, "tb_Question6.dut.DUT.BN_4_UNIT_1.CAS_0_1")}
    , TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0{this, Verilated::catName(namep, "tb_Question6.dut.DUT.BN_4_UNIT_1.CAS_1_0")}
    , TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1{this, Verilated::catName(namep, "tb_Question6.dut.DUT.BN_4_UNIT_1.CAS_1_1")}
    , TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0{this, Verilated::catName(namep, "tb_Question6.dut.DUT.BN_4_UNIT_1.CAS_2_0")}
    , TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0{this, Verilated::catName(namep, "tb_Question6.dut.DUT.BN_8_UNIT_0.CAS_0_0")}
    , TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1{this, Verilated::catName(namep, "tb_Question6.dut.DUT.BN_8_UNIT_0.CAS_0_1")}
    , TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2{this, Verilated::catName(namep, "tb_Question6.dut.DUT.BN_8_UNIT_0.CAS_0_2")}
    , TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3{this, Verilated::catName(namep, "tb_Question6.dut.DUT.BN_8_UNIT_0.CAS_0_3")}
    , TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0{this, Verilated::catName(namep, "tb_Question6.dut.DUT.BN_8_UNIT_0.CAS_1_0")}
    , TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1{this, Verilated::catName(namep, "tb_Question6.dut.DUT.BN_8_UNIT_0.CAS_1_1")}
    , TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2{this, Verilated::catName(namep, "tb_Question6.dut.DUT.BN_8_UNIT_0.CAS_1_2")}
    , TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0{this, Verilated::catName(namep, "tb_Question6.dut.DUT.BN_8_UNIT_0.CAS_2_0")}
    , TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1{this, Verilated::catName(namep, "tb_Question6.dut.DUT.BN_8_UNIT_0.CAS_2_1")}
{
        // Check resources
        Verilated::stackCheck(383);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0 = &TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0;
    TOP.__PVT__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1 = &TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1;
    TOP.__PVT__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0 = &TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0;
    TOP.__PVT__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1 = &TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1;
    TOP.__PVT__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0 = &TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0;
    TOP.__PVT__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0 = &TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0;
    TOP.__PVT__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1 = &TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1;
    TOP.__PVT__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0 = &TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0;
    TOP.__PVT__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1 = &TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1;
    TOP.__PVT__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0 = &TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0;
    TOP.__PVT__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0 = &TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0;
    TOP.__PVT__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1 = &TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1;
    TOP.__PVT__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2 = &TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2;
    TOP.__PVT__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3 = &TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3;
    TOP.__PVT__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0 = &TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0;
    TOP.__PVT__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1 = &TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1;
    TOP.__PVT__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2 = &TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2;
    TOP.__PVT__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0 = &TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0;
    TOP.__PVT__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1 = &TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.__Vconfigure(true);
    TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.__Vconfigure(false);
    TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.__Vconfigure(false);
    TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.__Vconfigure(false);
    TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.__Vconfigure(false);
    TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.__Vconfigure(false);
    TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.__Vconfigure(false);
    TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.__Vconfigure(false);
    TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.__Vconfigure(false);
    TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.__Vconfigure(false);
    TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.__Vconfigure(false);
    TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.__Vconfigure(false);
    TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.__Vconfigure(false);
    TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.__Vconfigure(false);
    TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.__Vconfigure(false);
    TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.__Vconfigure(false);
    TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.__Vconfigure(false);
    TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.__Vconfigure(false);
    TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.__Vconfigure(false);
}
