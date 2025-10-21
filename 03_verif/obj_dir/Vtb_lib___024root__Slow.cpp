// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_lib.h for the primary calling header

#include "Vtb_lib__pch.h"
#include "Vtb_lib__Syms.h"
#include "Vtb_lib___024root.h"

void Vtb_lib___024root___ctor_var_reset(Vtb_lib___024root* vlSelf);

Vtb_lib___024root::Vtb_lib___024root(Vtb_lib__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_lib___024root___ctor_var_reset(this);
}

void Vtb_lib___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_lib___024root::~Vtb_lib___024root() {
}
