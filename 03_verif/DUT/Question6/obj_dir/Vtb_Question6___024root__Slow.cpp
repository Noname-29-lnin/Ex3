// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question6.h for the primary calling header

#include "Vtb_Question6__pch.h"
#include "Vtb_Question6__Syms.h"
#include "Vtb_Question6___024root.h"

void Vtb_Question6___024root___ctor_var_reset(Vtb_Question6___024root* vlSelf);

Vtb_Question6___024root::Vtb_Question6___024root(Vtb_Question6__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_Question6___024root___ctor_var_reset(this);
}

void Vtb_Question6___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_Question6___024root::~Vtb_Question6___024root() {
}
