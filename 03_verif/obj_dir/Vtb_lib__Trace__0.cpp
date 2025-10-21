// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_lib__Syms.h"


void Vtb_lib___024root__trace_chg_0_sub_0(Vtb_lib___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_lib___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root__trace_chg_0\n"); );
    // Init
    Vtb_lib___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_lib___024root*>(voidSelf);
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_lib___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_lib___024root__trace_chg_0_sub_0(Vtb_lib___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+0,(vlSelf->tb_top__DOT__w_i_data),64);
        bufp->chgQData(oldp+2,(vlSelf->tb_top__DOT__w_o_data),64);
        bufp->chgBit(oldp+4,(vlSelf->tb_top__DOT__w_start));
        bufp->chgBit(oldp+5,(vlSelf->tb_top__DOT__w_finish));
        bufp->chgCData(oldp+6,(vlSelf->tb_top__DOT__DRIVER__DOT__cur_state),2);
        bufp->chgIData(oldp+7,(vlSelf->tb_top__DOT__DRIVER__DOT__counter),32);
        bufp->chgQData(oldp+8,((((QData)((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_3)) 
                                 << 0x38U) | (((QData)((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_2)) 
                                               << 0x30U) 
                                              | (((QData)((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_1)) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                                        << 0x18U) 
                                                                       | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_0) 
                                                                           << 0x10U) 
                                                                          | (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_0) 
                                                                              << 8U) 
                                                                             | (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_0))))))))))),64);
        bufp->chgCData(oldp+10,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[0]),8);
        bufp->chgCData(oldp+11,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[1]),8);
        bufp->chgCData(oldp+12,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[2]),8);
        bufp->chgCData(oldp+13,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[3]),8);
        bufp->chgCData(oldp+14,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[4]),8);
        bufp->chgCData(oldp+15,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[5]),8);
        bufp->chgCData(oldp+16,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[6]),8);
        bufp->chgCData(oldp+17,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[7]),8);
        bufp->chgCData(oldp+18,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[0]),8);
        bufp->chgCData(oldp+19,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[1]),8);
        bufp->chgCData(oldp+20,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[2]),8);
        bufp->chgCData(oldp+21,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[3]),8);
        bufp->chgCData(oldp+22,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[4]),8);
        bufp->chgCData(oldp+23,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[5]),8);
        bufp->chgCData(oldp+24,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[6]),8);
        bufp->chgCData(oldp+25,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[7]),8);
        bufp->chgCData(oldp+26,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[0]),8);
        bufp->chgCData(oldp+27,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[1]),8);
        bufp->chgCData(oldp+28,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[2]),8);
        bufp->chgCData(oldp+29,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[3]),8);
        bufp->chgCData(oldp+30,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[4]),8);
        bufp->chgCData(oldp+31,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[5]),8);
        bufp->chgCData(oldp+32,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[6]),8);
        bufp->chgCData(oldp+33,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[7]),8);
        bufp->chgCData(oldp+34,((0xffU & (IData)(vlSelf->tb_top__DOT__w_i_data))),8);
        bufp->chgCData(oldp+35,((0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                  >> 8U)))),8);
        bufp->chgCData(oldp+36,((0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                  >> 0x10U)))),8);
        bufp->chgCData(oldp+37,((0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                  >> 0x18U)))),8);
        bufp->chgCData(oldp+38,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0),8);
        bufp->chgCData(oldp+39,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0),8);
        bufp->chgCData(oldp+40,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0),8);
        bufp->chgCData(oldp+41,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1),8);
        bufp->chgCData(oldp+42,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0),8);
        bufp->chgCData(oldp+43,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1),8);
        bufp->chgCData(oldp+44,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0),8);
        bufp->chgCData(oldp+45,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1),8);
        bufp->chgCData(oldp+46,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1),8);
        bufp->chgCData(oldp+47,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0),8);
        bufp->chgBit(oldp+48,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__w_compare));
        bufp->chgBit(oldp+49,((1U & (((IData)((0x400ULL 
                                               == (0x40cULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | ((IData)((0xc00ULL 
                                                  == 
                                                  (0xc04ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                         | (IData)(
                                                   (0x800ULL 
                                                    == 
                                                    (0x808ULL 
                                                     & vlSelf->tb_top__DOT__w_i_data))))) 
                                     | ((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(
                                                                (vlSelf->tb_top__DOT__w_i_data 
                                                                 >> 2U)) 
                                                        ^ (IData)(
                                                                  (vlSelf->tb_top__DOT__w_i_data 
                                                                   >> 0xaU))))))) 
                                        & ((IData)(
                                                   (0x100ULL 
                                                    == 
                                                    (0x103ULL 
                                                     & vlSelf->tb_top__DOT__w_i_data))) 
                                           | ((IData)(
                                                      (0x300ULL 
                                                       == 
                                                       (0x301ULL 
                                                        & vlSelf->tb_top__DOT__w_i_data))) 
                                              | (IData)(
                                                        (0x200ULL 
                                                         == 
                                                         (0x202ULL 
                                                          & vlSelf->tb_top__DOT__w_i_data))))))))));
        bufp->chgBit(oldp+50,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(
                                                             (vlSelf->tb_top__DOT__w_i_data 
                                                              >> 2U)) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_top__DOT__w_i_data 
                                                                >> 0xaU))))))) 
                                     & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelf->tb_top__DOT__w_i_data) 
                                                       ^ (IData)(
                                                                 (vlSelf->tb_top__DOT__w_i_data 
                                                                  >> 8U)))))))))));
        bufp->chgBit(oldp+51,((1U & (((IData)((0x4000ULL 
                                               == (0x40c0ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | ((IData)((0xc000ULL 
                                                  == 
                                                  (0xc040ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                         | (IData)(
                                                   (0x8000ULL 
                                                    == 
                                                    (0x8080ULL 
                                                     & vlSelf->tb_top__DOT__w_i_data))))) 
                                     | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                        & ((IData)(
                                                   (0x1000ULL 
                                                    == 
                                                    (0x1030ULL 
                                                     & vlSelf->tb_top__DOT__w_i_data))) 
                                           | ((IData)(
                                                      (0x3000ULL 
                                                       == 
                                                       (0x3010ULL 
                                                        & vlSelf->tb_top__DOT__w_i_data))) 
                                              | (IData)(
                                                        (0x2000ULL 
                                                         == 
                                                         (0x2020ULL 
                                                          & vlSelf->tb_top__DOT__w_i_data))))))))));
        bufp->chgBit(oldp+52,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                               & (~ (IData)((0U != 
                                             (3U & 
                                              ((IData)(
                                                       (vlSelf->tb_top__DOT__w_i_data 
                                                        >> 4U)) 
                                               ^ (IData)(
                                                         (vlSelf->tb_top__DOT__w_i_data 
                                                          >> 0xcU))))))))));
        bufp->chgCData(oldp+53,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                 >> 4U)))),4);
        bufp->chgCData(oldp+54,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                 >> 0xcU)))),4);
        bufp->chgBit(oldp+55,((1U & ((IData)((0x1000ULL 
                                              == (0x1030ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                     | ((IData)((0x3000ULL 
                                                 == 
                                                 (0x3010ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                        | (IData)((0x2000ULL 
                                                   == 
                                                   (0x2020ULL 
                                                    & vlSelf->tb_top__DOT__w_i_data))))))));
        bufp->chgBit(oldp+56,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(
                                                            (vlSelf->tb_top__DOT__w_i_data 
                                                             >> 4U)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_top__DOT__w_i_data 
                                                               >> 0xcU))))))))));
        bufp->chgBit(oldp+57,((1U & ((IData)((0x4000ULL 
                                              == (0x40c0ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                     | ((IData)((0xc000ULL 
                                                 == 
                                                 (0xc040ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                        | (IData)((0x8000ULL 
                                                   == 
                                                   (0x8080ULL 
                                                    & vlSelf->tb_top__DOT__w_i_data))))))));
        bufp->chgBit(oldp+58,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+59,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 6U)))),2);
        bufp->chgCData(oldp+60,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 0xeU)))),2);
        bufp->chgCData(oldp+61,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 4U)))),2);
        bufp->chgCData(oldp+62,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 0xcU)))),2);
        bufp->chgCData(oldp+63,((0xfU & (IData)(vlSelf->tb_top__DOT__w_i_data))),4);
        bufp->chgCData(oldp+64,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                 >> 8U)))),4);
        bufp->chgBit(oldp+65,((1U & ((IData)((0x100ULL 
                                              == (0x103ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                     | ((IData)((0x300ULL 
                                                 == 
                                                 (0x301ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                        | (IData)((0x200ULL 
                                                   == 
                                                   (0x202ULL 
                                                    & vlSelf->tb_top__DOT__w_i_data))))))));
        bufp->chgBit(oldp+66,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(vlSelf->tb_top__DOT__w_i_data) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_top__DOT__w_i_data 
                                                               >> 8U))))))))));
        bufp->chgBit(oldp+67,((1U & ((IData)((0x400ULL 
                                              == (0x40cULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                     | ((IData)((0xc00ULL 
                                                 == 
                                                 (0xc04ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                        | (IData)((0x800ULL 
                                                   == 
                                                   (0x808ULL 
                                                    & vlSelf->tb_top__DOT__w_i_data))))))));
        bufp->chgBit(oldp+68,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(
                                                            (vlSelf->tb_top__DOT__w_i_data 
                                                             >> 2U)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_top__DOT__w_i_data 
                                                               >> 0xaU))))))))));
        bufp->chgCData(oldp+69,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 2U)))),2);
        bufp->chgCData(oldp+70,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 0xaU)))),2);
        bufp->chgCData(oldp+71,((3U & (IData)(vlSelf->tb_top__DOT__w_i_data))),2);
        bufp->chgCData(oldp+72,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 8U)))),2);
        bufp->chgBit(oldp+73,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__w_compare));
        bufp->chgBit(oldp+74,((1U & (((IData)((0x4000000ULL 
                                               == (0x40c0000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | ((IData)((0xc000000ULL 
                                                  == 
                                                  (0xc040000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                         | (IData)(
                                                   (0x8000000ULL 
                                                    == 
                                                    (0x8080000ULL 
                                                     & vlSelf->tb_top__DOT__w_i_data))))) 
                                     | ((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(
                                                                (vlSelf->tb_top__DOT__w_i_data 
                                                                 >> 0x12U)) 
                                                        ^ (IData)(
                                                                  (vlSelf->tb_top__DOT__w_i_data 
                                                                   >> 0x1aU))))))) 
                                        & ((IData)(
                                                   (0x1000000ULL 
                                                    == 
                                                    (0x1030000ULL 
                                                     & vlSelf->tb_top__DOT__w_i_data))) 
                                           | ((IData)(
                                                      (0x3000000ULL 
                                                       == 
                                                       (0x3010000ULL 
                                                        & vlSelf->tb_top__DOT__w_i_data))) 
                                              | (IData)(
                                                        (0x2000000ULL 
                                                         == 
                                                         (0x2020000ULL 
                                                          & vlSelf->tb_top__DOT__w_i_data))))))))));
        bufp->chgBit(oldp+75,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(
                                                             (vlSelf->tb_top__DOT__w_i_data 
                                                              >> 0x12U)) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_top__DOT__w_i_data 
                                                                >> 0x1aU))))))) 
                                     & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(
                                                               (vlSelf->tb_top__DOT__w_i_data 
                                                                >> 0x10U)) 
                                                       ^ (IData)(
                                                                 (vlSelf->tb_top__DOT__w_i_data 
                                                                  >> 0x18U)))))))))));
        bufp->chgBit(oldp+76,((1U & (((IData)((0x40000000ULL 
                                               == (0x40c00000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | ((IData)((0xc0000000ULL 
                                                  == 
                                                  (0xc0400000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                         | (IData)(
                                                   (0x80000000ULL 
                                                    == 
                                                    (0x80800000ULL 
                                                     & vlSelf->tb_top__DOT__w_i_data))))) 
                                     | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                        & ((IData)(
                                                   (0x10000000ULL 
                                                    == 
                                                    (0x10300000ULL 
                                                     & vlSelf->tb_top__DOT__w_i_data))) 
                                           | ((IData)(
                                                      (0x30000000ULL 
                                                       == 
                                                       (0x30100000ULL 
                                                        & vlSelf->tb_top__DOT__w_i_data))) 
                                              | (IData)(
                                                        (0x20000000ULL 
                                                         == 
                                                         (0x20200000ULL 
                                                          & vlSelf->tb_top__DOT__w_i_data))))))))));
        bufp->chgBit(oldp+77,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                               & (~ (IData)((0U != 
                                             (3U & 
                                              ((IData)(
                                                       (vlSelf->tb_top__DOT__w_i_data 
                                                        >> 0x14U)) 
                                               ^ (IData)(
                                                         (vlSelf->tb_top__DOT__w_i_data 
                                                          >> 0x1cU))))))))));
        bufp->chgCData(oldp+78,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                 >> 0x14U)))),4);
        bufp->chgCData(oldp+79,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                 >> 0x1cU)))),4);
        bufp->chgBit(oldp+80,((1U & ((IData)((0x10000000ULL 
                                              == (0x10300000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                     | ((IData)((0x30000000ULL 
                                                 == 
                                                 (0x30100000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                        | (IData)((0x20000000ULL 
                                                   == 
                                                   (0x20200000ULL 
                                                    & vlSelf->tb_top__DOT__w_i_data))))))));
        bufp->chgBit(oldp+81,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(
                                                            (vlSelf->tb_top__DOT__w_i_data 
                                                             >> 0x14U)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_top__DOT__w_i_data 
                                                               >> 0x1cU))))))))));
        bufp->chgBit(oldp+82,((1U & ((IData)((0x40000000ULL 
                                              == (0x40c00000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                     | ((IData)((0xc0000000ULL 
                                                 == 
                                                 (0xc0400000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                        | (IData)((0x80000000ULL 
                                                   == 
                                                   (0x80800000ULL 
                                                    & vlSelf->tb_top__DOT__w_i_data))))))));
        bufp->chgBit(oldp+83,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+84,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 0x16U)))),2);
        bufp->chgCData(oldp+85,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 0x1eU)))),2);
        bufp->chgCData(oldp+86,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 0x14U)))),2);
        bufp->chgCData(oldp+87,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 0x1cU)))),2);
        bufp->chgCData(oldp+88,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                 >> 0x10U)))),4);
        bufp->chgCData(oldp+89,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                 >> 0x18U)))),4);
        bufp->chgBit(oldp+90,((1U & ((IData)((0x1000000ULL 
                                              == (0x1030000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                     | ((IData)((0x3000000ULL 
                                                 == 
                                                 (0x3010000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                        | (IData)((0x2000000ULL 
                                                   == 
                                                   (0x2020000ULL 
                                                    & vlSelf->tb_top__DOT__w_i_data))))))));
        bufp->chgBit(oldp+91,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(
                                                            (vlSelf->tb_top__DOT__w_i_data 
                                                             >> 0x10U)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_top__DOT__w_i_data 
                                                               >> 0x18U))))))))));
        bufp->chgBit(oldp+92,((1U & ((IData)((0x4000000ULL 
                                              == (0x40c0000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                     | ((IData)((0xc000000ULL 
                                                 == 
                                                 (0xc040000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                        | (IData)((0x8000000ULL 
                                                   == 
                                                   (0x8080000ULL 
                                                    & vlSelf->tb_top__DOT__w_i_data))))))));
        bufp->chgBit(oldp+93,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(
                                                            (vlSelf->tb_top__DOT__w_i_data 
                                                             >> 0x12U)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_top__DOT__w_i_data 
                                                               >> 0x1aU))))))))));
        bufp->chgCData(oldp+94,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 0x12U)))),2);
        bufp->chgCData(oldp+95,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 0x1aU)))),2);
        bufp->chgCData(oldp+96,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 0x10U)))),2);
        bufp->chgCData(oldp+97,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 0x18U)))),2);
        bufp->chgBit(oldp+98,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__w_compare));
        bufp->chgBit(oldp+99,((1U & (((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 3U)))) 
                                     | ((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                         ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                        >> 2U))))) 
                                        & ((IData)(
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))) 
                                           | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0)) 
                                               & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))) 
                                              | ((~ 
                                                  ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                   >> 1U)) 
                                                 & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                    >> 1U)))))))));
        bufp->chgBit(oldp+100,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                        ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))))))));
        bufp->chgBit(oldp+101,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+102,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+103,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+104,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+105,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+106,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+107,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+108,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+109,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+110,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+111,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+112,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+113,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))),4);
        bufp->chgCData(oldp+114,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))),4);
        bufp->chgBit(oldp+115,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))) 
                                      | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0)) 
                                          & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+116,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)))))))));
        bufp->chgBit(oldp+117,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+118,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+119,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+120,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+121,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))),2);
        bufp->chgCData(oldp+122,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))),2);
        bufp->chgBit(oldp+123,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__w_compare));
        bufp->chgBit(oldp+124,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                                     & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))) 
                                            | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0)) 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+125,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                        ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))))))));
        bufp->chgBit(oldp+126,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+127,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+128,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+129,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+130,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+131,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+132,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+133,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+134,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+135,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+136,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+137,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+138,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))),4);
        bufp->chgCData(oldp+139,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))),4);
        bufp->chgBit(oldp+140,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))) 
                                      | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0)) 
                                          & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+141,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)))))))));
        bufp->chgBit(oldp+142,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+143,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+144,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+145,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+146,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))),2);
        bufp->chgCData(oldp+147,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))),2);
        bufp->chgBit(oldp+148,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__w_compare));
        bufp->chgBit(oldp+149,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                                     & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))) 
                                            | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0)) 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+150,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                        ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))))))));
        bufp->chgBit(oldp+151,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+152,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+153,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+154,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+155,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+156,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+157,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+158,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+159,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+160,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+161,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+162,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+163,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))),4);
        bufp->chgCData(oldp+164,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))),4);
        bufp->chgBit(oldp+165,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))) 
                                      | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0)) 
                                          & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+166,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)))))))));
        bufp->chgBit(oldp+167,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+168,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+169,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+170,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+171,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))),2);
        bufp->chgCData(oldp+172,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))),2);
        bufp->chgCData(oldp+173,((0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                   >> 0x20U)))),8);
        bufp->chgCData(oldp+174,((0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                   >> 0x28U)))),8);
        bufp->chgCData(oldp+175,((0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                   >> 0x30U)))),8);
        bufp->chgCData(oldp+176,((0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                   >> 0x38U)))),8);
        bufp->chgCData(oldp+177,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0),8);
        bufp->chgCData(oldp+178,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0),8);
        bufp->chgCData(oldp+179,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0),8);
        bufp->chgCData(oldp+180,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1),8);
        bufp->chgCData(oldp+181,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0),8);
        bufp->chgCData(oldp+182,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1),8);
        bufp->chgCData(oldp+183,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0),8);
        bufp->chgCData(oldp+184,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1),8);
        bufp->chgCData(oldp+185,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1),8);
        bufp->chgCData(oldp+186,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0),8);
        bufp->chgBit(oldp+187,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__w_compare));
        bufp->chgBit(oldp+188,((1U & (((IData)((0x40000000000ULL 
                                                == 
                                                (0x40c00000000ULL 
                                                 & vlSelf->tb_top__DOT__w_i_data))) 
                                       | ((IData)((0xc0000000000ULL 
                                                   == 
                                                   (0xc0400000000ULL 
                                                    & vlSelf->tb_top__DOT__w_i_data))) 
                                          | (IData)(
                                                    (0x80000000000ULL 
                                                     == 
                                                     (0x80800000000ULL 
                                                      & vlSelf->tb_top__DOT__w_i_data))))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(
                                                                 (vlSelf->tb_top__DOT__w_i_data 
                                                                  >> 0x22U)) 
                                                         ^ (IData)(
                                                                   (vlSelf->tb_top__DOT__w_i_data 
                                                                    >> 0x2aU))))))) 
                                         & ((IData)(
                                                    (0x10000000000ULL 
                                                     == 
                                                     (0x10300000000ULL 
                                                      & vlSelf->tb_top__DOT__w_i_data))) 
                                            | ((IData)(
                                                       (0x30000000000ULL 
                                                        == 
                                                        (0x30100000000ULL 
                                                         & vlSelf->tb_top__DOT__w_i_data))) 
                                               | (IData)(
                                                         (0x20000000000ULL 
                                                          == 
                                                          (0x20200000000ULL 
                                                           & vlSelf->tb_top__DOT__w_i_data))))))))));
        bufp->chgBit(oldp+189,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(
                                                              (vlSelf->tb_top__DOT__w_i_data 
                                                               >> 0x22U)) 
                                                      ^ (IData)(
                                                                (vlSelf->tb_top__DOT__w_i_data 
                                                                 >> 0x2aU))))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(
                                                                (vlSelf->tb_top__DOT__w_i_data 
                                                                 >> 0x20U)) 
                                                        ^ (IData)(
                                                                  (vlSelf->tb_top__DOT__w_i_data 
                                                                   >> 0x28U)))))))))));
        bufp->chgBit(oldp+190,((1U & (((IData)((0x400000000000ULL 
                                                == 
                                                (0x40c000000000ULL 
                                                 & vlSelf->tb_top__DOT__w_i_data))) 
                                       | ((IData)((0xc00000000000ULL 
                                                   == 
                                                   (0xc04000000000ULL 
                                                    & vlSelf->tb_top__DOT__w_i_data))) 
                                          | (IData)(
                                                    (0x800000000000ULL 
                                                     == 
                                                     (0x808000000000ULL 
                                                      & vlSelf->tb_top__DOT__w_i_data))))) 
                                      | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    (0x100000000000ULL 
                                                     == 
                                                     (0x103000000000ULL 
                                                      & vlSelf->tb_top__DOT__w_i_data))) 
                                            | ((IData)(
                                                       (0x300000000000ULL 
                                                        == 
                                                        (0x301000000000ULL 
                                                         & vlSelf->tb_top__DOT__w_i_data))) 
                                               | (IData)(
                                                         (0x200000000000ULL 
                                                          == 
                                                          (0x202000000000ULL 
                                                           & vlSelf->tb_top__DOT__w_i_data))))))))));
        bufp->chgBit(oldp+191,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(
                                                        (vlSelf->tb_top__DOT__w_i_data 
                                                         >> 0x24U)) 
                                                ^ (IData)(
                                                          (vlSelf->tb_top__DOT__w_i_data 
                                                           >> 0x2cU))))))))));
        bufp->chgCData(oldp+192,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                  >> 0x24U)))),4);
        bufp->chgCData(oldp+193,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                  >> 0x2cU)))),4);
        bufp->chgBit(oldp+194,((1U & ((IData)((0x100000000000ULL 
                                               == (0x103000000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | ((IData)((0x300000000000ULL 
                                                  == 
                                                  (0x301000000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                         | (IData)(
                                                   (0x200000000000ULL 
                                                    == 
                                                    (0x202000000000ULL 
                                                     & vlSelf->tb_top__DOT__w_i_data))))))));
        bufp->chgBit(oldp+195,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(
                                                             (vlSelf->tb_top__DOT__w_i_data 
                                                              >> 0x24U)) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_top__DOT__w_i_data 
                                                                >> 0x2cU))))))))));
        bufp->chgBit(oldp+196,((1U & ((IData)((0x400000000000ULL 
                                               == (0x40c000000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | ((IData)((0xc00000000000ULL 
                                                  == 
                                                  (0xc04000000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                         | (IData)(
                                                   (0x800000000000ULL 
                                                    == 
                                                    (0x808000000000ULL 
                                                     & vlSelf->tb_top__DOT__w_i_data))))))));
        bufp->chgBit(oldp+197,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+198,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                >> 0x26U)))),2);
        bufp->chgCData(oldp+199,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                >> 0x2eU)))),2);
        bufp->chgCData(oldp+200,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                >> 0x24U)))),2);
        bufp->chgCData(oldp+201,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                >> 0x2cU)))),2);
        bufp->chgCData(oldp+202,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                  >> 0x20U)))),4);
        bufp->chgCData(oldp+203,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                  >> 0x28U)))),4);
        bufp->chgBit(oldp+204,((1U & ((IData)((0x10000000000ULL 
                                               == (0x10300000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | ((IData)((0x30000000000ULL 
                                                  == 
                                                  (0x30100000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                         | (IData)(
                                                   (0x20000000000ULL 
                                                    == 
                                                    (0x20200000000ULL 
                                                     & vlSelf->tb_top__DOT__w_i_data))))))));
        bufp->chgBit(oldp+205,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(
                                                             (vlSelf->tb_top__DOT__w_i_data 
                                                              >> 0x20U)) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_top__DOT__w_i_data 
                                                                >> 0x28U))))))))));
        bufp->chgBit(oldp+206,((1U & ((IData)((0x40000000000ULL 
                                               == (0x40c00000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | ((IData)((0xc0000000000ULL 
                                                  == 
                                                  (0xc0400000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                         | (IData)(
                                                   (0x80000000000ULL 
                                                    == 
                                                    (0x80800000000ULL 
                                                     & vlSelf->tb_top__DOT__w_i_data))))))));
        bufp->chgBit(oldp+207,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(
                                                             (vlSelf->tb_top__DOT__w_i_data 
                                                              >> 0x22U)) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_top__DOT__w_i_data 
                                                                >> 0x2aU))))))))));
        bufp->chgCData(oldp+208,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                >> 0x22U)))),2);
        bufp->chgCData(oldp+209,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                >> 0x2aU)))),2);
        bufp->chgCData(oldp+210,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                >> 0x20U)))),2);
        bufp->chgCData(oldp+211,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                >> 0x28U)))),2);
        bufp->chgBit(oldp+212,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__w_compare));
        bufp->chgBit(oldp+213,((1U & (((IData)((0x400000000000000ULL 
                                                == 
                                                (0x40c000000000000ULL 
                                                 & vlSelf->tb_top__DOT__w_i_data))) 
                                       | ((IData)((0xc00000000000000ULL 
                                                   == 
                                                   (0xc04000000000000ULL 
                                                    & vlSelf->tb_top__DOT__w_i_data))) 
                                          | (IData)(
                                                    (0x800000000000000ULL 
                                                     == 
                                                     (0x808000000000000ULL 
                                                      & vlSelf->tb_top__DOT__w_i_data))))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(
                                                                 (vlSelf->tb_top__DOT__w_i_data 
                                                                  >> 0x32U)) 
                                                         ^ (IData)(
                                                                   (vlSelf->tb_top__DOT__w_i_data 
                                                                    >> 0x3aU))))))) 
                                         & ((IData)(
                                                    (0x100000000000000ULL 
                                                     == 
                                                     (0x103000000000000ULL 
                                                      & vlSelf->tb_top__DOT__w_i_data))) 
                                            | ((IData)(
                                                       (0x300000000000000ULL 
                                                        == 
                                                        (0x301000000000000ULL 
                                                         & vlSelf->tb_top__DOT__w_i_data))) 
                                               | (IData)(
                                                         (0x200000000000000ULL 
                                                          == 
                                                          (0x202000000000000ULL 
                                                           & vlSelf->tb_top__DOT__w_i_data))))))))));
        bufp->chgBit(oldp+214,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(
                                                              (vlSelf->tb_top__DOT__w_i_data 
                                                               >> 0x32U)) 
                                                      ^ (IData)(
                                                                (vlSelf->tb_top__DOT__w_i_data 
                                                                 >> 0x3aU))))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(
                                                                (vlSelf->tb_top__DOT__w_i_data 
                                                                 >> 0x30U)) 
                                                        ^ (IData)(
                                                                  (vlSelf->tb_top__DOT__w_i_data 
                                                                   >> 0x38U)))))))))));
        bufp->chgBit(oldp+215,((1U & (((IData)((0x4000000000000000ULL 
                                                == 
                                                (0x40c0000000000000ULL 
                                                 & vlSelf->tb_top__DOT__w_i_data))) 
                                       | ((IData)((0xc000000000000000ULL 
                                                   == 
                                                   (0xc040000000000000ULL 
                                                    & vlSelf->tb_top__DOT__w_i_data))) 
                                          | (IData)(
                                                    (0x8000000000000000ULL 
                                                     == 
                                                     (0x8080000000000000ULL 
                                                      & vlSelf->tb_top__DOT__w_i_data))))) 
                                      | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    (0x1000000000000000ULL 
                                                     == 
                                                     (0x1030000000000000ULL 
                                                      & vlSelf->tb_top__DOT__w_i_data))) 
                                            | ((IData)(
                                                       (0x3000000000000000ULL 
                                                        == 
                                                        (0x3010000000000000ULL 
                                                         & vlSelf->tb_top__DOT__w_i_data))) 
                                               | (IData)(
                                                         (0x2000000000000000ULL 
                                                          == 
                                                          (0x2020000000000000ULL 
                                                           & vlSelf->tb_top__DOT__w_i_data))))))))));
        bufp->chgBit(oldp+216,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(
                                                        (vlSelf->tb_top__DOT__w_i_data 
                                                         >> 0x34U)) 
                                                ^ (IData)(
                                                          (vlSelf->tb_top__DOT__w_i_data 
                                                           >> 0x3cU))))))))));
        bufp->chgCData(oldp+217,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                  >> 0x34U)))),4);
        bufp->chgCData(oldp+218,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                  >> 0x3cU)))),4);
        bufp->chgBit(oldp+219,((1U & ((IData)((0x1000000000000000ULL 
                                               == (0x1030000000000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | ((IData)((0x3000000000000000ULL 
                                                  == 
                                                  (0x3010000000000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                         | (IData)(
                                                   (0x2000000000000000ULL 
                                                    == 
                                                    (0x2020000000000000ULL 
                                                     & vlSelf->tb_top__DOT__w_i_data))))))));
        bufp->chgBit(oldp+220,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(
                                                             (vlSelf->tb_top__DOT__w_i_data 
                                                              >> 0x34U)) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_top__DOT__w_i_data 
                                                                >> 0x3cU))))))))));
        bufp->chgBit(oldp+221,((1U & ((IData)((0x4000000000000000ULL 
                                               == (0x40c0000000000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | ((IData)((0xc000000000000000ULL 
                                                  == 
                                                  (0xc040000000000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                         | (IData)(
                                                   (0x8000000000000000ULL 
                                                    == 
                                                    (0x8080000000000000ULL 
                                                     & vlSelf->tb_top__DOT__w_i_data))))))));
        bufp->chgBit(oldp+222,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+223,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                >> 0x36U)))),2);
        bufp->chgCData(oldp+224,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                >> 0x3eU)))),2);
        bufp->chgCData(oldp+225,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                >> 0x34U)))),2);
        bufp->chgCData(oldp+226,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                >> 0x3cU)))),2);
        bufp->chgCData(oldp+227,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                  >> 0x30U)))),4);
        bufp->chgCData(oldp+228,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                  >> 0x38U)))),4);
        bufp->chgBit(oldp+229,((1U & ((IData)((0x100000000000000ULL 
                                               == (0x103000000000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | ((IData)((0x300000000000000ULL 
                                                  == 
                                                  (0x301000000000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                         | (IData)(
                                                   (0x200000000000000ULL 
                                                    == 
                                                    (0x202000000000000ULL 
                                                     & vlSelf->tb_top__DOT__w_i_data))))))));
        bufp->chgBit(oldp+230,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(
                                                             (vlSelf->tb_top__DOT__w_i_data 
                                                              >> 0x30U)) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_top__DOT__w_i_data 
                                                                >> 0x38U))))))))));
        bufp->chgBit(oldp+231,((1U & ((IData)((0x400000000000000ULL 
                                               == (0x40c000000000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | ((IData)((0xc00000000000000ULL 
                                                  == 
                                                  (0xc04000000000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                         | (IData)(
                                                   (0x800000000000000ULL 
                                                    == 
                                                    (0x808000000000000ULL 
                                                     & vlSelf->tb_top__DOT__w_i_data))))))));
        bufp->chgBit(oldp+232,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(
                                                             (vlSelf->tb_top__DOT__w_i_data 
                                                              >> 0x32U)) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_top__DOT__w_i_data 
                                                                >> 0x3aU))))))))));
        bufp->chgCData(oldp+233,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                >> 0x32U)))),2);
        bufp->chgCData(oldp+234,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                >> 0x3aU)))),2);
        bufp->chgCData(oldp+235,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                >> 0x30U)))),2);
        bufp->chgCData(oldp+236,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                >> 0x38U)))),2);
        bufp->chgBit(oldp+237,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__w_compare));
        bufp->chgBit(oldp+238,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                                     & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))) 
                                            | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0)) 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+239,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                        ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))))))));
        bufp->chgBit(oldp+240,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+241,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+242,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+243,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+244,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+245,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+246,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+247,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+248,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+249,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+250,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+251,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+252,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))),4);
        bufp->chgCData(oldp+253,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))),4);
        bufp->chgBit(oldp+254,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))) 
                                      | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0)) 
                                          & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+255,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)))))))));
        bufp->chgBit(oldp+256,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+257,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+258,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+259,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+260,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))),2);
        bufp->chgCData(oldp+261,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))),2);
        bufp->chgBit(oldp+262,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__w_compare));
        bufp->chgBit(oldp+263,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                                     & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))) 
                                            | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0)) 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+264,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                        ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))))))));
        bufp->chgBit(oldp+265,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+266,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+267,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+268,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+269,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+270,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+271,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+272,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+273,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+274,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+275,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+276,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+277,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))),4);
        bufp->chgCData(oldp+278,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))),4);
        bufp->chgBit(oldp+279,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))) 
                                      | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0)) 
                                          & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+280,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)))))))));
        bufp->chgBit(oldp+281,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+282,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+283,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+284,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+285,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))),2);
        bufp->chgCData(oldp+286,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))),2);
        bufp->chgBit(oldp+287,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__w_compare));
        bufp->chgBit(oldp+288,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                                     & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))) 
                                            | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0)) 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+289,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                        ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))))))));
        bufp->chgBit(oldp+290,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+291,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+292,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+293,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+294,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+295,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+296,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+297,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+298,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+299,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+300,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+301,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+302,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))),4);
        bufp->chgCData(oldp+303,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))),4);
        bufp->chgBit(oldp+304,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))) 
                                      | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0)) 
                                          & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+305,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)))))))));
        bufp->chgBit(oldp+306,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+307,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+308,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+309,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+310,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))),2);
        bufp->chgCData(oldp+311,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))),2);
        bufp->chgCData(oldp+312,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_0),8);
        bufp->chgCData(oldp+313,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_0),8);
        bufp->chgCData(oldp+314,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_0),8);
        bufp->chgCData(oldp+315,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0),8);
        bufp->chgCData(oldp+316,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1),8);
        bufp->chgCData(oldp+317,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_1),8);
        bufp->chgCData(oldp+318,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_2),8);
        bufp->chgCData(oldp+319,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_3),8);
        bufp->chgCData(oldp+320,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1),8);
        bufp->chgCData(oldp+321,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2),8);
        bufp->chgCData(oldp+322,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3),8);
        bufp->chgCData(oldp+323,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0),8);
        bufp->chgCData(oldp+324,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1),8);
        bufp->chgCData(oldp+325,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2),8);
        bufp->chgCData(oldp+326,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1),8);
        bufp->chgCData(oldp+327,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2),8);
        bufp->chgCData(oldp+328,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0),8);
        bufp->chgCData(oldp+329,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1),8);
        bufp->chgBit(oldp+330,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare));
        bufp->chgBit(oldp+331,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                                     & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))) 
                                            | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0)) 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+332,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                        ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))))))));
        bufp->chgBit(oldp+333,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+334,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+335,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+336,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+337,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+338,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+339,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+340,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+341,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+342,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+343,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+344,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+345,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))),4);
        bufp->chgCData(oldp+346,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))),4);
        bufp->chgBit(oldp+347,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))) 
                                      | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0)) 
                                          & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+348,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)))))))));
        bufp->chgBit(oldp+349,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+350,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+351,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+352,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+353,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))),2);
        bufp->chgCData(oldp+354,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))),2);
        bufp->chgBit(oldp+355,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__w_compare));
        bufp->chgBit(oldp+356,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                                     & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))) 
                                            | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0)) 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+357,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                        ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))))))));
        bufp->chgBit(oldp+358,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+359,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+360,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+361,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+362,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+363,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+364,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+365,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+366,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+367,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+368,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+369,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+370,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))),4);
        bufp->chgCData(oldp+371,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))),4);
        bufp->chgBit(oldp+372,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))) 
                                      | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0)) 
                                          & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+373,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)))))))));
        bufp->chgBit(oldp+374,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+375,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+376,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+377,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+378,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))),2);
        bufp->chgCData(oldp+379,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))),2);
        bufp->chgBit(oldp+380,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__w_compare));
        bufp->chgBit(oldp+381,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                                     & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))) 
                                            | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0)) 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+382,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                        ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))))))));
        bufp->chgBit(oldp+383,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+384,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+385,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+386,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+387,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+388,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+389,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+390,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+391,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+392,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+393,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+394,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+395,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))),4);
        bufp->chgCData(oldp+396,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))),4);
        bufp->chgBit(oldp+397,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))) 
                                      | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0)) 
                                          & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+398,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)))))))));
        bufp->chgBit(oldp+399,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+400,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+401,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+402,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+403,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))),2);
        bufp->chgCData(oldp+404,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))),2);
        bufp->chgBit(oldp+405,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare));
        bufp->chgBit(oldp+406,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                                     & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))) 
                                            | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)) 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+407,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                        ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))))))));
        bufp->chgBit(oldp+408,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+409,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+410,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+411,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+412,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+413,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+414,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+415,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+416,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+417,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+418,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+419,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+420,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))),4);
        bufp->chgCData(oldp+421,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))),4);
        bufp->chgBit(oldp+422,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))) 
                                      | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)) 
                                          & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+423,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))))))));
        bufp->chgBit(oldp+424,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+425,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+426,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+427,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+428,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))),2);
        bufp->chgCData(oldp+429,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))),2);
        bufp->chgBit(oldp+430,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare));
        bufp->chgBit(oldp+431,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                                     & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))) 
                                            | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+432,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                        ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))))))));
        bufp->chgBit(oldp+433,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+434,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+435,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+436,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+437,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+438,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+439,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+440,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+441,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+442,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+443,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+444,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+445,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))),4);
        bufp->chgCData(oldp+446,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))),4);
        bufp->chgBit(oldp+447,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))) 
                                      | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                          & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+448,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)))))))));
        bufp->chgBit(oldp+449,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+450,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+451,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+452,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+453,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))),2);
        bufp->chgCData(oldp+454,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))),2);
        bufp->chgBit(oldp+455,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__w_compare));
        bufp->chgBit(oldp+456,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                                     & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))) 
                                            | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1)) 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+457,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                        ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))))))));
        bufp->chgBit(oldp+458,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+459,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+460,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+461,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+462,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+463,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+464,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+465,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+466,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+467,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+468,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+469,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+470,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))),4);
        bufp->chgCData(oldp+471,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))),4);
        bufp->chgBit(oldp+472,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))) 
                                      | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1)) 
                                          & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+473,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)))))))));
        bufp->chgBit(oldp+474,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+475,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+476,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+477,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+478,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))),2);
        bufp->chgCData(oldp+479,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))),2);
        bufp->chgBit(oldp+480,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare));
        bufp->chgBit(oldp+481,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                                     & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))) 
                                            | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)) 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+482,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                        ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))))))));
        bufp->chgBit(oldp+483,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+484,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+485,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+486,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+487,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+488,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+489,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+490,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+491,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+492,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+493,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+494,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+495,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))),4);
        bufp->chgCData(oldp+496,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))),4);
        bufp->chgBit(oldp+497,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))) 
                                      | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)) 
                                          & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+498,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))))))));
        bufp->chgBit(oldp+499,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+500,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+501,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+502,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+503,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))),2);
        bufp->chgCData(oldp+504,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))),2);
        bufp->chgBit(oldp+505,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare));
        bufp->chgBit(oldp+506,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                                     & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))) 
                                            | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+507,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                        ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))))))));
        bufp->chgBit(oldp+508,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+509,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+510,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+511,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+512,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+513,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+514,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+515,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+516,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+517,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+518,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+519,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+520,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))),4);
        bufp->chgCData(oldp+521,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))),4);
        bufp->chgBit(oldp+522,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))) 
                                      | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                          & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+523,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)))))))));
        bufp->chgBit(oldp+524,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+525,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+526,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+527,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+528,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))),2);
        bufp->chgCData(oldp+529,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))),2);
        bufp->chgBit(oldp+530,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare));
        bufp->chgBit(oldp+531,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                          ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                                     & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))) 
                                            | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)) 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+532,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                        ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))))))));
        bufp->chgBit(oldp+533,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                                & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                          | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                                     & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+534,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+535,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+536,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+537,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+538,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+539,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+540,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+541,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+542,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+543,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+544,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+545,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))),4);
        bufp->chgCData(oldp+546,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))),4);
        bufp->chgBit(oldp+547,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))) 
                                      | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)) 
                                          & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+548,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))))))));
        bufp->chgBit(oldp+549,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                               & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                         | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+550,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+551,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+552,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+553,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))),2);
        bufp->chgCData(oldp+554,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))),2);
        bufp->chgQData(oldp+555,(vlSelf->tb_top__DOT__SCOREBOARD__DOT__expected_sorted),64);
    }
    bufp->chgCData(oldp+557,(vlSelf->i_data_a),8);
    bufp->chgCData(oldp+558,(vlSelf->i_data_b),8);
    bufp->chgBit(oldp+559,(vlSelf->o_less));
    bufp->chgBit(oldp+560,(vlSelf->COMP_parallel_prefix_binary__DOT__w_max_0_0));
    bufp->chgBit(oldp+561,(((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                            | ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                               & ((~ ((IData)(vlSelf->i_data_b) 
                                      >> 4U)) & ((IData)(vlSelf->i_data_a) 
                                                 >> 4U))))));
    bufp->chgBit(oldp+562,(((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                            | ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                               & ((~ ((IData)(vlSelf->i_data_b) 
                                      >> 2U)) & ((IData)(vlSelf->i_data_a) 
                                                 >> 2U))))));
    bufp->chgBit(oldp+563,((1U & (((~ ((IData)(vlSelf->i_data_b) 
                                       >> 1U)) & ((IData)(vlSelf->i_data_a) 
                                                  >> 1U)) 
                                  | ((~ (((~ ((IData)(vlSelf->i_data_b) 
                                              >> 1U)) 
                                          & ((IData)(vlSelf->i_data_a) 
                                             >> 1U)) 
                                         | (IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                     & ((~ (IData)(vlSelf->i_data_b)) 
                                        & (IData)(vlSelf->i_data_a)))))));
    bufp->chgBit(oldp+564,(vlSelf->COMP_parallel_prefix_binary__DOT__w_min_0_0));
    bufp->chgBit(oldp+565,(((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                            | ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                               & ((~ ((IData)(vlSelf->i_data_a) 
                                      >> 4U)) & ((IData)(vlSelf->i_data_b) 
                                                 >> 4U))))));
    bufp->chgBit(oldp+566,(((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                            | ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                               & ((~ ((IData)(vlSelf->i_data_a) 
                                      >> 2U)) & ((IData)(vlSelf->i_data_b) 
                                                 >> 2U))))));
    bufp->chgBit(oldp+567,((1U & ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                  | ((~ (((~ ((IData)(vlSelf->i_data_b) 
                                              >> 1U)) 
                                          & ((IData)(vlSelf->i_data_a) 
                                             >> 1U)) 
                                         | (IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                     & ((~ (IData)(vlSelf->i_data_a)) 
                                        & (IData)(vlSelf->i_data_b)))))));
    bufp->chgBit(oldp+568,(((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__w_min_0_0) 
                            | ((~ (IData)(vlSelf->COMP_parallel_prefix_binary__DOT__w_max_0_0)) 
                               & ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                  | ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                     & ((~ ((IData)(vlSelf->i_data_a) 
                                            >> 4U)) 
                                        & ((IData)(vlSelf->i_data_b) 
                                           >> 4U))))))));
    bufp->chgBit(oldp+569,((1U & (((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                   | ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                      & ((~ ((IData)(vlSelf->i_data_a) 
                                             >> 2U)) 
                                         & ((IData)(vlSelf->i_data_b) 
                                            >> 2U)))) 
                                  | ((~ ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                         | ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                            & ((~ ((IData)(vlSelf->i_data_b) 
                                                   >> 2U)) 
                                               & ((IData)(vlSelf->i_data_a) 
                                                  >> 2U))))) 
                                     & ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                        | ((~ (((~ 
                                                 ((IData)(vlSelf->i_data_b) 
                                                  >> 1U)) 
                                                & ((IData)(vlSelf->i_data_a) 
                                                   >> 1U)) 
                                               | (IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                           & ((~ (IData)(vlSelf->i_data_a)) 
                                              & (IData)(vlSelf->i_data_b)))))))));
    bufp->chgBit(oldp+570,(((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__w_max_0_0) 
                            | ((~ (IData)(vlSelf->COMP_parallel_prefix_binary__DOT__w_min_0_0)) 
                               & ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                  | ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                     & ((~ ((IData)(vlSelf->i_data_b) 
                                            >> 4U)) 
                                        & ((IData)(vlSelf->i_data_a) 
                                           >> 4U))))))));
    bufp->chgCData(oldp+571,((3U & ((IData)(vlSelf->i_data_a) 
                                    >> 6U))),2);
    bufp->chgCData(oldp+572,((3U & ((IData)(vlSelf->i_data_b) 
                                    >> 6U))),2);
    bufp->chgCData(oldp+573,((3U & ((IData)(vlSelf->i_data_a) 
                                    >> 4U))),2);
    bufp->chgCData(oldp+574,((3U & ((IData)(vlSelf->i_data_b) 
                                    >> 4U))),2);
    bufp->chgCData(oldp+575,((3U & ((IData)(vlSelf->i_data_a) 
                                    >> 2U))),2);
    bufp->chgCData(oldp+576,((3U & ((IData)(vlSelf->i_data_b) 
                                    >> 2U))),2);
    bufp->chgCData(oldp+577,((3U & (IData)(vlSelf->i_data_a))),2);
    bufp->chgCData(oldp+578,((3U & (IData)(vlSelf->i_data_b))),2);
    bufp->chgBit(oldp+579,(vlSelf->tb_top__DOT__i_clk));
    bufp->chgBit(oldp+580,(vlSelf->tb_top__DOT__i_rst_n));
    bufp->chgCData(oldp+581,(vlSelf->tb_top__DOT__DRIVER__DOT__next_state),2);
    bufp->chgIData(oldp+582,(vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_count),32);
    bufp->chgIData(oldp+583,(vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_pass),32);
    bufp->chgBit(oldp+584,(vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_complete));
}

void Vtb_lib___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root__trace_cleanup\n"); );
    // Init
    Vtb_lib___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_lib___024root*>(voidSelf);
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
