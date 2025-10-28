// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_Question5__Syms.h"


void Vtb_Question5___024root__trace_chg_0_sub_0(Vtb_Question5___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_Question5___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root__trace_chg_0\n"); );
    // Init
    Vtb_Question5___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Question5___024root*>(voidSelf);
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_Question5___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_Question5___024root__trace_chg_0_sub_0(Vtb_Question5___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->tb_Question5__DOT__A),8);
        bufp->chgCData(oldp+1,(vlSelf->tb_Question5__DOT__B),8);
        bufp->chgBit(oldp+2,(vlSelf->tb_Question5__DOT__S1));
        bufp->chgBit(oldp+3,(vlSelf->tb_Question5__DOT__S0));
        bufp->chgBit(oldp+4,(vlSelf->tb_Question5__DOT__Cin));
        bufp->chgIData(oldp+5,(vlSelf->tb_Question5__DOT__total_tests),32);
        bufp->chgIData(oldp+6,(vlSelf->tb_Question5__DOT__errors),32);
        bufp->chgIData(oldp+7,(vlSelf->tb_Question5__DOT__test_count),32);
        bufp->chgIData(oldp+8,(vlSelf->tb_Question5__DOT__test_pass),32);
        bufp->chgIData(oldp+9,(vlSelf->tb_Question5__DOT__seed),32);
        bufp->chgCData(oldp+10,((0xffU & (~ (IData)(vlSelf->tb_Question5__DOT__B)))),8);
        bufp->chgDouble(oldp+11,(vlSelf->tb_Question5__DOT__unnamedblk1__DOT__pass_rate));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+13,(vlSelf->tb_Question5__DOT__dut__DOT__sel_op1));
        bufp->chgCData(oldp+14,(vlSelf->tb_Question5__DOT__dut__DOT__Op1),8);
        bufp->chgCData(oldp+15,(vlSelf->tb_Question5__DOT__dut__DOT__Op2),8);
        bufp->chgCData(oldp+16,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Gblk),2);
        bufp->chgCData(oldp+17,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Pblk),2);
        bufp->chgCData(oldp+18,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__0__KET____DOT__u4__A),4);
        bufp->chgCData(oldp+19,((0xfU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2))),4);
        bufp->chgBit(oldp+20,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Pblk));
        bufp->chgBit(oldp+21,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Gblk));
        bufp->chgCData(oldp+22,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g),4);
        bufp->chgCData(oldp+23,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p),4);
        bufp->chgCData(oldp+24,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__1__KET____DOT__u4__A),4);
        bufp->chgCData(oldp+25,((0xfU & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2) 
                                         >> 4U))),4);
        bufp->chgBit(oldp+26,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Pblk));
        bufp->chgBit(oldp+27,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Gblk));
        bufp->chgCData(oldp+28,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g),4);
        bufp->chgCData(oldp+29,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+30,(vlSelf->tb_Question5__DOT__F),8);
        bufp->chgBit(oldp+31,((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                     >> 2U))));
        bufp->chgCData(oldp+32,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk),3);
        bufp->chgBit(oldp+33,((1U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk))));
        bufp->chgCData(oldp+34,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__sum),4);
        bufp->chgBit(oldp+35,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c1));
        bufp->chgBit(oldp+36,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c2));
        bufp->chgBit(oldp+37,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c3));
        bufp->chgBit(oldp+38,((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                     >> 1U))));
        bufp->chgCData(oldp+39,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__sum),4);
        bufp->chgBit(oldp+40,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c1));
        bufp->chgBit(oldp+41,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c2));
        bufp->chgBit(oldp+42,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c3));
    }
    bufp->chgBit(oldp+43,(((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Gblk) 
                           | ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Pblk) 
                              & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk)))));
    bufp->chgBit(oldp+44,(((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Gblk) 
                           | ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Pblk) 
                              & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                 >> 1U)))));
}

void Vtb_Question5___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root__trace_cleanup\n"); );
    // Init
    Vtb_Question5___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Question5___024root*>(voidSelf);
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
