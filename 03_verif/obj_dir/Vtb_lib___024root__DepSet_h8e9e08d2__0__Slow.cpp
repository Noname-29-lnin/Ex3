// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_lib.h for the primary calling header

#include "Vtb_lib__pch.h"
#include "Vtb_lib__Syms.h"
#include "Vtb_lib___024root.h"

VL_ATTR_COLD void Vtb_lib___024root___eval_initial__TOP(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f746f70U;
    __Vtemp_1[2U] = 0x7462U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_count = 0U;
    vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_pass = 0U;
    vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_complete = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lib___024root___dump_triggers__stl(Vtb_lib___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_lib___024root___eval_triggers__stl(Vtb_lib___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_lib___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
