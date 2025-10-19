// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_Question2__Syms.h"


void Vtb_Question2___024root__trace_chg_0_sub_0(Vtb_Question2___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_Question2___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root__trace_chg_0\n"); );
    // Init
    Vtb_Question2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Question2___024root*>(voidSelf);
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_Question2___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_Question2___024root__trace_chg_0_sub_0(Vtb_Question2___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_Question2__DOT__i_rst_n));
        bufp->chgIData(oldp+1,(vlSelf->tb_Question2__DOT__i_addr),24);
        bufp->chgIData(oldp+2,(vlSelf->tb_Question2__DOT__i_data),24);
        bufp->chgIData(oldp+3,(vlSelf->tb_Question2__DOT__bit_pos),32);
        bufp->chgSData(oldp+4,((0xffffU & vlSelf->tb_Question2__DOT__i_data)),16);
        bufp->chgCData(oldp+5,((0xffU & (vlSelf->tb_Question2__DOT__i_data 
                                         >> 0x10U))),8);
        bufp->chgCData(oldp+6,((0xfU & (vlSelf->tb_Question2__DOT__i_data 
                                        >> 0x10U))),4);
        bufp->chgCData(oldp+7,((0xfU & (vlSelf->tb_Question2__DOT__i_data 
                                        >> 0x14U))),4);
        bufp->chgCData(oldp+8,((0xffU & vlSelf->tb_Question2__DOT__i_data)),8);
        bufp->chgCData(oldp+9,((0xfU & vlSelf->tb_Question2__DOT__i_data)),4);
        bufp->chgCData(oldp+10,((0xfU & (vlSelf->tb_Question2__DOT__i_data 
                                         >> 4U))),4);
        bufp->chgCData(oldp+11,((0xffU & (vlSelf->tb_Question2__DOT__i_data 
                                          >> 8U))),8);
        bufp->chgCData(oldp+12,((0xfU & (vlSelf->tb_Question2__DOT__i_data 
                                         >> 8U))),4);
        bufp->chgCData(oldp+13,((0xfU & (vlSelf->tb_Question2__DOT__i_data 
                                         >> 0xcU))),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+14,(vlSelf->tb_Question2__DOT__o_addr),24);
        bufp->chgCData(oldp+15,(vlSelf->tb_Question2__DOT__o_one_position),5);
        bufp->chgBit(oldp+16,(vlSelf->tb_Question2__DOT__o_zero_flag));
    }
    bufp->chgIData(oldp+17,(vlSelf->i_data),32);
    bufp->chgCData(oldp+18,(vlSelf->o_pos_one),5);
    bufp->chgBit(oldp+19,(vlSelf->o_zero_flag));
    bufp->chgCData(oldp+20,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.o_pos_one),4);
    bufp->chgBit(oldp+21,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.o_zero_flag));
    bufp->chgCData(oldp+22,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.o_pos_one),4);
    bufp->chgBit(oldp+23,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.o_zero_flag));
    bufp->chgBit(oldp+24,(vlSelf->tb_Question2__DOT__i_clk));
    bufp->chgCData(oldp+25,(vlSelf->tb_Question2__DOT__DUT__DOT__w_one_position),5);
    bufp->chgBit(oldp+26,(vlSelf->tb_Question2__DOT__DUT__DOT__w_zero_flag));
    bufp->chgCData(oldp+27,(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_pos_one),4);
    bufp->chgBit(oldp+28,(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.o_zero_flag));
    bufp->chgCData(oldp+29,(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_pos_one),3);
    bufp->chgBit(oldp+30,(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD8_o_zero_flag));
    bufp->chgBit(oldp+31,(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0));
    bufp->chgCData(oldp+32,(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0),2);
    bufp->chgBit(oldp+33,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_2)))));
    bufp->chgCData(oldp+34,(vlSelf->tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1),2);
    bufp->chgCData(oldp+35,(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__w_pos_one_0),3);
    bufp->chgBit(oldp+36,(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__w_zero_flag_0));
    bufp->chgCData(oldp+37,(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__w_pos_one_1),3);
    bufp->chgBit(oldp+38,(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__w_zero_flag_1));
    bufp->chgBit(oldp+39,(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__LOPD_8bit_unit_0__DOT__w_zero_flag_0));
    bufp->chgCData(oldp+40,(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0),2);
    bufp->chgBit(oldp+41,((1U & (~ (IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__VdfgRegularize_h1f2f0f73_0_2)))));
    bufp->chgCData(oldp+42,(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1),2);
    bufp->chgBit(oldp+43,(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__LOPD_8bit_unit_1__DOT__w_zero_flag_0));
    bufp->chgCData(oldp+44,(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0),2);
    bufp->chgBit(oldp+45,((1U & (~ (IData)(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__VdfgRegularize_h1f2f0f73_0_5)))));
    bufp->chgCData(oldp+46,(vlSymsp->TOP__tb_Question2__DOT__DUT__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1),2);
    bufp->chgSData(oldp+47,((0xffffU & vlSelf->i_data)),16);
    bufp->chgCData(oldp+48,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__w_pos_one_0),3);
    bufp->chgBit(oldp+49,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__w_zero_flag_0));
    bufp->chgCData(oldp+50,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__w_pos_one_1),3);
    bufp->chgBit(oldp+51,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__w_zero_flag_1));
    bufp->chgCData(oldp+52,((0xffU & vlSelf->i_data)),8);
    bufp->chgBit(oldp+53,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_0__DOT__w_zero_flag_0));
    bufp->chgCData(oldp+54,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0),2);
    bufp->chgBit(oldp+55,((1U & (~ (IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__VdfgRegularize_h1f2f0f73_0_2)))));
    bufp->chgCData(oldp+56,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1),2);
    bufp->chgCData(oldp+57,((0xfU & vlSelf->i_data)),4);
    bufp->chgCData(oldp+58,((0xfU & (vlSelf->i_data 
                                     >> 4U))),4);
    bufp->chgCData(oldp+59,((0xffU & (vlSelf->i_data 
                                      >> 8U))),8);
    bufp->chgBit(oldp+60,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_1__DOT__w_zero_flag_0));
    bufp->chgCData(oldp+61,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0),2);
    bufp->chgBit(oldp+62,((1U & (~ (IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__VdfgRegularize_h1f2f0f73_0_5)))));
    bufp->chgCData(oldp+63,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_0.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1),2);
    bufp->chgCData(oldp+64,((0xfU & (vlSelf->i_data 
                                     >> 8U))),4);
    bufp->chgCData(oldp+65,((0xfU & (vlSelf->i_data 
                                     >> 0xcU))),4);
    bufp->chgSData(oldp+66,((vlSelf->i_data >> 0x10U)),16);
    bufp->chgCData(oldp+67,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__w_pos_one_0),3);
    bufp->chgBit(oldp+68,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__w_zero_flag_0));
    bufp->chgCData(oldp+69,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__w_pos_one_1),3);
    bufp->chgBit(oldp+70,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__w_zero_flag_1));
    bufp->chgCData(oldp+71,((0xffU & (vlSelf->i_data 
                                      >> 0x10U))),8);
    bufp->chgBit(oldp+72,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_0__DOT__w_zero_flag_0));
    bufp->chgCData(oldp+73,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_0),2);
    bufp->chgBit(oldp+74,((1U & (~ (IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__VdfgRegularize_h1f2f0f73_0_2)))));
    bufp->chgCData(oldp+75,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_0__DOT__w_pos_one_1),2);
    bufp->chgCData(oldp+76,((0xfU & (vlSelf->i_data 
                                     >> 0x10U))),4);
    bufp->chgCData(oldp+77,((0xfU & (vlSelf->i_data 
                                     >> 0x14U))),4);
    bufp->chgCData(oldp+78,((vlSelf->i_data >> 0x18U)),8);
    bufp->chgBit(oldp+79,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_1__DOT__w_zero_flag_0));
    bufp->chgCData(oldp+80,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_0),2);
    bufp->chgBit(oldp+81,((1U & (~ (IData)(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__VdfgRegularize_h1f2f0f73_0_5)))));
    bufp->chgCData(oldp+82,(vlSymsp->TOP__LOPD_32bit__DOT__LOPD_16bit_unit_1.__PVT__LOPD_8bit_unit_1__DOT__w_pos_one_1),2);
    bufp->chgCData(oldp+83,((0xfU & (vlSelf->i_data 
                                     >> 0x18U))),4);
    bufp->chgCData(oldp+84,((vlSelf->i_data >> 0x1cU)),4);
}

void Vtb_Question2___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question2___024root__trace_cleanup\n"); );
    // Init
    Vtb_Question2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Question2___024root*>(voidSelf);
    Vtb_Question2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
