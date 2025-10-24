// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question3.h for the primary calling header

#include "Vtb_Question3__pch.h"
#include "Vtb_Question3_cla_4bit.h"

VL_ATTR_COLD void Vtb_Question3_cla_4bit___ctor_var_reset(Vtb_Question3_cla_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_Question3_cla_4bit___ctor_var_reset\n"); );
    // Body
    vlSelf->A = VL_RAND_RESET_I(4);
    vlSelf->B = VL_RAND_RESET_I(4);
    vlSelf->Cin = VL_RAND_RESET_I(1);
    vlSelf->Gblk = VL_RAND_RESET_I(1);
    vlSelf->Pblk = VL_RAND_RESET_I(1);
    vlSelf->S = VL_RAND_RESET_I(4);
    vlSelf->__PVT__Cout = VL_RAND_RESET_I(1);
    vlSelf->__PVT__p = VL_RAND_RESET_I(4);
    vlSelf->__PVT__g = VL_RAND_RESET_I(4);
    vlSelf->__PVT__c1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__c2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__c3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__or3 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__A = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__B = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__Cin = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__Gblk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__Pblk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__S = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__Cout = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__p = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__g = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__c1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__c2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__c3 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__or3 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hf0430a2d_0_5 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hf0430a2d_0_6 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hf0430a2d_0_9 = VL_RAND_RESET_I(1);
}
