// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_Question3__Syms.h"


void Vtb_Question3___024root__trace_chg_0_sub_0(Vtb_Question3___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_Question3___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root__trace_chg_0\n"); );
    // Init
    Vtb_Question3___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Question3___024root*>(voidSelf);
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_Question3___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_Question3___024root__trace_chg_0_sub_0(Vtb_Question3___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->tb_Question3__DOT__pass_count),32);
        bufp->chgIData(oldp+1,(vlSelf->tb_Question3__DOT__fail_count),32);
        bufp->chgIData(oldp+2,(vlSelf->tb_Question3__DOT__run_test__Vstatic__idx),32);
        bufp->chgIData(oldp+3,(vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_a),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_b),32);
        bufp->chgBit(oldp+5,(vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_cin));
        bufp->chgQData(oldp+6,(vlSelf->tb_Question3__DOT__run_test__Vstatic__expected),33);
        bufp->chgQData(oldp+8,(vlSelf->tb_Question3__DOT__run_test__Vstatic__got),33);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[3U] 
                      | vlSelf->__Vm_traceActivity[4U]) 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+10,(((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.Gblk) 
                               | ((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.Pblk) 
                                  & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk)))));
        bufp->chgBit(oldp+11,(((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.Gblk) 
                               | ((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.Pblk) 
                                  & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                     >> 1U)))));
        bufp->chgBit(oldp+12,(((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.Gblk) 
                               | ((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.Pblk) 
                                  & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                     >> 2U)))));
        bufp->chgBit(oldp+13,(((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.Gblk) 
                               | ((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.Pblk) 
                                  & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                     >> 3U)))));
        bufp->chgBit(oldp+14,(((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.Gblk) 
                               | ((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.Pblk) 
                                  & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                     >> 4U)))));
        bufp->chgBit(oldp+15,(((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.Gblk) 
                               | ((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.Pblk) 
                                  & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                     >> 5U)))));
        bufp->chgBit(oldp+16,(((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.Gblk) 
                               | ((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.Pblk) 
                                  & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                     >> 6U)))));
        bufp->chgBit(oldp+17,(((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.Gblk) 
                               | ((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.Pblk) 
                                  & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                     >> 7U)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgSData(oldp+18,(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk),9);
        bufp->chgIData(oldp+19,(vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c),32);
        bufp->chgBit(oldp+20,((1U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                     >> 8U))));
        bufp->chgBit(oldp+21,((1U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk))));
        bufp->chgCData(oldp+22,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.S),4);
        bufp->chgBit(oldp+23,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.__PVT__c1));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.__PVT__c2));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.__PVT__c3));
        bufp->chgBit(oldp+26,((1U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                     >> 1U))));
        bufp->chgCData(oldp+27,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.S),4);
        bufp->chgBit(oldp+28,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.__PVT__c1));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.__PVT__c2));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.__PVT__c3));
        bufp->chgBit(oldp+31,((1U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                     >> 2U))));
        bufp->chgCData(oldp+32,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.S),4);
        bufp->chgBit(oldp+33,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.__PVT__c1));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.__PVT__c2));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.__PVT__c3));
        bufp->chgBit(oldp+36,((1U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                     >> 3U))));
        bufp->chgCData(oldp+37,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.S),4);
        bufp->chgBit(oldp+38,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.__PVT__c1));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.__PVT__c2));
        bufp->chgBit(oldp+40,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.__PVT__c3));
        bufp->chgBit(oldp+41,((1U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                     >> 4U))));
        bufp->chgCData(oldp+42,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.S),4);
        bufp->chgBit(oldp+43,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.__PVT__c1));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.__PVT__c2));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.__PVT__c3));
        bufp->chgBit(oldp+46,((1U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                     >> 5U))));
        bufp->chgCData(oldp+47,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.S),4);
        bufp->chgBit(oldp+48,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.__PVT__c1));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.__PVT__c2));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.__PVT__c3));
        bufp->chgBit(oldp+51,((1U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                     >> 6U))));
        bufp->chgCData(oldp+52,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.S),4);
        bufp->chgBit(oldp+53,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.__PVT__c1));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.__PVT__c2));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.__PVT__c3));
        bufp->chgBit(oldp+56,((1U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                     >> 7U))));
        bufp->chgCData(oldp+57,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.S),4);
        bufp->chgBit(oldp+58,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.__PVT__c1));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.__PVT__c2));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.__PVT__c3));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+61,(vlSelf->tb_Question3__DOT__Sum_tb),32);
        bufp->chgBit(oldp+62,(vlSelf->tb_Question3__DOT__Cout_tb));
        bufp->chgIData(oldp+63,(vlSelf->tb_Question3__DOT__DUT__DOT__A_r),32);
        bufp->chgIData(oldp+64,(vlSelf->tb_Question3__DOT__DUT__DOT__B_r),32);
        bufp->chgBit(oldp+65,(vlSelf->tb_Question3__DOT__DUT__DOT__Cin_r));
        bufp->chgCData(oldp+66,(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk),8);
        bufp->chgCData(oldp+67,(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk),8);
        bufp->chgCData(oldp+68,((0xfU & vlSelf->tb_Question3__DOT__DUT__DOT__A_r)),4);
        bufp->chgCData(oldp+69,((0xfU & vlSelf->tb_Question3__DOT__DUT__DOT__B_r)),4);
        bufp->chgBit(oldp+70,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.Gblk));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.Pblk));
        bufp->chgCData(oldp+72,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.__PVT__p),4);
        bufp->chgCData(oldp+73,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.__PVT__g),4);
        bufp->chgBit(oldp+74,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.__PVT__or3));
        bufp->chgCData(oldp+75,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 4U))),4);
        bufp->chgCData(oldp+76,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 4U))),4);
        bufp->chgBit(oldp+77,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.Gblk));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.Pblk));
        bufp->chgCData(oldp+79,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.__PVT__p),4);
        bufp->chgCData(oldp+80,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.__PVT__g),4);
        bufp->chgBit(oldp+81,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.__PVT__or3));
        bufp->chgCData(oldp+82,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 8U))),4);
        bufp->chgCData(oldp+83,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 8U))),4);
        bufp->chgBit(oldp+84,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.Gblk));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.Pblk));
        bufp->chgCData(oldp+86,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.__PVT__p),4);
        bufp->chgCData(oldp+87,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.__PVT__g),4);
        bufp->chgBit(oldp+88,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.__PVT__or3));
        bufp->chgCData(oldp+89,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 0xcU))),4);
        bufp->chgCData(oldp+90,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 0xcU))),4);
        bufp->chgBit(oldp+91,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.Gblk));
        bufp->chgBit(oldp+92,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.Pblk));
        bufp->chgCData(oldp+93,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.__PVT__p),4);
        bufp->chgCData(oldp+94,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.__PVT__g),4);
        bufp->chgBit(oldp+95,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.__PVT__or3));
        bufp->chgCData(oldp+96,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 0x10U))),4);
        bufp->chgCData(oldp+97,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 0x10U))),4);
        bufp->chgBit(oldp+98,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.Gblk));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.Pblk));
        bufp->chgCData(oldp+100,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.__PVT__p),4);
        bufp->chgCData(oldp+101,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.__PVT__g),4);
        bufp->chgBit(oldp+102,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.__PVT__or3));
        bufp->chgCData(oldp+103,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+104,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                                          >> 0x14U))),4);
        bufp->chgBit(oldp+105,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.Gblk));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.Pblk));
        bufp->chgCData(oldp+107,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.__PVT__p),4);
        bufp->chgCData(oldp+108,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.__PVT__g),4);
        bufp->chgBit(oldp+109,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.__PVT__or3));
        bufp->chgCData(oldp+110,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+111,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+112,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.Gblk));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.Pblk));
        bufp->chgCData(oldp+114,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.__PVT__p),4);
        bufp->chgCData(oldp+115,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.__PVT__g),4);
        bufp->chgBit(oldp+116,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.__PVT__or3));
        bufp->chgCData(oldp+117,((vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+118,((vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                                  >> 0x1cU)),4);
        bufp->chgBit(oldp+119,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.Gblk));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.Pblk));
        bufp->chgCData(oldp+121,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.__PVT__p),4);
        bufp->chgCData(oldp+122,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.__PVT__g),4);
        bufp->chgBit(oldp+123,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.__PVT__or3));
    }
    bufp->chgBit(oldp+124,(vlSelf->tb_Question3__DOT__clk));
    bufp->chgBit(oldp+125,(vlSelf->tb_Question3__DOT__rst_n));
    bufp->chgIData(oldp+126,(vlSelf->tb_Question3__DOT__A_tb),32);
    bufp->chgIData(oldp+127,(vlSelf->tb_Question3__DOT__B_tb),32);
    bufp->chgBit(oldp+128,(vlSelf->tb_Question3__DOT__Cin_tb));
}

void Vtb_Question3___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root__trace_cleanup\n"); );
    // Init
    Vtb_Question3___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Question3___024root*>(voidSelf);
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
