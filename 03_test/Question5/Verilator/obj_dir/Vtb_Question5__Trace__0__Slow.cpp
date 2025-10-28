// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_Question5__Syms.h"


VL_ATTR_COLD void Vtb_Question5___024root__trace_init_sub__TOP__0(Vtb_Question5___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_Question5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+3,0,"S1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"S0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"Cin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+32,0,"Cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"total_tests",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+7,0,"errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+8,0,"test_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+9,0,"test_pass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+10,0,"seed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+3,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"F",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+32,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"B_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+14,0,"sel_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"Op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"Op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("u_adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+15,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+5,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"Sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+32,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"Gblk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"Pblk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+33,0,"Cblk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("BLK[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+34,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"Pblk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"Gblk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+24,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+36,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("BLK[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+25,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+26,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+39,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"Pblk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"Gblk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+29,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+30,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+41,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declDouble(c+12,0,"pass_rate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_Question5___024root__trace_init_top(Vtb_Question5___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root__trace_init_top\n"); );
    // Body
    Vtb_Question5___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_Question5___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_Question5___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_Question5___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_Question5___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_Question5___024root__trace_register(Vtb_Question5___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_Question5___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_Question5___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_Question5___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_Question5___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_Question5___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root__trace_const_0\n"); );
    // Init
    Vtb_Question5___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Question5___024root*>(voidSelf);
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtb_Question5___024root__trace_full_0_sub_0(Vtb_Question5___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_Question5___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root__trace_full_0\n"); );
    // Init
    Vtb_Question5___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Question5___024root*>(voidSelf);
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_Question5___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_Question5___024root__trace_full_0_sub_0(Vtb_Question5___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question5___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->tb_Question5__DOT__A),8);
    bufp->fullCData(oldp+2,(vlSelf->tb_Question5__DOT__B),8);
    bufp->fullBit(oldp+3,(vlSelf->tb_Question5__DOT__S1));
    bufp->fullBit(oldp+4,(vlSelf->tb_Question5__DOT__S0));
    bufp->fullBit(oldp+5,(vlSelf->tb_Question5__DOT__Cin));
    bufp->fullIData(oldp+6,(vlSelf->tb_Question5__DOT__total_tests),32);
    bufp->fullIData(oldp+7,(vlSelf->tb_Question5__DOT__errors),32);
    bufp->fullIData(oldp+8,(vlSelf->tb_Question5__DOT__test_count),32);
    bufp->fullIData(oldp+9,(vlSelf->tb_Question5__DOT__test_pass),32);
    bufp->fullIData(oldp+10,(vlSelf->tb_Question5__DOT__seed),32);
    bufp->fullCData(oldp+11,((0xffU & (~ (IData)(vlSelf->tb_Question5__DOT__B)))),8);
    bufp->fullDouble(oldp+12,(vlSelf->tb_Question5__DOT__unnamedblk1__DOT__pass_rate));
    bufp->fullBit(oldp+14,(vlSelf->tb_Question5__DOT__dut__DOT__sel_op1));
    bufp->fullCData(oldp+15,(vlSelf->tb_Question5__DOT__dut__DOT__Op1),8);
    bufp->fullCData(oldp+16,(vlSelf->tb_Question5__DOT__dut__DOT__Op2),8);
    bufp->fullCData(oldp+17,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Gblk),2);
    bufp->fullCData(oldp+18,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Pblk),2);
    bufp->fullCData(oldp+19,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__0__KET____DOT__u4__A),4);
    bufp->fullCData(oldp+20,((0xfU & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2))),4);
    bufp->fullBit(oldp+21,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Pblk));
    bufp->fullBit(oldp+22,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Gblk));
    bufp->fullCData(oldp+23,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__g),4);
    bufp->fullCData(oldp+24,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__p),4);
    bufp->fullCData(oldp+25,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellinp__BLK__BRA__1__KET____DOT__u4__A),4);
    bufp->fullCData(oldp+26,((0xfU & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__Op2) 
                                      >> 4U))),4);
    bufp->fullBit(oldp+27,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Pblk));
    bufp->fullBit(oldp+28,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Gblk));
    bufp->fullCData(oldp+29,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__g),4);
    bufp->fullCData(oldp+30,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__p),4);
    bufp->fullCData(oldp+31,(vlSelf->tb_Question5__DOT__F),8);
    bufp->fullBit(oldp+32,((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                  >> 2U))));
    bufp->fullCData(oldp+33,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk),3);
    bufp->fullBit(oldp+34,((1U & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk))));
    bufp->fullCData(oldp+35,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__sum),4);
    bufp->fullBit(oldp+36,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c1));
    bufp->fullBit(oldp+37,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c2));
    bufp->fullBit(oldp+38,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__0__KET____DOT__u4__DOT__c3));
    bufp->fullBit(oldp+39,((1U & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                  >> 1U))));
    bufp->fullCData(oldp+40,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__sum),4);
    bufp->fullBit(oldp+41,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c1));
    bufp->fullBit(oldp+42,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c2));
    bufp->fullBit(oldp+43,(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__BLK__BRA__1__KET____DOT__u4__DOT__c3));
    bufp->fullBit(oldp+44,(((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Gblk) 
                            | ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__0__KET____DOT__u4__Pblk) 
                               & (IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk)))));
    bufp->fullBit(oldp+45,(((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Gblk) 
                            | ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT____Vcellout__BLK__BRA__1__KET____DOT__u4__Pblk) 
                               & ((IData)(vlSelf->tb_Question5__DOT__dut__DOT__u_adder__DOT__Cblk) 
                                  >> 1U)))));
}
