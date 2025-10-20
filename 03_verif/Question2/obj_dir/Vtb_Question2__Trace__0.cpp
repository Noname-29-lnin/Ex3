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
        bufp->chgIData(oldp+0,(vlSelf->tb_Question2__DOT__test_count),32);
        bufp->chgIData(oldp+1,(vlSelf->tb_Question2__DOT__test_pass),32);
        bufp->chgBit(oldp+2,(vlSelf->tb_Question2__DOT__i_rst_n));
        bufp->chgIData(oldp+3,(vlSelf->tb_Question2__DOT__i_addr),24);
        bufp->chgIData(oldp+4,(vlSelf->tb_Question2__DOT__i_data),24);
        bufp->chgIData(oldp+5,(vlSelf->tb_Question2__DOT__bit_pos),32);
        bufp->chgSData(oldp+6,((0xffffU & vlSelf->tb_Question2__DOT__i_data)),16);
        bufp->chgCData(oldp+7,((0xffU & (vlSelf->tb_Question2__DOT__i_data 
                                         >> 0x10U))),8);
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
        bufp->chgCData(oldp+14,((0xfU & (vlSelf->tb_Question2__DOT__i_data 
                                         >> 0x10U))),4);
        bufp->chgCData(oldp+15,((0xfU & (vlSelf->tb_Question2__DOT__i_data 
                                         >> 0x14U))),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+16,(vlSelf->tb_Question2__DOT__o_one_position),5);
        bufp->chgBit(oldp+17,(vlSelf->tb_Question2__DOT__o_zero_flag));
        bufp->chgCData(oldp+18,(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD16_o_pos_one),4);
        bufp->chgBit(oldp+19,(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD16_o_zero_flag));
        bufp->chgCData(oldp+20,(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD8_o_pos_one),3);
        bufp->chgBit(oldp+21,(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD8_o_zero_flag));
        bufp->chgCData(oldp+22,(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_0),3);
        bufp->chgBit(oldp+23,(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_0));
        bufp->chgCData(oldp+24,(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_1),3);
        bufp->chgBit(oldp+25,(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1));
        bufp->chgBit(oldp+26,(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0));
        bufp->chgCData(oldp+27,(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0),2);
        bufp->chgBit(oldp+28,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)))));
        bufp->chgCData(oldp+29,(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1),2);
        bufp->chgBit(oldp+30,(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0));
        bufp->chgCData(oldp+31,(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0),2);
        bufp->chgBit(oldp+32,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)))));
        bufp->chgCData(oldp+33,(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1),2);
        bufp->chgBit(oldp+34,(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0));
        bufp->chgCData(oldp+35,(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0),2);
        bufp->chgBit(oldp+36,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
        bufp->chgCData(oldp+37,(vlSelf->tb_Question2__DOT__DUT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1),2);
    }
    bufp->chgBit(oldp+38,(vlSelf->tb_Question2__DOT__i_clk));
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
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
