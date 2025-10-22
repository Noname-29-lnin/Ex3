// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_Question6__Syms.h"


void Vtb_Question6___024root__trace_chg_0_sub_0(Vtb_Question6___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_Question6___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root__trace_chg_0\n"); );
    // Init
    Vtb_Question6___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Question6___024root*>(voidSelf);
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_Question6___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_Question6___024root__trace_chg_0_sub_0(Vtb_Question6___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->tb_Question6__DOT__test_count),32);
        bufp->chgIData(oldp+1,(vlSelf->tb_Question6__DOT__test_pass),32);
        bufp->chgBit(oldp+2,(vlSelf->tb_Question6__DOT__i_rst_n));
        bufp->chgQData(oldp+3,(vlSelf->tb_Question6__DOT__i_data),64);
        bufp->chgCData(oldp+5,((0xffU & (IData)(vlSelf->tb_Question6__DOT__i_data))),8);
        bufp->chgCData(oldp+6,((0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 8U)))),8);
        bufp->chgCData(oldp+7,((0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x10U)))),8);
        bufp->chgCData(oldp+8,((0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x18U)))),8);
        bufp->chgBit(oldp+9,((1U & ((((~ (IData)((0ULL 
                                                  != 
                                                  (0xcULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                      & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0xaU))) 
                                     | ((IData)((0xc00ULL 
                                                 == 
                                                 (0xc04ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                        | (IData)((0x800ULL 
                                                   == 
                                                   (0x808ULL 
                                                    & vlSelf->tb_Question6__DOT__i_data))))) 
                                    | ((~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(
                                                               (vlSelf->tb_Question6__DOT__i_data 
                                                                >> 2U)) 
                                                       ^ (IData)(
                                                                 (vlSelf->tb_Question6__DOT__i_data 
                                                                  >> 0xaU))))))) 
                                       & (((~ ((IData)(
                                                       (vlSelf->tb_Question6__DOT__i_data 
                                                        >> 1U)) 
                                               | (IData)(vlSelf->tb_Question6__DOT__i_data))) 
                                           & (IData)(
                                                     (vlSelf->tb_Question6__DOT__i_data 
                                                      >> 8U))) 
                                          | ((IData)(
                                                     (0x300ULL 
                                                      == 
                                                      (0x301ULL 
                                                       & vlSelf->tb_Question6__DOT__i_data))) 
                                             | (IData)(
                                                       (0x200ULL 
                                                        == 
                                                        (0x202ULL 
                                                         & vlSelf->tb_Question6__DOT__i_data))))))))));
        bufp->chgBit(oldp+10,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(
                                                             (vlSelf->tb_Question6__DOT__i_data 
                                                              >> 2U)) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_Question6__DOT__i_data 
                                                                >> 0xaU))))))) 
                                     & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelf->tb_Question6__DOT__i_data) 
                                                       ^ (IData)(
                                                                 (vlSelf->tb_Question6__DOT__i_data 
                                                                  >> 8U)))))))))));
        bufp->chgCData(oldp+11,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 4U)))),4);
        bufp->chgCData(oldp+12,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0xcU)))),4);
        bufp->chgBit(oldp+13,((1U & (((~ (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                      & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0xcU))) 
                                     | ((IData)((0x3000ULL 
                                                 == 
                                                 (0x3010ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                        | (IData)((0x2000ULL 
                                                   == 
                                                   (0x2020ULL 
                                                    & vlSelf->tb_Question6__DOT__i_data))))))));
        bufp->chgBit(oldp+14,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(
                                                            (vlSelf->tb_Question6__DOT__i_data 
                                                             >> 4U)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_Question6__DOT__i_data 
                                                               >> 0xcU))))))))));
        bufp->chgBit(oldp+15,((1U & (((~ (IData)((0ULL 
                                                  != 
                                                  (0xc0ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                      & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0xeU))) 
                                     | ((IData)((0xc000ULL 
                                                 == 
                                                 (0xc040ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                        | (IData)((0x8000ULL 
                                                   == 
                                                   (0x8080ULL 
                                                    & vlSelf->tb_Question6__DOT__i_data))))))));
        bufp->chgCData(oldp+16,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 6U)))),2);
        bufp->chgCData(oldp+17,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0xeU)))),2);
        bufp->chgCData(oldp+18,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 4U)))),2);
        bufp->chgCData(oldp+19,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0xcU)))),2);
        bufp->chgCData(oldp+20,((0xfU & (IData)(vlSelf->tb_Question6__DOT__i_data))),4);
        bufp->chgCData(oldp+21,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 8U)))),4);
        bufp->chgBit(oldp+22,((1U & (((~ ((IData)((vlSelf->tb_Question6__DOT__i_data 
                                                   >> 1U)) 
                                          | (IData)(vlSelf->tb_Question6__DOT__i_data))) 
                                      & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 8U))) 
                                     | ((IData)((0x300ULL 
                                                 == 
                                                 (0x301ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                        | (IData)((0x200ULL 
                                                   == 
                                                   (0x202ULL 
                                                    & vlSelf->tb_Question6__DOT__i_data))))))));
        bufp->chgBit(oldp+23,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(vlSelf->tb_Question6__DOT__i_data) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_Question6__DOT__i_data 
                                                               >> 8U))))))))));
        bufp->chgBit(oldp+24,((1U & (((~ (IData)((0ULL 
                                                  != 
                                                  (0xcULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                      & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0xaU))) 
                                     | ((IData)((0xc00ULL 
                                                 == 
                                                 (0xc04ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                        | (IData)((0x800ULL 
                                                   == 
                                                   (0x808ULL 
                                                    & vlSelf->tb_Question6__DOT__i_data))))))));
        bufp->chgBit(oldp+25,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(
                                                            (vlSelf->tb_Question6__DOT__i_data 
                                                             >> 2U)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_Question6__DOT__i_data 
                                                               >> 0xaU))))))))));
        bufp->chgCData(oldp+26,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 2U)))),2);
        bufp->chgCData(oldp+27,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0xaU)))),2);
        bufp->chgCData(oldp+28,((3U & (IData)(vlSelf->tb_Question6__DOT__i_data))),2);
        bufp->chgCData(oldp+29,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 8U)))),2);
        bufp->chgBit(oldp+30,((1U & ((((~ (IData)((0ULL 
                                                   != 
                                                   (0xc0000ULL 
                                                    & vlSelf->tb_Question6__DOT__i_data)))) 
                                       & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                  >> 0x1aU))) 
                                      | ((IData)((0xc000000ULL 
                                                  == 
                                                  (0xc040000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data))) 
                                         | (IData)(
                                                   (0x8000000ULL 
                                                    == 
                                                    (0x8080000ULL 
                                                     & vlSelf->tb_Question6__DOT__i_data))))) 
                                     | ((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(
                                                                (vlSelf->tb_Question6__DOT__i_data 
                                                                 >> 0x12U)) 
                                                        ^ (IData)(
                                                                  (vlSelf->tb_Question6__DOT__i_data 
                                                                   >> 0x1aU))))))) 
                                        & (((~ (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x30000ULL 
                                                         & vlSelf->tb_Question6__DOT__i_data)))) 
                                            & (IData)(
                                                      (vlSelf->tb_Question6__DOT__i_data 
                                                       >> 0x18U))) 
                                           | ((IData)(
                                                      (0x3000000ULL 
                                                       == 
                                                       (0x3010000ULL 
                                                        & vlSelf->tb_Question6__DOT__i_data))) 
                                              | (IData)(
                                                        (0x2000000ULL 
                                                         == 
                                                         (0x2020000ULL 
                                                          & vlSelf->tb_Question6__DOT__i_data))))))))));
        bufp->chgBit(oldp+31,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(
                                                             (vlSelf->tb_Question6__DOT__i_data 
                                                              >> 0x12U)) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_Question6__DOT__i_data 
                                                                >> 0x1aU))))))) 
                                     & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(
                                                               (vlSelf->tb_Question6__DOT__i_data 
                                                                >> 0x10U)) 
                                                       ^ (IData)(
                                                                 (vlSelf->tb_Question6__DOT__i_data 
                                                                  >> 0x18U)))))))))));
        bufp->chgCData(oldp+32,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x14U)))),4);
        bufp->chgCData(oldp+33,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x1cU)))),4);
        bufp->chgBit(oldp+34,((1U & (((~ (IData)((0ULL 
                                                  != 
                                                  (0x300000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                      & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x1cU))) 
                                     | ((IData)((0x30000000ULL 
                                                 == 
                                                 (0x30100000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                        | (IData)((0x20000000ULL 
                                                   == 
                                                   (0x20200000ULL 
                                                    & vlSelf->tb_Question6__DOT__i_data))))))));
        bufp->chgBit(oldp+35,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(
                                                            (vlSelf->tb_Question6__DOT__i_data 
                                                             >> 0x14U)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_Question6__DOT__i_data 
                                                               >> 0x1cU))))))))));
        bufp->chgBit(oldp+36,((1U & (((~ (IData)((0ULL 
                                                  != 
                                                  (0xc00000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                      & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x1eU))) 
                                     | ((IData)((0xc0000000ULL 
                                                 == 
                                                 (0xc0400000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                        | (IData)((0x80000000ULL 
                                                   == 
                                                   (0x80800000ULL 
                                                    & vlSelf->tb_Question6__DOT__i_data))))))));
        bufp->chgCData(oldp+37,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x16U)))),2);
        bufp->chgCData(oldp+38,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x1eU)))),2);
        bufp->chgCData(oldp+39,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x14U)))),2);
        bufp->chgCData(oldp+40,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x1cU)))),2);
        bufp->chgCData(oldp+41,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x10U)))),4);
        bufp->chgCData(oldp+42,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x18U)))),4);
        bufp->chgBit(oldp+43,((1U & (((~ (IData)((0ULL 
                                                  != 
                                                  (0x30000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                      & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x18U))) 
                                     | ((IData)((0x3000000ULL 
                                                 == 
                                                 (0x3010000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                        | (IData)((0x2000000ULL 
                                                   == 
                                                   (0x2020000ULL 
                                                    & vlSelf->tb_Question6__DOT__i_data))))))));
        bufp->chgBit(oldp+44,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(
                                                            (vlSelf->tb_Question6__DOT__i_data 
                                                             >> 0x10U)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_Question6__DOT__i_data 
                                                               >> 0x18U))))))))));
        bufp->chgBit(oldp+45,((1U & (((~ (IData)((0ULL 
                                                  != 
                                                  (0xc0000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                      & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x1aU))) 
                                     | ((IData)((0xc000000ULL 
                                                 == 
                                                 (0xc040000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                        | (IData)((0x8000000ULL 
                                                   == 
                                                   (0x8080000ULL 
                                                    & vlSelf->tb_Question6__DOT__i_data))))))));
        bufp->chgBit(oldp+46,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(
                                                            (vlSelf->tb_Question6__DOT__i_data 
                                                             >> 0x12U)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_Question6__DOT__i_data 
                                                               >> 0x1aU))))))))));
        bufp->chgCData(oldp+47,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x12U)))),2);
        bufp->chgCData(oldp+48,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x1aU)))),2);
        bufp->chgCData(oldp+49,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x10U)))),2);
        bufp->chgCData(oldp+50,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x18U)))),2);
        bufp->chgCData(oldp+51,((0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                  >> 0x20U)))),8);
        bufp->chgCData(oldp+52,((0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                  >> 0x28U)))),8);
        bufp->chgCData(oldp+53,((0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                  >> 0x30U)))),8);
        bufp->chgCData(oldp+54,((0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                  >> 0x38U)))),8);
        bufp->chgBit(oldp+55,((1U & ((((~ (IData)((0ULL 
                                                   != 
                                                   (0xc00000000ULL 
                                                    & vlSelf->tb_Question6__DOT__i_data)))) 
                                       & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                  >> 0x2aU))) 
                                      | ((IData)((0xc0000000000ULL 
                                                  == 
                                                  (0xc0400000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data))) 
                                         | (IData)(
                                                   (0x80000000000ULL 
                                                    == 
                                                    (0x80800000000ULL 
                                                     & vlSelf->tb_Question6__DOT__i_data))))) 
                                     | ((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(
                                                                (vlSelf->tb_Question6__DOT__i_data 
                                                                 >> 0x22U)) 
                                                        ^ (IData)(
                                                                  (vlSelf->tb_Question6__DOT__i_data 
                                                                   >> 0x2aU))))))) 
                                        & (((~ (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x300000000ULL 
                                                         & vlSelf->tb_Question6__DOT__i_data)))) 
                                            & (IData)(
                                                      (vlSelf->tb_Question6__DOT__i_data 
                                                       >> 0x28U))) 
                                           | ((IData)(
                                                      (0x30000000000ULL 
                                                       == 
                                                       (0x30100000000ULL 
                                                        & vlSelf->tb_Question6__DOT__i_data))) 
                                              | (IData)(
                                                        (0x20000000000ULL 
                                                         == 
                                                         (0x20200000000ULL 
                                                          & vlSelf->tb_Question6__DOT__i_data))))))))));
        bufp->chgBit(oldp+56,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(
                                                             (vlSelf->tb_Question6__DOT__i_data 
                                                              >> 0x22U)) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_Question6__DOT__i_data 
                                                                >> 0x2aU))))))) 
                                     & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(
                                                               (vlSelf->tb_Question6__DOT__i_data 
                                                                >> 0x20U)) 
                                                       ^ (IData)(
                                                                 (vlSelf->tb_Question6__DOT__i_data 
                                                                  >> 0x28U)))))))))));
        bufp->chgCData(oldp+57,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x24U)))),4);
        bufp->chgCData(oldp+58,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x2cU)))),4);
        bufp->chgBit(oldp+59,((1U & (((~ (IData)((0ULL 
                                                  != 
                                                  (0x3000000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                      & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x2cU))) 
                                     | ((IData)((0x300000000000ULL 
                                                 == 
                                                 (0x301000000000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                        | (IData)((0x200000000000ULL 
                                                   == 
                                                   (0x202000000000ULL 
                                                    & vlSelf->tb_Question6__DOT__i_data))))))));
        bufp->chgBit(oldp+60,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(
                                                            (vlSelf->tb_Question6__DOT__i_data 
                                                             >> 0x24U)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_Question6__DOT__i_data 
                                                               >> 0x2cU))))))))));
        bufp->chgBit(oldp+61,((1U & (((~ (IData)((0ULL 
                                                  != 
                                                  (0xc000000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                      & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x2eU))) 
                                     | ((IData)((0xc00000000000ULL 
                                                 == 
                                                 (0xc04000000000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                        | (IData)((0x800000000000ULL 
                                                   == 
                                                   (0x808000000000ULL 
                                                    & vlSelf->tb_Question6__DOT__i_data))))))));
        bufp->chgCData(oldp+62,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x26U)))),2);
        bufp->chgCData(oldp+63,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x2eU)))),2);
        bufp->chgCData(oldp+64,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x24U)))),2);
        bufp->chgCData(oldp+65,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x2cU)))),2);
        bufp->chgCData(oldp+66,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x20U)))),4);
        bufp->chgCData(oldp+67,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x28U)))),4);
        bufp->chgBit(oldp+68,((1U & (((~ (IData)((0ULL 
                                                  != 
                                                  (0x300000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                      & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x28U))) 
                                     | ((IData)((0x30000000000ULL 
                                                 == 
                                                 (0x30100000000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                        | (IData)((0x20000000000ULL 
                                                   == 
                                                   (0x20200000000ULL 
                                                    & vlSelf->tb_Question6__DOT__i_data))))))));
        bufp->chgBit(oldp+69,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(
                                                            (vlSelf->tb_Question6__DOT__i_data 
                                                             >> 0x20U)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_Question6__DOT__i_data 
                                                               >> 0x28U))))))))));
        bufp->chgBit(oldp+70,((1U & (((~ (IData)((0ULL 
                                                  != 
                                                  (0xc00000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                      & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x2aU))) 
                                     | ((IData)((0xc0000000000ULL 
                                                 == 
                                                 (0xc0400000000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                        | (IData)((0x80000000000ULL 
                                                   == 
                                                   (0x80800000000ULL 
                                                    & vlSelf->tb_Question6__DOT__i_data))))))));
        bufp->chgBit(oldp+71,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(
                                                            (vlSelf->tb_Question6__DOT__i_data 
                                                             >> 0x22U)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_Question6__DOT__i_data 
                                                               >> 0x2aU))))))))));
        bufp->chgCData(oldp+72,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x22U)))),2);
        bufp->chgCData(oldp+73,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x2aU)))),2);
        bufp->chgCData(oldp+74,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x20U)))),2);
        bufp->chgCData(oldp+75,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x28U)))),2);
        bufp->chgBit(oldp+76,((1U & ((((~ (IData)((0ULL 
                                                   != 
                                                   (0xc000000000000ULL 
                                                    & vlSelf->tb_Question6__DOT__i_data)))) 
                                       & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                  >> 0x3aU))) 
                                      | ((IData)((0xc00000000000000ULL 
                                                  == 
                                                  (0xc04000000000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data))) 
                                         | (IData)(
                                                   (0x800000000000000ULL 
                                                    == 
                                                    (0x808000000000000ULL 
                                                     & vlSelf->tb_Question6__DOT__i_data))))) 
                                     | ((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(
                                                                (vlSelf->tb_Question6__DOT__i_data 
                                                                 >> 0x32U)) 
                                                        ^ (IData)(
                                                                  (vlSelf->tb_Question6__DOT__i_data 
                                                                   >> 0x3aU))))))) 
                                        & (((~ (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x3000000000000ULL 
                                                         & vlSelf->tb_Question6__DOT__i_data)))) 
                                            & (IData)(
                                                      (vlSelf->tb_Question6__DOT__i_data 
                                                       >> 0x38U))) 
                                           | ((IData)(
                                                      (0x300000000000000ULL 
                                                       == 
                                                       (0x301000000000000ULL 
                                                        & vlSelf->tb_Question6__DOT__i_data))) 
                                              | (IData)(
                                                        (0x200000000000000ULL 
                                                         == 
                                                         (0x202000000000000ULL 
                                                          & vlSelf->tb_Question6__DOT__i_data))))))))));
        bufp->chgBit(oldp+77,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(
                                                             (vlSelf->tb_Question6__DOT__i_data 
                                                              >> 0x32U)) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_Question6__DOT__i_data 
                                                                >> 0x3aU))))))) 
                                     & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(
                                                               (vlSelf->tb_Question6__DOT__i_data 
                                                                >> 0x30U)) 
                                                       ^ (IData)(
                                                                 (vlSelf->tb_Question6__DOT__i_data 
                                                                  >> 0x38U)))))))))));
        bufp->chgCData(oldp+78,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x34U)))),4);
        bufp->chgCData(oldp+79,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x3cU)))),4);
        bufp->chgBit(oldp+80,((1U & (((~ (IData)((0ULL 
                                                  != 
                                                  (0x30000000000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                      & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x3cU))) 
                                     | ((IData)((0x3000000000000000ULL 
                                                 == 
                                                 (0x3010000000000000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                        | (IData)((0x2000000000000000ULL 
                                                   == 
                                                   (0x2020000000000000ULL 
                                                    & vlSelf->tb_Question6__DOT__i_data))))))));
        bufp->chgBit(oldp+81,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(
                                                            (vlSelf->tb_Question6__DOT__i_data 
                                                             >> 0x34U)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_Question6__DOT__i_data 
                                                               >> 0x3cU))))))))));
        bufp->chgBit(oldp+82,((1U & (((~ (IData)((0ULL 
                                                  != 
                                                  (0xc0000000000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                      & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x3eU))) 
                                     | ((IData)((0xc000000000000000ULL 
                                                 == 
                                                 (0xc040000000000000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                        | (IData)((0x8000000000000000ULL 
                                                   == 
                                                   (0x8080000000000000ULL 
                                                    & vlSelf->tb_Question6__DOT__i_data))))))));
        bufp->chgCData(oldp+83,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x36U)))),2);
        bufp->chgCData(oldp+84,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x3eU)))),2);
        bufp->chgCData(oldp+85,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x34U)))),2);
        bufp->chgCData(oldp+86,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x3cU)))),2);
        bufp->chgCData(oldp+87,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x30U)))),4);
        bufp->chgCData(oldp+88,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x38U)))),4);
        bufp->chgBit(oldp+89,((1U & (((~ (IData)((0ULL 
                                                  != 
                                                  (0x3000000000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                      & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x38U))) 
                                     | ((IData)((0x300000000000000ULL 
                                                 == 
                                                 (0x301000000000000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                        | (IData)((0x200000000000000ULL 
                                                   == 
                                                   (0x202000000000000ULL 
                                                    & vlSelf->tb_Question6__DOT__i_data))))))));
        bufp->chgBit(oldp+90,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(
                                                            (vlSelf->tb_Question6__DOT__i_data 
                                                             >> 0x30U)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_Question6__DOT__i_data 
                                                               >> 0x38U))))))))));
        bufp->chgBit(oldp+91,((1U & (((~ (IData)((0ULL 
                                                  != 
                                                  (0xc000000000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                      & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                                 >> 0x3aU))) 
                                     | ((IData)((0xc00000000000000ULL 
                                                 == 
                                                 (0xc04000000000000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                        | (IData)((0x800000000000000ULL 
                                                   == 
                                                   (0x808000000000000ULL 
                                                    & vlSelf->tb_Question6__DOT__i_data))))))));
        bufp->chgBit(oldp+92,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(
                                                            (vlSelf->tb_Question6__DOT__i_data 
                                                             >> 0x32U)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_Question6__DOT__i_data 
                                                               >> 0x3aU))))))))));
        bufp->chgCData(oldp+93,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x32U)))),2);
        bufp->chgCData(oldp+94,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x3aU)))),2);
        bufp->chgCData(oldp+95,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x30U)))),2);
        bufp->chgCData(oldp+96,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x38U)))),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgQData(oldp+97,((((QData)((IData)(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare)
                                                    ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)
                                                    : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))) 
                                  << 0x38U) | (((QData)((IData)(
                                                                ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare)
                                                                  ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)
                                                                  : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare)
                                                                     ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)
                                                                     : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                        ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)
                                                                        : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                                                           ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)
                                                                           : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)) 
                                                                         << 0x18U) 
                                                                        | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare)
                                                                              ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)
                                                                              : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                                                            << 0x10U) 
                                                                           | ((((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare)
                                                                                 ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)
                                                                                 : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                                                               << 8U) 
                                                                              | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare)
                                                                                 ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)
                                                                                 : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0)))))))))))),64);
        bufp->chgCData(oldp+99,(vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[0]),8);
        bufp->chgCData(oldp+100,(vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[1]),8);
        bufp->chgCData(oldp+101,(vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[2]),8);
        bufp->chgCData(oldp+102,(vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[3]),8);
        bufp->chgCData(oldp+103,(vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[4]),8);
        bufp->chgCData(oldp+104,(vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[5]),8);
        bufp->chgCData(oldp+105,(vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[6]),8);
        bufp->chgCData(oldp+106,(vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[7]),8);
        bufp->chgCData(oldp+107,(vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[0]),8);
        bufp->chgCData(oldp+108,(vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[1]),8);
        bufp->chgCData(oldp+109,(vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[2]),8);
        bufp->chgCData(oldp+110,(vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[3]),8);
        bufp->chgCData(oldp+111,(vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[4]),8);
        bufp->chgCData(oldp+112,(vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[5]),8);
        bufp->chgCData(oldp+113,(vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[6]),8);
        bufp->chgCData(oldp+114,(vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[7]),8);
        bufp->chgCData(oldp+115,(vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[0]),8);
        bufp->chgCData(oldp+116,(vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[1]),8);
        bufp->chgCData(oldp+117,(vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[2]),8);
        bufp->chgCData(oldp+118,(vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[3]),8);
        bufp->chgCData(oldp+119,(vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[4]),8);
        bufp->chgCData(oldp+120,(vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[5]),8);
        bufp->chgCData(oldp+121,(vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[6]),8);
        bufp->chgCData(oldp+122,(vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[7]),8);
        bufp->chgCData(oldp+123,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0),8);
        bufp->chgCData(oldp+124,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0),8);
        bufp->chgCData(oldp+125,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0),8);
        bufp->chgCData(oldp+126,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1),8);
        bufp->chgCData(oldp+127,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0),8);
        bufp->chgCData(oldp+128,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1),8);
        bufp->chgCData(oldp+129,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0),8);
        bufp->chgCData(oldp+130,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1),8);
        bufp->chgCData(oldp+131,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1),8);
        bufp->chgCData(oldp+132,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0),8);
        bufp->chgBit(oldp+133,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__w_compare));
        bufp->chgBit(oldp+134,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgBit(oldp+135,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__w_compare));
        bufp->chgBit(oldp+136,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgBit(oldp+137,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__w_compare));
        bufp->chgBit(oldp+138,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xcU 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                           >> 2U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                         >> 2U))))) 
                                         & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+139,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))))))));
        bufp->chgBit(oldp+140,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0U 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                           >> 6U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x30U 
                                                          & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                >> 4U)) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+141,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+142,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+143,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+144,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                          >> 4U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                            >> 4U)) 
                                        & (IData)((0x30U 
                                                   == 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                              >> 5U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                             >> 5U)))))));
        bufp->chgBit(oldp+145,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+146,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                          >> 6U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                             >> 7U)))))));
        bufp->chgBit(oldp+147,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+148,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+149,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+150,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+151,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+152,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))),4);
        bufp->chgCData(oldp+153,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))),4);
        bufp->chgBit(oldp+154,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                            >> 1U) 
                                           | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+155,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)))))))));
        bufp->chgBit(oldp+156,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                          >> 2U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                             >> 3U)))))));
        bufp->chgBit(oldp+157,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+158,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+159,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+160,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))),2);
        bufp->chgCData(oldp+161,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))),2);
        bufp->chgBit(oldp+162,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__w_compare));
        bufp->chgBit(oldp+163,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xcU 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                           >> 2U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                         >> 2U))))) 
                                         & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+164,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))))))));
        bufp->chgBit(oldp+165,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0U 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                           >> 6U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x30U 
                                                          & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                >> 4U)) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+166,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+167,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+168,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+169,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                          >> 4U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                            >> 4U)) 
                                        & (IData)((0x30U 
                                                   == 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 5U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                             >> 5U)))))));
        bufp->chgBit(oldp+170,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+171,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                          >> 6U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                             >> 7U)))))));
        bufp->chgBit(oldp+172,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+173,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+174,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+175,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+176,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+177,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))),4);
        bufp->chgCData(oldp+178,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))),4);
        bufp->chgBit(oldp+179,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                            >> 1U) 
                                           | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+180,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)))))))));
        bufp->chgBit(oldp+181,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                          >> 2U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                             >> 3U)))))));
        bufp->chgBit(oldp+182,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+183,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+184,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+185,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))),2);
        bufp->chgCData(oldp+186,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))),2);
        bufp->chgBit(oldp+187,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__w_compare));
        bufp->chgBit(oldp+188,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xcU 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                           >> 2U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                         >> 2U))))) 
                                         & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+189,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))))))));
        bufp->chgBit(oldp+190,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0U 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                           >> 6U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x30U 
                                                          & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                >> 4U)) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+191,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+192,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+193,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+194,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                          >> 4U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                            >> 4U)) 
                                        & (IData)((0x30U 
                                                   == 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 5U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                             >> 5U)))))));
        bufp->chgBit(oldp+195,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+196,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                          >> 6U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                             >> 7U)))))));
        bufp->chgBit(oldp+197,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+198,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+199,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+200,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+201,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+202,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))),4);
        bufp->chgCData(oldp+203,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))),4);
        bufp->chgBit(oldp+204,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                            >> 1U) 
                                           | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+205,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)))))))));
        bufp->chgBit(oldp+206,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                          >> 2U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                             >> 3U)))))));
        bufp->chgBit(oldp+207,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+208,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+209,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+210,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))),2);
        bufp->chgCData(oldp+211,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))),2);
        bufp->chgCData(oldp+212,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0),8);
        bufp->chgCData(oldp+213,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0),8);
        bufp->chgCData(oldp+214,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0),8);
        bufp->chgCData(oldp+215,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1),8);
        bufp->chgCData(oldp+216,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0),8);
        bufp->chgCData(oldp+217,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1),8);
        bufp->chgCData(oldp+218,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0),8);
        bufp->chgCData(oldp+219,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1),8);
        bufp->chgCData(oldp+220,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1),8);
        bufp->chgCData(oldp+221,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0),8);
        bufp->chgBit(oldp+222,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__w_compare));
        bufp->chgBit(oldp+223,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgBit(oldp+224,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__w_compare));
        bufp->chgBit(oldp+225,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgBit(oldp+226,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__w_compare));
        bufp->chgBit(oldp+227,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xcU 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                           >> 2U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                         >> 2U))))) 
                                         & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+228,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))))))));
        bufp->chgBit(oldp+229,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0U 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                           >> 6U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x30U 
                                                          & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                >> 4U)) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+230,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+231,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+232,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+233,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                          >> 4U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                            >> 4U)) 
                                        & (IData)((0x30U 
                                                   == 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                              >> 5U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                             >> 5U)))))));
        bufp->chgBit(oldp+234,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+235,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                          >> 6U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                             >> 7U)))))));
        bufp->chgBit(oldp+236,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+237,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+238,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+239,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+240,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+241,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))),4);
        bufp->chgCData(oldp+242,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))),4);
        bufp->chgBit(oldp+243,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                            >> 1U) 
                                           | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+244,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)))))))));
        bufp->chgBit(oldp+245,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                          >> 2U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                             >> 3U)))))));
        bufp->chgBit(oldp+246,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+247,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+248,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+249,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))),2);
        bufp->chgCData(oldp+250,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))),2);
        bufp->chgBit(oldp+251,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__w_compare));
        bufp->chgBit(oldp+252,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xcU 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                           >> 2U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                         >> 2U))))) 
                                         & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+253,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))))))));
        bufp->chgBit(oldp+254,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0U 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                           >> 6U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x30U 
                                                          & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                >> 4U)) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+255,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+256,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+257,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+258,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                          >> 4U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                            >> 4U)) 
                                        & (IData)((0x30U 
                                                   == 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                              >> 5U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                             >> 5U)))))));
        bufp->chgBit(oldp+259,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+260,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                          >> 6U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                             >> 7U)))))));
        bufp->chgBit(oldp+261,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+262,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+263,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+264,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+265,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+266,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))),4);
        bufp->chgCData(oldp+267,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))),4);
        bufp->chgBit(oldp+268,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                            >> 1U) 
                                           | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+269,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)))))))));
        bufp->chgBit(oldp+270,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                          >> 2U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                             >> 3U)))))));
        bufp->chgBit(oldp+271,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+272,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+273,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+274,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))),2);
        bufp->chgCData(oldp+275,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))),2);
        bufp->chgBit(oldp+276,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__w_compare));
        bufp->chgBit(oldp+277,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xcU 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                           >> 2U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                         >> 2U))))) 
                                         & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+278,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))))))));
        bufp->chgBit(oldp+279,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0U 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                           >> 6U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x30U 
                                                          & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                >> 4U)) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+280,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+281,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+282,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+283,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                          >> 4U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                            >> 4U)) 
                                        & (IData)((0x30U 
                                                   == 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                              >> 5U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                             >> 5U)))))));
        bufp->chgBit(oldp+284,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+285,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                          >> 6U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                             >> 7U)))))));
        bufp->chgBit(oldp+286,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+287,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+288,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+289,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+290,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+291,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))),4);
        bufp->chgCData(oldp+292,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))),4);
        bufp->chgBit(oldp+293,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                            >> 1U) 
                                           | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+294,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)))))))));
        bufp->chgBit(oldp+295,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                          >> 2U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                             >> 3U)))))));
        bufp->chgBit(oldp+296,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+297,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+298,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+299,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))),2);
        bufp->chgCData(oldp+300,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))),2);
        bufp->chgCData(oldp+301,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare)
                                   ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)
                                   : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))),8);
        bufp->chgCData(oldp+302,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare)
                                   ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)
                                   : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))),8);
        bufp->chgCData(oldp+303,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare)
                                   ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)
                                   : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))),8);
        bufp->chgCData(oldp+304,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                   ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)
                                   : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))),8);
        bufp->chgCData(oldp+305,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                   ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)
                                   : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))),8);
        bufp->chgCData(oldp+306,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare)
                                   ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)
                                   : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))),8);
        bufp->chgCData(oldp+307,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare)
                                   ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)
                                   : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))),8);
        bufp->chgCData(oldp+308,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare)
                                   ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)
                                   : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))),8);
        bufp->chgCData(oldp+309,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1),8);
        bufp->chgCData(oldp+310,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2),8);
        bufp->chgCData(oldp+311,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3),8);
        bufp->chgCData(oldp+312,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0),8);
        bufp->chgCData(oldp+313,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1),8);
        bufp->chgCData(oldp+314,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2),8);
        bufp->chgCData(oldp+315,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1),8);
        bufp->chgCData(oldp+316,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2),8);
        bufp->chgCData(oldp+317,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0),8);
        bufp->chgCData(oldp+318,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1),8);
        bufp->chgCData(oldp+319,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1),8);
        bufp->chgCData(oldp+320,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0),8);
        bufp->chgBit(oldp+321,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare));
        bufp->chgBit(oldp+322,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xcU 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                           >> 2U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                         >> 2U))))) 
                                         & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+323,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))))))));
        bufp->chgBit(oldp+324,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0U 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                           >> 6U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x30U 
                                                          & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                >> 4U)) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+325,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+326,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+327,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+328,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                          >> 4U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                            >> 4U)) 
                                        & (IData)((0x30U 
                                                   == 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                              >> 5U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                             >> 5U)))))));
        bufp->chgBit(oldp+329,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+330,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                          >> 6U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                             >> 7U)))))));
        bufp->chgBit(oldp+331,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+332,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+333,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+334,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+335,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+336,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))),4);
        bufp->chgCData(oldp+337,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))),4);
        bufp->chgBit(oldp+338,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                            >> 1U) 
                                           | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+339,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)))))))));
        bufp->chgBit(oldp+340,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                          >> 2U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                             >> 3U)))))));
        bufp->chgBit(oldp+341,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+342,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+343,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+344,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))),2);
        bufp->chgCData(oldp+345,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))),2);
        bufp->chgBit(oldp+346,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__w_compare));
        bufp->chgBit(oldp+347,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xcU 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                           >> 2U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                         >> 2U))))) 
                                         & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+348,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))))))));
        bufp->chgBit(oldp+349,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0U 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                           >> 6U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x30U 
                                                          & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                >> 4U)) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+350,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+351,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+352,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+353,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                          >> 4U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                            >> 4U)) 
                                        & (IData)((0x30U 
                                                   == 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                              >> 5U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                             >> 5U)))))));
        bufp->chgBit(oldp+354,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+355,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                          >> 6U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                             >> 7U)))))));
        bufp->chgBit(oldp+356,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+357,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+358,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+359,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+360,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+361,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))),4);
        bufp->chgCData(oldp+362,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))),4);
        bufp->chgBit(oldp+363,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                            >> 1U) 
                                           | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+364,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)))))))));
        bufp->chgBit(oldp+365,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                          >> 2U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                             >> 3U)))))));
        bufp->chgBit(oldp+366,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+367,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+368,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+369,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))),2);
        bufp->chgCData(oldp+370,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))),2);
        bufp->chgBit(oldp+371,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__w_compare));
        bufp->chgBit(oldp+372,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xcU 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                           >> 2U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                         >> 2U))))) 
                                         & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+373,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))))))));
        bufp->chgBit(oldp+374,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0U 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                           >> 6U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x30U 
                                                          & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                >> 4U)) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+375,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+376,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+377,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+378,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                          >> 4U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                            >> 4U)) 
                                        & (IData)((0x30U 
                                                   == 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                              >> 5U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                             >> 5U)))))));
        bufp->chgBit(oldp+379,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+380,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                          >> 6U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                             >> 7U)))))));
        bufp->chgBit(oldp+381,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+382,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+383,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+384,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+385,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+386,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))),4);
        bufp->chgCData(oldp+387,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))),4);
        bufp->chgBit(oldp+388,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                            >> 1U) 
                                           | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+389,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)))))))));
        bufp->chgBit(oldp+390,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                          >> 2U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                             >> 3U)))))));
        bufp->chgBit(oldp+391,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+392,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+393,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+394,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))),2);
        bufp->chgCData(oldp+395,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))),2);
        bufp->chgBit(oldp+396,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare));
        bufp->chgBit(oldp+397,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xcU 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                           >> 2U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                         >> 2U))))) 
                                         & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+398,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))))))));
        bufp->chgBit(oldp+399,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0U 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                           >> 6U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x30U 
                                                          & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                >> 4U)) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+400,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+401,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+402,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+403,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                          >> 4U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                            >> 4U)) 
                                        & (IData)((0x30U 
                                                   == 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 5U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                             >> 5U)))))));
        bufp->chgBit(oldp+404,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+405,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                          >> 6U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                             >> 7U)))))));
        bufp->chgBit(oldp+406,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+407,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+408,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+409,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+410,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+411,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))),4);
        bufp->chgCData(oldp+412,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))),4);
        bufp->chgBit(oldp+413,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                            >> 1U) 
                                           | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+414,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))))))));
        bufp->chgBit(oldp+415,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                          >> 2U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                             >> 3U)))))));
        bufp->chgBit(oldp+416,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+417,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+418,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+419,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))),2);
        bufp->chgCData(oldp+420,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))),2);
        bufp->chgBit(oldp+421,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare));
        bufp->chgBit(oldp+422,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xcU 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                           >> 2U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                         >> 2U))))) 
                                         & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+423,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))))))));
        bufp->chgBit(oldp+424,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0U 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                           >> 6U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x30U 
                                                          & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                >> 4U)) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+425,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+426,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+427,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+428,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                          >> 4U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                            >> 4U)) 
                                        & (IData)((0x30U 
                                                   == 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 5U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                             >> 5U)))))));
        bufp->chgBit(oldp+429,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+430,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                          >> 6U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                             >> 7U)))))));
        bufp->chgBit(oldp+431,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+432,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+433,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+434,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+435,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+436,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))),4);
        bufp->chgCData(oldp+437,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))),4);
        bufp->chgBit(oldp+438,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                            >> 1U) 
                                           | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+439,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)))))))));
        bufp->chgBit(oldp+440,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                          >> 2U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                             >> 3U)))))));
        bufp->chgBit(oldp+441,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+442,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+443,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+444,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))),2);
        bufp->chgCData(oldp+445,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))),2);
        bufp->chgBit(oldp+446,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__w_compare));
        bufp->chgBit(oldp+447,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xcU 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                           >> 2U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                         >> 2U))))) 
                                         & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+448,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))))))));
        bufp->chgBit(oldp+449,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0U 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                           >> 6U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x30U 
                                                          & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                >> 4U)) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+450,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+451,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+452,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+453,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                          >> 4U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                            >> 4U)) 
                                        & (IData)((0x30U 
                                                   == 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                              >> 5U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                             >> 5U)))))));
        bufp->chgBit(oldp+454,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+455,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                          >> 6U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                             >> 7U)))))));
        bufp->chgBit(oldp+456,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+457,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+458,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+459,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+460,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+461,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))),4);
        bufp->chgCData(oldp+462,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))),4);
        bufp->chgBit(oldp+463,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                            >> 1U) 
                                           | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+464,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)))))))));
        bufp->chgBit(oldp+465,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                          >> 2U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                             >> 3U)))))));
        bufp->chgBit(oldp+466,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+467,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+468,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+469,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))),2);
        bufp->chgCData(oldp+470,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))),2);
        bufp->chgBit(oldp+471,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare));
        bufp->chgBit(oldp+472,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xcU 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                           >> 2U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                         >> 2U))))) 
                                         & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+473,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))))))));
        bufp->chgBit(oldp+474,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0U 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                           >> 6U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x30U 
                                                          & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                >> 4U)) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+475,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+476,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+477,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+478,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                          >> 4U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                            >> 4U)) 
                                        & (IData)((0x30U 
                                                   == 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                              >> 5U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                             >> 5U)))))));
        bufp->chgBit(oldp+479,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+480,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                          >> 6U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                             >> 7U)))))));
        bufp->chgBit(oldp+481,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+482,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+483,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+484,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+485,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+486,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))),4);
        bufp->chgCData(oldp+487,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))),4);
        bufp->chgBit(oldp+488,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                            >> 1U) 
                                           | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+489,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))))))));
        bufp->chgBit(oldp+490,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                          >> 2U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                             >> 3U)))))));
        bufp->chgBit(oldp+491,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+492,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+493,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+494,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))),2);
        bufp->chgCData(oldp+495,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))),2);
        bufp->chgBit(oldp+496,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare));
        bufp->chgBit(oldp+497,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xcU 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                           >> 2U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                         >> 2U))))) 
                                         & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+498,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))))))));
        bufp->chgBit(oldp+499,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0U 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                           >> 6U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x30U 
                                                          & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                >> 4U)) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+500,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+501,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+502,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+503,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                          >> 4U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                            >> 4U)) 
                                        & (IData)((0x30U 
                                                   == 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 5U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                             >> 5U)))))));
        bufp->chgBit(oldp+504,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+505,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                          >> 6U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                             >> 7U)))))));
        bufp->chgBit(oldp+506,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+507,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+508,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+509,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+510,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+511,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))),4);
        bufp->chgCData(oldp+512,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))),4);
        bufp->chgBit(oldp+513,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                            >> 1U) 
                                           | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+514,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)))))))));
        bufp->chgBit(oldp+515,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                          >> 2U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                             >> 3U)))))));
        bufp->chgBit(oldp+516,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+517,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+518,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+519,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))),2);
        bufp->chgCData(oldp+520,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))),2);
        bufp->chgBit(oldp+521,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare));
        bufp->chgBit(oldp+522,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xcU 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                           >> 2U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                         >> 2U))))) 
                                         & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+523,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))))))));
        bufp->chgBit(oldp+524,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0U 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                           >> 6U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x30U 
                                                          & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                >> 4U)) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+525,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+526,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+527,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+528,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                          >> 4U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                            >> 4U)) 
                                        & (IData)((0x30U 
                                                   == 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 5U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                             >> 5U)))))));
        bufp->chgBit(oldp+529,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+530,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                          >> 6U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                             >> 7U)))))));
        bufp->chgBit(oldp+531,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+532,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+533,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+534,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+535,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+536,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))),4);
        bufp->chgCData(oldp+537,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))),4);
        bufp->chgBit(oldp+538,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                            >> 1U) 
                                           | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+539,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))))))));
        bufp->chgBit(oldp+540,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                          >> 2U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                             >> 3U)))))));
        bufp->chgBit(oldp+541,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+542,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+543,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+544,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))),2);
        bufp->chgCData(oldp+545,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))),2);
        bufp->chgBit(oldp+546,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare));
        bufp->chgBit(oldp+547,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xcU 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                           >> 2U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)) 
                                                         >> 2U))))) 
                                         & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+548,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))))))))));
        bufp->chgBit(oldp+549,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0U 
                                                     & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))))) 
                                        & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                           >> 6U)) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x30U 
                                                          & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                                >> 4U)) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+550,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+551,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+552,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+553,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                          >> 4U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                            >> 4U)) 
                                        & (IData)((0x30U 
                                                   == 
                                                   (0x30U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                              >> 5U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                             >> 5U)))))));
        bufp->chgBit(oldp+554,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+555,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                          >> 6U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                             >> 7U)))))));
        bufp->chgBit(oldp+556,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+557,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+558,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+559,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+560,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+561,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))),4);
        bufp->chgCData(oldp+562,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))),4);
        bufp->chgBit(oldp+563,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                            >> 1U) 
                                           | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))) 
                                       & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+564,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)))))))));
        bufp->chgBit(oldp+565,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))))) 
                                       & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                          >> 2U)) | 
                                      (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                             >> 3U)))))));
        bufp->chgBit(oldp+566,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+567,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+568,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+569,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))),2);
        bufp->chgCData(oldp+570,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))),2);
    }
    bufp->chgBit(oldp+571,(vlSelf->tb_Question6__DOT__i_clk));
    bufp->chgBit(oldp+572,((1U & ((((~ (IData)((0ULL 
                                                != 
                                                (0xc0ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data)))) 
                                    & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0xeU))) 
                                   | ((IData)((0xc000ULL 
                                               == (0xc040ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data))) 
                                      | (IData)((0x8000ULL 
                                                 == 
                                                 (0x8080ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))))) 
                                  | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                     & (((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0x30ULL 
                                                      & vlSelf->tb_Question6__DOT__i_data)))) 
                                         & (IData)(
                                                   (vlSelf->tb_Question6__DOT__i_data 
                                                    >> 0xcU))) 
                                        | ((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3010ULL 
                                                     & vlSelf->tb_Question6__DOT__i_data))) 
                                           | (IData)(
                                                     (0x2000ULL 
                                                      == 
                                                      (0x2020ULL 
                                                       & vlSelf->tb_Question6__DOT__i_data))))))))));
    bufp->chgBit(oldp+573,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                            & (~ (IData)((0U != (3U 
                                                 & ((IData)(
                                                            (vlSelf->tb_Question6__DOT__i_data 
                                                             >> 4U)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_Question6__DOT__i_data 
                                                               >> 0xcU))))))))));
    bufp->chgBit(oldp+574,((1U & ((((~ (IData)((0ULL 
                                                != 
                                                (0xc00000ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data)))) 
                                    & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x1eU))) 
                                   | ((IData)((0xc0000000ULL 
                                               == (0xc0400000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data))) 
                                      | (IData)((0x80000000ULL 
                                                 == 
                                                 (0x80800000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))))) 
                                  | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                     & (((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0x300000ULL 
                                                      & vlSelf->tb_Question6__DOT__i_data)))) 
                                         & (IData)(
                                                   (vlSelf->tb_Question6__DOT__i_data 
                                                    >> 0x1cU))) 
                                        | ((IData)(
                                                   (0x30000000ULL 
                                                    == 
                                                    (0x30100000ULL 
                                                     & vlSelf->tb_Question6__DOT__i_data))) 
                                           | (IData)(
                                                     (0x20000000ULL 
                                                      == 
                                                      (0x20200000ULL 
                                                       & vlSelf->tb_Question6__DOT__i_data))))))))));
    bufp->chgBit(oldp+575,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                            & (~ (IData)((0U != (3U 
                                                 & ((IData)(
                                                            (vlSelf->tb_Question6__DOT__i_data 
                                                             >> 0x14U)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_Question6__DOT__i_data 
                                                               >> 0x1cU))))))))));
    bufp->chgBit(oldp+576,((1U & ((((~ (IData)((0ULL 
                                                != 
                                                (0xc000000000ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data)))) 
                                    & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x2eU))) 
                                   | ((IData)((0xc00000000000ULL 
                                               == (0xc04000000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data))) 
                                      | (IData)((0x800000000000ULL 
                                                 == 
                                                 (0x808000000000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))))) 
                                  | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                     & (((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0x3000000000ULL 
                                                      & vlSelf->tb_Question6__DOT__i_data)))) 
                                         & (IData)(
                                                   (vlSelf->tb_Question6__DOT__i_data 
                                                    >> 0x2cU))) 
                                        | ((IData)(
                                                   (0x300000000000ULL 
                                                    == 
                                                    (0x301000000000ULL 
                                                     & vlSelf->tb_Question6__DOT__i_data))) 
                                           | (IData)(
                                                     (0x200000000000ULL 
                                                      == 
                                                      (0x202000000000ULL 
                                                       & vlSelf->tb_Question6__DOT__i_data))))))))));
    bufp->chgBit(oldp+577,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                            & (~ (IData)((0U != (3U 
                                                 & ((IData)(
                                                            (vlSelf->tb_Question6__DOT__i_data 
                                                             >> 0x24U)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_Question6__DOT__i_data 
                                                               >> 0x2cU))))))))));
    bufp->chgBit(oldp+578,((1U & ((((~ (IData)((0ULL 
                                                != 
                                                (0xc0000000000000ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data)))) 
                                    & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x3eU))) 
                                   | ((IData)((0xc000000000000000ULL 
                                               == (0xc040000000000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data))) 
                                      | (IData)((0x8000000000000000ULL 
                                                 == 
                                                 (0x8080000000000000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))))) 
                                  | ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                     & (((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0x30000000000000ULL 
                                                      & vlSelf->tb_Question6__DOT__i_data)))) 
                                         & (IData)(
                                                   (vlSelf->tb_Question6__DOT__i_data 
                                                    >> 0x3cU))) 
                                        | ((IData)(
                                                   (0x3000000000000000ULL 
                                                    == 
                                                    (0x3010000000000000ULL 
                                                     & vlSelf->tb_Question6__DOT__i_data))) 
                                           | (IData)(
                                                     (0x2000000000000000ULL 
                                                      == 
                                                      (0x2020000000000000ULL 
                                                       & vlSelf->tb_Question6__DOT__i_data))))))))));
    bufp->chgBit(oldp+579,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                            & (~ (IData)((0U != (3U 
                                                 & ((IData)(
                                                            (vlSelf->tb_Question6__DOT__i_data 
                                                             >> 0x34U)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_Question6__DOT__i_data 
                                                               >> 0x3cU))))))))));
}

void Vtb_Question6___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root__trace_cleanup\n"); );
    // Init
    Vtb_Question6___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Question6___024root*>(voidSelf);
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
