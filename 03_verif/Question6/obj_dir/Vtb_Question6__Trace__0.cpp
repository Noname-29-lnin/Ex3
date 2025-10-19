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
        bufp->chgBit(oldp+0,(vlSelf->tb_Question6__DOT__i_rst_n));
        bufp->chgCData(oldp+1,(vlSelf->tb_Question6__DOT__i_data[0]),8);
        bufp->chgCData(oldp+2,(vlSelf->tb_Question6__DOT__i_data[1]),8);
        bufp->chgCData(oldp+3,(vlSelf->tb_Question6__DOT__i_data[2]),8);
        bufp->chgCData(oldp+4,(vlSelf->tb_Question6__DOT__i_data[3]),8);
        bufp->chgCData(oldp+5,(vlSelf->tb_Question6__DOT__i_data[4]),8);
        bufp->chgCData(oldp+6,(vlSelf->tb_Question6__DOT__i_data[5]),8);
        bufp->chgCData(oldp+7,(vlSelf->tb_Question6__DOT__i_data[6]),8);
        bufp->chgCData(oldp+8,(vlSelf->tb_Question6__DOT__i_data[7]),8);
        bufp->chgIData(oldp+9,(vlSelf->tb_Question6__DOT__k),32);
        bufp->chgQData(oldp+10,((((QData)((IData)(vlSelf->tb_Question6__DOT__i_data
                                                  [7U])) 
                                  << 0x38U) | (((QData)((IData)(
                                                                vlSelf->tb_Question6__DOT__i_data
                                                                [6U])) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->tb_Question6__DOT__i_data
                                                                   [5U])) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->tb_Question6__DOT__i_data
                                                                      [4U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       ((vlSelf->tb_Question6__DOT__i_data
                                                                         [3U] 
                                                                         << 0x18U) 
                                                                        | ((vlSelf->tb_Question6__DOT__i_data
                                                                            [2U] 
                                                                            << 0x10U) 
                                                                           | ((vlSelf->tb_Question6__DOT__i_data
                                                                               [1U] 
                                                                               << 8U) 
                                                                              | vlSelf->tb_Question6__DOT__i_data
                                                                              [0U])))))))))),64);
        bufp->chgCData(oldp+12,(vlSelf->tb_Question6__DOT__i_data
                                [0U]),8);
        bufp->chgCData(oldp+13,(vlSelf->tb_Question6__DOT__i_data
                                [1U]),8);
        bufp->chgCData(oldp+14,(vlSelf->tb_Question6__DOT__i_data
                                [2U]),8);
        bufp->chgCData(oldp+15,(vlSelf->tb_Question6__DOT__i_data
                                [3U]),8);
        bufp->chgBit(oldp+16,((1U & ((((~ (vlSelf->tb_Question6__DOT__i_data
                                           [0U] >> 3U)) 
                                       & ((~ (vlSelf->tb_Question6__DOT__i_data
                                              [0U] 
                                              >> 2U)) 
                                          & (vlSelf->tb_Question6__DOT__i_data
                                             [1U] >> 2U))) 
                                      | (((~ (vlSelf->tb_Question6__DOT__i_data
                                              [0U] 
                                              >> 2U)) 
                                          & ((vlSelf->tb_Question6__DOT__i_data
                                              [1U] 
                                              >> 3U) 
                                             & (vlSelf->tb_Question6__DOT__i_data
                                                [1U] 
                                                >> 2U))) 
                                         | ((~ (vlSelf->tb_Question6__DOT__i_data
                                                [0U] 
                                                >> 3U)) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [1U] 
                                               >> 3U)))) 
                                     | ((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((vlSelf->tb_Question6__DOT__i_data
                                                         [0U] 
                                                         ^ 
                                                         vlSelf->tb_Question6__DOT__i_data
                                                         [1U]) 
                                                        >> 2U))))) 
                                        & (((~ (vlSelf->tb_Question6__DOT__i_data
                                                [0U] 
                                                >> 1U)) 
                                            & ((~ vlSelf->tb_Question6__DOT__i_data
                                                [0U]) 
                                               & vlSelf->tb_Question6__DOT__i_data
                                               [1U])) 
                                           | (((~ vlSelf->tb_Question6__DOT__i_data
                                                [0U]) 
                                               & ((vlSelf->tb_Question6__DOT__i_data
                                                   [1U] 
                                                   >> 1U) 
                                                  & vlSelf->tb_Question6__DOT__i_data
                                                  [1U])) 
                                              | ((~ 
                                                  (vlSelf->tb_Question6__DOT__i_data
                                                   [0U] 
                                                   >> 1U)) 
                                                 & (vlSelf->tb_Question6__DOT__i_data
                                                    [1U] 
                                                    >> 1U)))))))));
        bufp->chgBit(oldp+17,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_Question6__DOT__i_data
                                                      [0U] 
                                                      ^ 
                                                      vlSelf->tb_Question6__DOT__i_data
                                                      [1U]) 
                                                     >> 2U))))) 
                                     & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelf->tb_Question6__DOT__i_data
                                                       [0U] 
                                                       ^ 
                                                       vlSelf->tb_Question6__DOT__i_data
                                                       [1U])))))))));
        bufp->chgCData(oldp+18,((0xfU & (vlSelf->tb_Question6__DOT__i_data
                                         [0U] >> 4U))),4);
        bufp->chgCData(oldp+19,((0xfU & (vlSelf->tb_Question6__DOT__i_data
                                         [1U] >> 4U))),4);
        bufp->chgBit(oldp+20,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                          [0U] >> 5U)) 
                                      & ((~ (vlSelf->tb_Question6__DOT__i_data
                                             [0U] >> 4U)) 
                                         & (vlSelf->tb_Question6__DOT__i_data
                                            [1U] >> 4U))) 
                                     | (((~ (vlSelf->tb_Question6__DOT__i_data
                                             [0U] >> 4U)) 
                                         & ((vlSelf->tb_Question6__DOT__i_data
                                             [1U] >> 5U) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [1U] 
                                               >> 4U))) 
                                        | ((~ (vlSelf->tb_Question6__DOT__i_data
                                               [0U] 
                                               >> 5U)) 
                                           & (vlSelf->tb_Question6__DOT__i_data
                                              [1U] 
                                              >> 5U)))))));
        bufp->chgBit(oldp+21,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((vlSelf->tb_Question6__DOT__i_data
                                                     [0U] 
                                                     ^ 
                                                     vlSelf->tb_Question6__DOT__i_data
                                                     [1U]) 
                                                    >> 4U))))))));
        bufp->chgBit(oldp+22,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                          [0U] >> 7U)) 
                                      & ((~ (vlSelf->tb_Question6__DOT__i_data
                                             [0U] >> 6U)) 
                                         & (vlSelf->tb_Question6__DOT__i_data
                                            [1U] >> 6U))) 
                                     | (((~ (vlSelf->tb_Question6__DOT__i_data
                                             [0U] >> 6U)) 
                                         & ((vlSelf->tb_Question6__DOT__i_data
                                             [1U] >> 7U) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [1U] 
                                               >> 6U))) 
                                        | ((~ (vlSelf->tb_Question6__DOT__i_data
                                               [0U] 
                                               >> 7U)) 
                                           & (vlSelf->tb_Question6__DOT__i_data
                                              [1U] 
                                              >> 7U)))))));
        bufp->chgCData(oldp+23,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [0U] >> 6U))),2);
        bufp->chgCData(oldp+24,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [1U] >> 6U))),2);
        bufp->chgCData(oldp+25,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [0U] >> 4U))),2);
        bufp->chgCData(oldp+26,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [1U] >> 4U))),2);
        bufp->chgCData(oldp+27,((0xfU & vlSelf->tb_Question6__DOT__i_data
                                 [0U])),4);
        bufp->chgCData(oldp+28,((0xfU & vlSelf->tb_Question6__DOT__i_data
                                 [1U])),4);
        bufp->chgBit(oldp+29,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                          [0U] >> 1U)) 
                                      & ((~ vlSelf->tb_Question6__DOT__i_data
                                          [0U]) & vlSelf->tb_Question6__DOT__i_data
                                         [1U])) | (
                                                   ((~ 
                                                     vlSelf->tb_Question6__DOT__i_data
                                                     [0U]) 
                                                    & ((vlSelf->tb_Question6__DOT__i_data
                                                        [1U] 
                                                        >> 1U) 
                                                       & vlSelf->tb_Question6__DOT__i_data
                                                       [1U])) 
                                                   | ((~ 
                                                       (vlSelf->tb_Question6__DOT__i_data
                                                        [0U] 
                                                        >> 1U)) 
                                                      & (vlSelf->tb_Question6__DOT__i_data
                                                         [1U] 
                                                         >> 1U)))))));
        bufp->chgBit(oldp+30,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & (vlSelf->tb_Question6__DOT__i_data
                                                    [0U] 
                                                    ^ 
                                                    vlSelf->tb_Question6__DOT__i_data
                                                    [1U]))))))));
        bufp->chgBit(oldp+31,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                          [0U] >> 3U)) 
                                      & ((~ (vlSelf->tb_Question6__DOT__i_data
                                             [0U] >> 2U)) 
                                         & (vlSelf->tb_Question6__DOT__i_data
                                            [1U] >> 2U))) 
                                     | (((~ (vlSelf->tb_Question6__DOT__i_data
                                             [0U] >> 2U)) 
                                         & ((vlSelf->tb_Question6__DOT__i_data
                                             [1U] >> 3U) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [1U] 
                                               >> 2U))) 
                                        | ((~ (vlSelf->tb_Question6__DOT__i_data
                                               [0U] 
                                               >> 3U)) 
                                           & (vlSelf->tb_Question6__DOT__i_data
                                              [1U] 
                                              >> 3U)))))));
        bufp->chgBit(oldp+32,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((vlSelf->tb_Question6__DOT__i_data
                                                     [0U] 
                                                     ^ 
                                                     vlSelf->tb_Question6__DOT__i_data
                                                     [1U]) 
                                                    >> 2U))))))));
        bufp->chgCData(oldp+33,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [0U] >> 2U))),2);
        bufp->chgCData(oldp+34,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [1U] >> 2U))),2);
        bufp->chgCData(oldp+35,((3U & vlSelf->tb_Question6__DOT__i_data
                                 [0U])),2);
        bufp->chgCData(oldp+36,((3U & vlSelf->tb_Question6__DOT__i_data
                                 [1U])),2);
        bufp->chgBit(oldp+37,((1U & ((((~ (vlSelf->tb_Question6__DOT__i_data
                                           [2U] >> 3U)) 
                                       & ((~ (vlSelf->tb_Question6__DOT__i_data
                                              [2U] 
                                              >> 2U)) 
                                          & (vlSelf->tb_Question6__DOT__i_data
                                             [3U] >> 2U))) 
                                      | (((~ (vlSelf->tb_Question6__DOT__i_data
                                              [2U] 
                                              >> 2U)) 
                                          & ((vlSelf->tb_Question6__DOT__i_data
                                              [3U] 
                                              >> 3U) 
                                             & (vlSelf->tb_Question6__DOT__i_data
                                                [3U] 
                                                >> 2U))) 
                                         | ((~ (vlSelf->tb_Question6__DOT__i_data
                                                [2U] 
                                                >> 3U)) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [3U] 
                                               >> 3U)))) 
                                     | ((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((vlSelf->tb_Question6__DOT__i_data
                                                         [2U] 
                                                         ^ 
                                                         vlSelf->tb_Question6__DOT__i_data
                                                         [3U]) 
                                                        >> 2U))))) 
                                        & (((~ (vlSelf->tb_Question6__DOT__i_data
                                                [2U] 
                                                >> 1U)) 
                                            & ((~ vlSelf->tb_Question6__DOT__i_data
                                                [2U]) 
                                               & vlSelf->tb_Question6__DOT__i_data
                                               [3U])) 
                                           | (((~ vlSelf->tb_Question6__DOT__i_data
                                                [2U]) 
                                               & ((vlSelf->tb_Question6__DOT__i_data
                                                   [3U] 
                                                   >> 1U) 
                                                  & vlSelf->tb_Question6__DOT__i_data
                                                  [3U])) 
                                              | ((~ 
                                                  (vlSelf->tb_Question6__DOT__i_data
                                                   [2U] 
                                                   >> 1U)) 
                                                 & (vlSelf->tb_Question6__DOT__i_data
                                                    [3U] 
                                                    >> 1U)))))))));
        bufp->chgBit(oldp+38,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_Question6__DOT__i_data
                                                      [2U] 
                                                      ^ 
                                                      vlSelf->tb_Question6__DOT__i_data
                                                      [3U]) 
                                                     >> 2U))))) 
                                     & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelf->tb_Question6__DOT__i_data
                                                       [2U] 
                                                       ^ 
                                                       vlSelf->tb_Question6__DOT__i_data
                                                       [3U])))))))));
        bufp->chgCData(oldp+39,((0xfU & (vlSelf->tb_Question6__DOT__i_data
                                         [2U] >> 4U))),4);
        bufp->chgCData(oldp+40,((0xfU & (vlSelf->tb_Question6__DOT__i_data
                                         [3U] >> 4U))),4);
        bufp->chgBit(oldp+41,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                          [2U] >> 5U)) 
                                      & ((~ (vlSelf->tb_Question6__DOT__i_data
                                             [2U] >> 4U)) 
                                         & (vlSelf->tb_Question6__DOT__i_data
                                            [3U] >> 4U))) 
                                     | (((~ (vlSelf->tb_Question6__DOT__i_data
                                             [2U] >> 4U)) 
                                         & ((vlSelf->tb_Question6__DOT__i_data
                                             [3U] >> 5U) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [3U] 
                                               >> 4U))) 
                                        | ((~ (vlSelf->tb_Question6__DOT__i_data
                                               [2U] 
                                               >> 5U)) 
                                           & (vlSelf->tb_Question6__DOT__i_data
                                              [3U] 
                                              >> 5U)))))));
        bufp->chgBit(oldp+42,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((vlSelf->tb_Question6__DOT__i_data
                                                     [2U] 
                                                     ^ 
                                                     vlSelf->tb_Question6__DOT__i_data
                                                     [3U]) 
                                                    >> 4U))))))));
        bufp->chgBit(oldp+43,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                          [2U] >> 7U)) 
                                      & ((~ (vlSelf->tb_Question6__DOT__i_data
                                             [2U] >> 6U)) 
                                         & (vlSelf->tb_Question6__DOT__i_data
                                            [3U] >> 6U))) 
                                     | (((~ (vlSelf->tb_Question6__DOT__i_data
                                             [2U] >> 6U)) 
                                         & ((vlSelf->tb_Question6__DOT__i_data
                                             [3U] >> 7U) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [3U] 
                                               >> 6U))) 
                                        | ((~ (vlSelf->tb_Question6__DOT__i_data
                                               [2U] 
                                               >> 7U)) 
                                           & (vlSelf->tb_Question6__DOT__i_data
                                              [3U] 
                                              >> 7U)))))));
        bufp->chgCData(oldp+44,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [2U] >> 6U))),2);
        bufp->chgCData(oldp+45,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [3U] >> 6U))),2);
        bufp->chgCData(oldp+46,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [2U] >> 4U))),2);
        bufp->chgCData(oldp+47,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [3U] >> 4U))),2);
        bufp->chgCData(oldp+48,((0xfU & vlSelf->tb_Question6__DOT__i_data
                                 [2U])),4);
        bufp->chgCData(oldp+49,((0xfU & vlSelf->tb_Question6__DOT__i_data
                                 [3U])),4);
        bufp->chgBit(oldp+50,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                          [2U] >> 1U)) 
                                      & ((~ vlSelf->tb_Question6__DOT__i_data
                                          [2U]) & vlSelf->tb_Question6__DOT__i_data
                                         [3U])) | (
                                                   ((~ 
                                                     vlSelf->tb_Question6__DOT__i_data
                                                     [2U]) 
                                                    & ((vlSelf->tb_Question6__DOT__i_data
                                                        [3U] 
                                                        >> 1U) 
                                                       & vlSelf->tb_Question6__DOT__i_data
                                                       [3U])) 
                                                   | ((~ 
                                                       (vlSelf->tb_Question6__DOT__i_data
                                                        [2U] 
                                                        >> 1U)) 
                                                      & (vlSelf->tb_Question6__DOT__i_data
                                                         [3U] 
                                                         >> 1U)))))));
        bufp->chgBit(oldp+51,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & (vlSelf->tb_Question6__DOT__i_data
                                                    [2U] 
                                                    ^ 
                                                    vlSelf->tb_Question6__DOT__i_data
                                                    [3U]))))))));
        bufp->chgBit(oldp+52,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                          [2U] >> 3U)) 
                                      & ((~ (vlSelf->tb_Question6__DOT__i_data
                                             [2U] >> 2U)) 
                                         & (vlSelf->tb_Question6__DOT__i_data
                                            [3U] >> 2U))) 
                                     | (((~ (vlSelf->tb_Question6__DOT__i_data
                                             [2U] >> 2U)) 
                                         & ((vlSelf->tb_Question6__DOT__i_data
                                             [3U] >> 3U) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [3U] 
                                               >> 2U))) 
                                        | ((~ (vlSelf->tb_Question6__DOT__i_data
                                               [2U] 
                                               >> 3U)) 
                                           & (vlSelf->tb_Question6__DOT__i_data
                                              [3U] 
                                              >> 3U)))))));
        bufp->chgBit(oldp+53,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((vlSelf->tb_Question6__DOT__i_data
                                                     [2U] 
                                                     ^ 
                                                     vlSelf->tb_Question6__DOT__i_data
                                                     [3U]) 
                                                    >> 2U))))))));
        bufp->chgCData(oldp+54,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [2U] >> 2U))),2);
        bufp->chgCData(oldp+55,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [3U] >> 2U))),2);
        bufp->chgCData(oldp+56,((3U & vlSelf->tb_Question6__DOT__i_data
                                 [2U])),2);
        bufp->chgCData(oldp+57,((3U & vlSelf->tb_Question6__DOT__i_data
                                 [3U])),2);
        bufp->chgCData(oldp+58,(vlSelf->tb_Question6__DOT__i_data
                                [4U]),8);
        bufp->chgCData(oldp+59,(vlSelf->tb_Question6__DOT__i_data
                                [5U]),8);
        bufp->chgCData(oldp+60,(vlSelf->tb_Question6__DOT__i_data
                                [6U]),8);
        bufp->chgCData(oldp+61,(vlSelf->tb_Question6__DOT__i_data
                                [7U]),8);
        bufp->chgBit(oldp+62,((1U & ((((~ (vlSelf->tb_Question6__DOT__i_data
                                           [4U] >> 3U)) 
                                       & ((~ (vlSelf->tb_Question6__DOT__i_data
                                              [4U] 
                                              >> 2U)) 
                                          & (vlSelf->tb_Question6__DOT__i_data
                                             [5U] >> 2U))) 
                                      | (((~ (vlSelf->tb_Question6__DOT__i_data
                                              [4U] 
                                              >> 2U)) 
                                          & ((vlSelf->tb_Question6__DOT__i_data
                                              [5U] 
                                              >> 3U) 
                                             & (vlSelf->tb_Question6__DOT__i_data
                                                [5U] 
                                                >> 2U))) 
                                         | ((~ (vlSelf->tb_Question6__DOT__i_data
                                                [4U] 
                                                >> 3U)) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [5U] 
                                               >> 3U)))) 
                                     | ((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((vlSelf->tb_Question6__DOT__i_data
                                                         [4U] 
                                                         ^ 
                                                         vlSelf->tb_Question6__DOT__i_data
                                                         [5U]) 
                                                        >> 2U))))) 
                                        & (((~ (vlSelf->tb_Question6__DOT__i_data
                                                [4U] 
                                                >> 1U)) 
                                            & ((~ vlSelf->tb_Question6__DOT__i_data
                                                [4U]) 
                                               & vlSelf->tb_Question6__DOT__i_data
                                               [5U])) 
                                           | (((~ vlSelf->tb_Question6__DOT__i_data
                                                [4U]) 
                                               & ((vlSelf->tb_Question6__DOT__i_data
                                                   [5U] 
                                                   >> 1U) 
                                                  & vlSelf->tb_Question6__DOT__i_data
                                                  [5U])) 
                                              | ((~ 
                                                  (vlSelf->tb_Question6__DOT__i_data
                                                   [4U] 
                                                   >> 1U)) 
                                                 & (vlSelf->tb_Question6__DOT__i_data
                                                    [5U] 
                                                    >> 1U)))))))));
        bufp->chgBit(oldp+63,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_Question6__DOT__i_data
                                                      [4U] 
                                                      ^ 
                                                      vlSelf->tb_Question6__DOT__i_data
                                                      [5U]) 
                                                     >> 2U))))) 
                                     & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelf->tb_Question6__DOT__i_data
                                                       [4U] 
                                                       ^ 
                                                       vlSelf->tb_Question6__DOT__i_data
                                                       [5U])))))))));
        bufp->chgCData(oldp+64,((0xfU & (vlSelf->tb_Question6__DOT__i_data
                                         [4U] >> 4U))),4);
        bufp->chgCData(oldp+65,((0xfU & (vlSelf->tb_Question6__DOT__i_data
                                         [5U] >> 4U))),4);
        bufp->chgBit(oldp+66,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                          [4U] >> 5U)) 
                                      & ((~ (vlSelf->tb_Question6__DOT__i_data
                                             [4U] >> 4U)) 
                                         & (vlSelf->tb_Question6__DOT__i_data
                                            [5U] >> 4U))) 
                                     | (((~ (vlSelf->tb_Question6__DOT__i_data
                                             [4U] >> 4U)) 
                                         & ((vlSelf->tb_Question6__DOT__i_data
                                             [5U] >> 5U) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [5U] 
                                               >> 4U))) 
                                        | ((~ (vlSelf->tb_Question6__DOT__i_data
                                               [4U] 
                                               >> 5U)) 
                                           & (vlSelf->tb_Question6__DOT__i_data
                                              [5U] 
                                              >> 5U)))))));
        bufp->chgBit(oldp+67,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((vlSelf->tb_Question6__DOT__i_data
                                                     [4U] 
                                                     ^ 
                                                     vlSelf->tb_Question6__DOT__i_data
                                                     [5U]) 
                                                    >> 4U))))))));
        bufp->chgBit(oldp+68,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                          [4U] >> 7U)) 
                                      & ((~ (vlSelf->tb_Question6__DOT__i_data
                                             [4U] >> 6U)) 
                                         & (vlSelf->tb_Question6__DOT__i_data
                                            [5U] >> 6U))) 
                                     | (((~ (vlSelf->tb_Question6__DOT__i_data
                                             [4U] >> 6U)) 
                                         & ((vlSelf->tb_Question6__DOT__i_data
                                             [5U] >> 7U) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [5U] 
                                               >> 6U))) 
                                        | ((~ (vlSelf->tb_Question6__DOT__i_data
                                               [4U] 
                                               >> 7U)) 
                                           & (vlSelf->tb_Question6__DOT__i_data
                                              [5U] 
                                              >> 7U)))))));
        bufp->chgCData(oldp+69,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [4U] >> 6U))),2);
        bufp->chgCData(oldp+70,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [5U] >> 6U))),2);
        bufp->chgCData(oldp+71,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [4U] >> 4U))),2);
        bufp->chgCData(oldp+72,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [5U] >> 4U))),2);
        bufp->chgCData(oldp+73,((0xfU & vlSelf->tb_Question6__DOT__i_data
                                 [4U])),4);
        bufp->chgCData(oldp+74,((0xfU & vlSelf->tb_Question6__DOT__i_data
                                 [5U])),4);
        bufp->chgBit(oldp+75,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                          [4U] >> 1U)) 
                                      & ((~ vlSelf->tb_Question6__DOT__i_data
                                          [4U]) & vlSelf->tb_Question6__DOT__i_data
                                         [5U])) | (
                                                   ((~ 
                                                     vlSelf->tb_Question6__DOT__i_data
                                                     [4U]) 
                                                    & ((vlSelf->tb_Question6__DOT__i_data
                                                        [5U] 
                                                        >> 1U) 
                                                       & vlSelf->tb_Question6__DOT__i_data
                                                       [5U])) 
                                                   | ((~ 
                                                       (vlSelf->tb_Question6__DOT__i_data
                                                        [4U] 
                                                        >> 1U)) 
                                                      & (vlSelf->tb_Question6__DOT__i_data
                                                         [5U] 
                                                         >> 1U)))))));
        bufp->chgBit(oldp+76,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & (vlSelf->tb_Question6__DOT__i_data
                                                    [4U] 
                                                    ^ 
                                                    vlSelf->tb_Question6__DOT__i_data
                                                    [5U]))))))));
        bufp->chgBit(oldp+77,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                          [4U] >> 3U)) 
                                      & ((~ (vlSelf->tb_Question6__DOT__i_data
                                             [4U] >> 2U)) 
                                         & (vlSelf->tb_Question6__DOT__i_data
                                            [5U] >> 2U))) 
                                     | (((~ (vlSelf->tb_Question6__DOT__i_data
                                             [4U] >> 2U)) 
                                         & ((vlSelf->tb_Question6__DOT__i_data
                                             [5U] >> 3U) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [5U] 
                                               >> 2U))) 
                                        | ((~ (vlSelf->tb_Question6__DOT__i_data
                                               [4U] 
                                               >> 3U)) 
                                           & (vlSelf->tb_Question6__DOT__i_data
                                              [5U] 
                                              >> 3U)))))));
        bufp->chgBit(oldp+78,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((vlSelf->tb_Question6__DOT__i_data
                                                     [4U] 
                                                     ^ 
                                                     vlSelf->tb_Question6__DOT__i_data
                                                     [5U]) 
                                                    >> 2U))))))));
        bufp->chgCData(oldp+79,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [4U] >> 2U))),2);
        bufp->chgCData(oldp+80,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [5U] >> 2U))),2);
        bufp->chgCData(oldp+81,((3U & vlSelf->tb_Question6__DOT__i_data
                                 [4U])),2);
        bufp->chgCData(oldp+82,((3U & vlSelf->tb_Question6__DOT__i_data
                                 [5U])),2);
        bufp->chgBit(oldp+83,((1U & ((((~ (vlSelf->tb_Question6__DOT__i_data
                                           [6U] >> 3U)) 
                                       & ((~ (vlSelf->tb_Question6__DOT__i_data
                                              [6U] 
                                              >> 2U)) 
                                          & (vlSelf->tb_Question6__DOT__i_data
                                             [7U] >> 2U))) 
                                      | (((~ (vlSelf->tb_Question6__DOT__i_data
                                              [6U] 
                                              >> 2U)) 
                                          & ((vlSelf->tb_Question6__DOT__i_data
                                              [7U] 
                                              >> 3U) 
                                             & (vlSelf->tb_Question6__DOT__i_data
                                                [7U] 
                                                >> 2U))) 
                                         | ((~ (vlSelf->tb_Question6__DOT__i_data
                                                [6U] 
                                                >> 3U)) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [7U] 
                                               >> 3U)))) 
                                     | ((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((vlSelf->tb_Question6__DOT__i_data
                                                         [6U] 
                                                         ^ 
                                                         vlSelf->tb_Question6__DOT__i_data
                                                         [7U]) 
                                                        >> 2U))))) 
                                        & (((~ (vlSelf->tb_Question6__DOT__i_data
                                                [6U] 
                                                >> 1U)) 
                                            & ((~ vlSelf->tb_Question6__DOT__i_data
                                                [6U]) 
                                               & vlSelf->tb_Question6__DOT__i_data
                                               [7U])) 
                                           | (((~ vlSelf->tb_Question6__DOT__i_data
                                                [6U]) 
                                               & ((vlSelf->tb_Question6__DOT__i_data
                                                   [7U] 
                                                   >> 1U) 
                                                  & vlSelf->tb_Question6__DOT__i_data
                                                  [7U])) 
                                              | ((~ 
                                                  (vlSelf->tb_Question6__DOT__i_data
                                                   [6U] 
                                                   >> 1U)) 
                                                 & (vlSelf->tb_Question6__DOT__i_data
                                                    [7U] 
                                                    >> 1U)))))))));
        bufp->chgBit(oldp+84,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_Question6__DOT__i_data
                                                      [6U] 
                                                      ^ 
                                                      vlSelf->tb_Question6__DOT__i_data
                                                      [7U]) 
                                                     >> 2U))))) 
                                     & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelf->tb_Question6__DOT__i_data
                                                       [6U] 
                                                       ^ 
                                                       vlSelf->tb_Question6__DOT__i_data
                                                       [7U])))))))));
        bufp->chgCData(oldp+85,((0xfU & (vlSelf->tb_Question6__DOT__i_data
                                         [6U] >> 4U))),4);
        bufp->chgCData(oldp+86,((0xfU & (vlSelf->tb_Question6__DOT__i_data
                                         [7U] >> 4U))),4);
        bufp->chgBit(oldp+87,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                          [6U] >> 5U)) 
                                      & ((~ (vlSelf->tb_Question6__DOT__i_data
                                             [6U] >> 4U)) 
                                         & (vlSelf->tb_Question6__DOT__i_data
                                            [7U] >> 4U))) 
                                     | (((~ (vlSelf->tb_Question6__DOT__i_data
                                             [6U] >> 4U)) 
                                         & ((vlSelf->tb_Question6__DOT__i_data
                                             [7U] >> 5U) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [7U] 
                                               >> 4U))) 
                                        | ((~ (vlSelf->tb_Question6__DOT__i_data
                                               [6U] 
                                               >> 5U)) 
                                           & (vlSelf->tb_Question6__DOT__i_data
                                              [7U] 
                                              >> 5U)))))));
        bufp->chgBit(oldp+88,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((vlSelf->tb_Question6__DOT__i_data
                                                     [6U] 
                                                     ^ 
                                                     vlSelf->tb_Question6__DOT__i_data
                                                     [7U]) 
                                                    >> 4U))))))));
        bufp->chgBit(oldp+89,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                          [6U] >> 7U)) 
                                      & ((~ (vlSelf->tb_Question6__DOT__i_data
                                             [6U] >> 6U)) 
                                         & (vlSelf->tb_Question6__DOT__i_data
                                            [7U] >> 6U))) 
                                     | (((~ (vlSelf->tb_Question6__DOT__i_data
                                             [6U] >> 6U)) 
                                         & ((vlSelf->tb_Question6__DOT__i_data
                                             [7U] >> 7U) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [7U] 
                                               >> 6U))) 
                                        | ((~ (vlSelf->tb_Question6__DOT__i_data
                                               [6U] 
                                               >> 7U)) 
                                           & (vlSelf->tb_Question6__DOT__i_data
                                              [7U] 
                                              >> 7U)))))));
        bufp->chgCData(oldp+90,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [6U] >> 6U))),2);
        bufp->chgCData(oldp+91,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [7U] >> 6U))),2);
        bufp->chgCData(oldp+92,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [6U] >> 4U))),2);
        bufp->chgCData(oldp+93,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [7U] >> 4U))),2);
        bufp->chgCData(oldp+94,((0xfU & vlSelf->tb_Question6__DOT__i_data
                                 [6U])),4);
        bufp->chgCData(oldp+95,((0xfU & vlSelf->tb_Question6__DOT__i_data
                                 [7U])),4);
        bufp->chgBit(oldp+96,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                          [6U] >> 1U)) 
                                      & ((~ vlSelf->tb_Question6__DOT__i_data
                                          [6U]) & vlSelf->tb_Question6__DOT__i_data
                                         [7U])) | (
                                                   ((~ 
                                                     vlSelf->tb_Question6__DOT__i_data
                                                     [6U]) 
                                                    & ((vlSelf->tb_Question6__DOT__i_data
                                                        [7U] 
                                                        >> 1U) 
                                                       & vlSelf->tb_Question6__DOT__i_data
                                                       [7U])) 
                                                   | ((~ 
                                                       (vlSelf->tb_Question6__DOT__i_data
                                                        [6U] 
                                                        >> 1U)) 
                                                      & (vlSelf->tb_Question6__DOT__i_data
                                                         [7U] 
                                                         >> 1U)))))));
        bufp->chgBit(oldp+97,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & (vlSelf->tb_Question6__DOT__i_data
                                                    [6U] 
                                                    ^ 
                                                    vlSelf->tb_Question6__DOT__i_data
                                                    [7U]))))))));
        bufp->chgBit(oldp+98,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                          [6U] >> 3U)) 
                                      & ((~ (vlSelf->tb_Question6__DOT__i_data
                                             [6U] >> 2U)) 
                                         & (vlSelf->tb_Question6__DOT__i_data
                                            [7U] >> 2U))) 
                                     | (((~ (vlSelf->tb_Question6__DOT__i_data
                                             [6U] >> 2U)) 
                                         & ((vlSelf->tb_Question6__DOT__i_data
                                             [7U] >> 3U) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [7U] 
                                               >> 2U))) 
                                        | ((~ (vlSelf->tb_Question6__DOT__i_data
                                               [6U] 
                                               >> 3U)) 
                                           & (vlSelf->tb_Question6__DOT__i_data
                                              [7U] 
                                              >> 3U)))))));
        bufp->chgBit(oldp+99,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((vlSelf->tb_Question6__DOT__i_data
                                                     [6U] 
                                                     ^ 
                                                     vlSelf->tb_Question6__DOT__i_data
                                                     [7U]) 
                                                    >> 2U))))))));
        bufp->chgCData(oldp+100,((3U & (vlSelf->tb_Question6__DOT__i_data
                                        [6U] >> 2U))),2);
        bufp->chgCData(oldp+101,((3U & (vlSelf->tb_Question6__DOT__i_data
                                        [7U] >> 2U))),2);
        bufp->chgCData(oldp+102,((3U & vlSelf->tb_Question6__DOT__i_data
                                  [6U])),2);
        bufp->chgCData(oldp+103,((3U & vlSelf->tb_Question6__DOT__i_data
                                  [7U])),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgQData(oldp+104,((((QData)((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_3)) 
                                   << 0x38U) | (((QData)((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_2)) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_1)) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                                          << 0x18U) 
                                                                         | (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_0) 
                                                                             << 0x10U) 
                                                                            | (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_0) 
                                                                                << 8U) 
                                                                               | (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_0))))))))))),64);
        bufp->chgCData(oldp+106,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[0]),8);
        bufp->chgCData(oldp+107,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[1]),8);
        bufp->chgCData(oldp+108,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[2]),8);
        bufp->chgCData(oldp+109,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[3]),8);
        bufp->chgCData(oldp+110,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[4]),8);
        bufp->chgCData(oldp+111,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[5]),8);
        bufp->chgCData(oldp+112,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[6]),8);
        bufp->chgCData(oldp+113,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[7]),8);
        bufp->chgCData(oldp+114,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[0]),8);
        bufp->chgCData(oldp+115,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[1]),8);
        bufp->chgCData(oldp+116,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[2]),8);
        bufp->chgCData(oldp+117,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[3]),8);
        bufp->chgCData(oldp+118,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[4]),8);
        bufp->chgCData(oldp+119,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[5]),8);
        bufp->chgCData(oldp+120,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[6]),8);
        bufp->chgCData(oldp+121,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[7]),8);
        bufp->chgCData(oldp+122,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[0]),8);
        bufp->chgCData(oldp+123,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[1]),8);
        bufp->chgCData(oldp+124,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[2]),8);
        bufp->chgCData(oldp+125,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[3]),8);
        bufp->chgCData(oldp+126,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[4]),8);
        bufp->chgCData(oldp+127,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[5]),8);
        bufp->chgCData(oldp+128,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[6]),8);
        bufp->chgCData(oldp+129,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[7]),8);
        bufp->chgCData(oldp+130,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[0]),8);
        bufp->chgCData(oldp+131,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[1]),8);
        bufp->chgCData(oldp+132,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[2]),8);
        bufp->chgCData(oldp+133,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[3]),8);
        bufp->chgCData(oldp+134,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[4]),8);
        bufp->chgCData(oldp+135,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[5]),8);
        bufp->chgCData(oldp+136,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[6]),8);
        bufp->chgCData(oldp+137,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[7]),8);
        bufp->chgCData(oldp+138,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0),8);
        bufp->chgCData(oldp+139,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0),8);
        bufp->chgCData(oldp+140,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0),8);
        bufp->chgCData(oldp+141,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1),8);
        bufp->chgCData(oldp+142,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0),8);
        bufp->chgCData(oldp+143,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1),8);
        bufp->chgCData(oldp+144,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0),8);
        bufp->chgCData(oldp+145,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1),8);
        bufp->chgCData(oldp+146,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1),8);
        bufp->chgCData(oldp+147,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0),8);
        bufp->chgBit(oldp+148,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__w_compare));
        bufp->chgBit(oldp+149,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgBit(oldp+150,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__w_compare));
        bufp->chgBit(oldp+151,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgBit(oldp+152,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__w_compare));
        bufp->chgBit(oldp+153,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                                     & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+154,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))))))));
        bufp->chgBit(oldp+155,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+156,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+157,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+158,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+159,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+160,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+161,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+162,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+163,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+164,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+165,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+166,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+167,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))),4);
        bufp->chgCData(oldp+168,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))),4);
        bufp->chgBit(oldp+169,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+170,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)))))))));
        bufp->chgBit(oldp+171,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+172,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+173,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+174,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+175,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))),2);
        bufp->chgCData(oldp+176,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))),2);
        bufp->chgBit(oldp+177,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__w_compare));
        bufp->chgBit(oldp+178,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                                     & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+179,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))))))));
        bufp->chgBit(oldp+180,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+181,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+182,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+183,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+184,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+185,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+186,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+187,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+188,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+189,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+190,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+191,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+192,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))),4);
        bufp->chgCData(oldp+193,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))),4);
        bufp->chgBit(oldp+194,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+195,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)))))))));
        bufp->chgBit(oldp+196,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+197,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+198,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+199,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+200,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))),2);
        bufp->chgCData(oldp+201,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))),2);
        bufp->chgBit(oldp+202,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__w_compare));
        bufp->chgBit(oldp+203,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                                     & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+204,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))))))));
        bufp->chgBit(oldp+205,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+206,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+207,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+208,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+209,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+210,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+211,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+212,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+213,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+214,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+215,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+216,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+217,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))),4);
        bufp->chgCData(oldp+218,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))),4);
        bufp->chgBit(oldp+219,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+220,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)))))))));
        bufp->chgBit(oldp+221,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+222,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+223,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+224,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+225,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))),2);
        bufp->chgCData(oldp+226,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))),2);
        bufp->chgCData(oldp+227,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0),8);
        bufp->chgCData(oldp+228,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0),8);
        bufp->chgCData(oldp+229,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0),8);
        bufp->chgCData(oldp+230,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1),8);
        bufp->chgCData(oldp+231,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0),8);
        bufp->chgCData(oldp+232,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1),8);
        bufp->chgCData(oldp+233,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0),8);
        bufp->chgCData(oldp+234,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1),8);
        bufp->chgCData(oldp+235,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1),8);
        bufp->chgCData(oldp+236,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0),8);
        bufp->chgBit(oldp+237,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__w_compare));
        bufp->chgBit(oldp+238,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgBit(oldp+239,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__w_compare));
        bufp->chgBit(oldp+240,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgBit(oldp+241,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__w_compare));
        bufp->chgBit(oldp+242,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                                     & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+243,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))))))));
        bufp->chgBit(oldp+244,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+245,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+246,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+247,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+248,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+249,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+250,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+251,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+252,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+253,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+254,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+255,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+256,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))),4);
        bufp->chgCData(oldp+257,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))),4);
        bufp->chgBit(oldp+258,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+259,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)))))))));
        bufp->chgBit(oldp+260,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+261,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+262,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+263,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+264,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))),2);
        bufp->chgCData(oldp+265,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))),2);
        bufp->chgBit(oldp+266,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__w_compare));
        bufp->chgBit(oldp+267,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                                     & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+268,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))))))));
        bufp->chgBit(oldp+269,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+270,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+271,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+272,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+273,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+274,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+275,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+276,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+277,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+278,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+279,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+280,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+281,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))),4);
        bufp->chgCData(oldp+282,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))),4);
        bufp->chgBit(oldp+283,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+284,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)))))))));
        bufp->chgBit(oldp+285,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+286,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+287,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+288,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+289,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))),2);
        bufp->chgCData(oldp+290,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))),2);
        bufp->chgBit(oldp+291,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__w_compare));
        bufp->chgBit(oldp+292,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                                     & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+293,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))))))));
        bufp->chgBit(oldp+294,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+295,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+296,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+297,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+298,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+299,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+300,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+301,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+302,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+303,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+304,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+305,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+306,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))),4);
        bufp->chgCData(oldp+307,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))),4);
        bufp->chgBit(oldp+308,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+309,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)))))))));
        bufp->chgBit(oldp+310,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+311,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+312,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+313,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+314,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))),2);
        bufp->chgCData(oldp+315,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))),2);
        bufp->chgCData(oldp+316,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_0),8);
        bufp->chgCData(oldp+317,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_0),8);
        bufp->chgCData(oldp+318,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_0),8);
        bufp->chgCData(oldp+319,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0),8);
        bufp->chgCData(oldp+320,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1),8);
        bufp->chgCData(oldp+321,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_1),8);
        bufp->chgCData(oldp+322,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_2),8);
        bufp->chgCData(oldp+323,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_3),8);
        bufp->chgCData(oldp+324,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1),8);
        bufp->chgCData(oldp+325,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2),8);
        bufp->chgCData(oldp+326,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3),8);
        bufp->chgCData(oldp+327,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0),8);
        bufp->chgCData(oldp+328,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1),8);
        bufp->chgCData(oldp+329,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2),8);
        bufp->chgCData(oldp+330,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1),8);
        bufp->chgCData(oldp+331,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2),8);
        bufp->chgCData(oldp+332,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0),8);
        bufp->chgCData(oldp+333,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1),8);
        bufp->chgBit(oldp+334,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare));
        bufp->chgBit(oldp+335,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                                     & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+336,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))))))));
        bufp->chgBit(oldp+337,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+338,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+339,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+340,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+341,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+342,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+343,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+344,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+345,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+346,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+347,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+348,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+349,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))),4);
        bufp->chgCData(oldp+350,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))),4);
        bufp->chgBit(oldp+351,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+352,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)))))))));
        bufp->chgBit(oldp+353,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+354,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+355,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+356,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+357,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))),2);
        bufp->chgCData(oldp+358,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))),2);
        bufp->chgBit(oldp+359,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__w_compare));
        bufp->chgBit(oldp+360,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                                     & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+361,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))))))));
        bufp->chgBit(oldp+362,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+363,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+364,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+365,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+366,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+367,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+368,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+369,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+370,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+371,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+372,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+373,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+374,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))),4);
        bufp->chgCData(oldp+375,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))),4);
        bufp->chgBit(oldp+376,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+377,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)))))))));
        bufp->chgBit(oldp+378,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+379,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+380,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+381,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+382,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))),2);
        bufp->chgCData(oldp+383,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))),2);
        bufp->chgBit(oldp+384,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__w_compare));
        bufp->chgBit(oldp+385,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                                     & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+386,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))))))));
        bufp->chgBit(oldp+387,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+388,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+389,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+390,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+391,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+392,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+393,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+394,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+395,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+396,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+397,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+398,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+399,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))),4);
        bufp->chgCData(oldp+400,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))),4);
        bufp->chgBit(oldp+401,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+402,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)))))))));
        bufp->chgBit(oldp+403,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+404,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+405,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+406,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+407,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))),2);
        bufp->chgCData(oldp+408,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))),2);
        bufp->chgBit(oldp+409,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare));
        bufp->chgBit(oldp+410,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                                     & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+411,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))))))));
        bufp->chgBit(oldp+412,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+413,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+414,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+415,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+416,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+417,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+418,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+419,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+420,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+421,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+422,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+423,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+424,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))),4);
        bufp->chgCData(oldp+425,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))),4);
        bufp->chgBit(oldp+426,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+427,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))))))));
        bufp->chgBit(oldp+428,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+429,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+430,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+431,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+432,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))),2);
        bufp->chgCData(oldp+433,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))),2);
        bufp->chgBit(oldp+434,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare));
        bufp->chgBit(oldp+435,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                                     & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+436,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))))))));
        bufp->chgBit(oldp+437,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+438,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+439,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+440,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+441,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+442,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+443,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+444,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+445,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+446,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+447,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+448,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+449,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))),4);
        bufp->chgCData(oldp+450,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))),4);
        bufp->chgBit(oldp+451,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+452,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)))))))));
        bufp->chgBit(oldp+453,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+454,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+455,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+456,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+457,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))),2);
        bufp->chgCData(oldp+458,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))),2);
        bufp->chgBit(oldp+459,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__w_compare));
        bufp->chgBit(oldp+460,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                                     & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+461,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))))))));
        bufp->chgBit(oldp+462,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+463,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+464,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+465,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+466,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+467,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+468,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+469,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+470,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+471,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+472,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+473,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+474,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))),4);
        bufp->chgCData(oldp+475,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))),4);
        bufp->chgBit(oldp+476,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+477,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)))))))));
        bufp->chgBit(oldp+478,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+479,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+480,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+481,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+482,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))),2);
        bufp->chgCData(oldp+483,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))),2);
        bufp->chgBit(oldp+484,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare));
        bufp->chgBit(oldp+485,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                                     & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+486,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))))))));
        bufp->chgBit(oldp+487,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+488,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+489,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+490,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+491,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+492,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+493,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+494,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+495,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+496,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+497,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+498,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+499,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))),4);
        bufp->chgCData(oldp+500,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))),4);
        bufp->chgBit(oldp+501,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+502,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))))))));
        bufp->chgBit(oldp+503,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+504,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+505,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+506,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+507,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))),2);
        bufp->chgCData(oldp+508,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))),2);
        bufp->chgBit(oldp+509,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare));
        bufp->chgBit(oldp+510,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                                     & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+511,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))))))));
        bufp->chgBit(oldp+512,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+513,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+514,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+515,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+516,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+517,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+518,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+519,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+520,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+521,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+522,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+523,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+524,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))),4);
        bufp->chgCData(oldp+525,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))),4);
        bufp->chgBit(oldp+526,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+527,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)))))))));
        bufp->chgBit(oldp+528,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+529,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+530,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+531,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+532,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))),2);
        bufp->chgCData(oldp+533,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))),2);
        bufp->chgBit(oldp+534,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare));
        bufp->chgBit(oldp+535,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                   >> 2U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                               >> 2U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                 >> 3U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                          ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                         >> 2U))))) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                                     & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))) 
                                            | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)) 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                    >> 1U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                     >> 1U)))))))));
        bufp->chgBit(oldp+536,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                        ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))))))));
        bufp->chgBit(oldp+537,((1U & (((IData)(((0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                                & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                   >> 6U))) 
                                       | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                          | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                 >> 7U)) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                         & ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                        >> 4U))) 
                                            | (((~ 
                                                 ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                  >> 4U)) 
                                                & (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+538,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                >> 4U))))))));
        bufp->chgCData(oldp+539,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+540,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+541,((1U & ((IData)(((0U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                  >> 4U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 4U)) 
                                          & (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x30U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                >> 5U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+542,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                     >> 4U))))))));
        bufp->chgBit(oldp+543,((1U & ((IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                  >> 6U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 6U)) 
                                          & (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                >> 7U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+544,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+545,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+546,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+547,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+548,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+549,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))),4);
        bufp->chgCData(oldp+550,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))),4);
        bufp->chgBit(oldp+551,((1U & ((IData)(((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))) 
                                      | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)) 
                                          & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                               >> 1U)))))));
        bufp->chgBit(oldp+552,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))))))));
        bufp->chgBit(oldp+553,((1U & ((IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                  >> 2U))) 
                                      | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 2U)) 
                                          & (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                         | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                >> 3U)) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                               >> 3U)))))));
        bufp->chgBit(oldp+554,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+555,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+556,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+557,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))),2);
        bufp->chgCData(oldp+558,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+559,(vlSelf->tb_Question6__DOT__o_sorted[0]),8);
        bufp->chgCData(oldp+560,(vlSelf->tb_Question6__DOT__o_sorted[1]),8);
        bufp->chgCData(oldp+561,(vlSelf->tb_Question6__DOT__o_sorted[2]),8);
        bufp->chgCData(oldp+562,(vlSelf->tb_Question6__DOT__o_sorted[3]),8);
        bufp->chgCData(oldp+563,(vlSelf->tb_Question6__DOT__o_sorted[4]),8);
        bufp->chgCData(oldp+564,(vlSelf->tb_Question6__DOT__o_sorted[5]),8);
        bufp->chgCData(oldp+565,(vlSelf->tb_Question6__DOT__o_sorted[6]),8);
        bufp->chgCData(oldp+566,(vlSelf->tb_Question6__DOT__o_sorted[7]),8);
    }
    bufp->chgBit(oldp+567,(vlSelf->tb_Question6__DOT__i_clk));
    bufp->chgBit(oldp+568,((1U & ((((~ (vlSelf->tb_Question6__DOT__i_data
                                        [0U] >> 7U)) 
                                    & ((~ (vlSelf->tb_Question6__DOT__i_data
                                           [0U] >> 6U)) 
                                       & (vlSelf->tb_Question6__DOT__i_data
                                          [1U] >> 6U))) 
                                   | (((~ (vlSelf->tb_Question6__DOT__i_data
                                           [0U] >> 6U)) 
                                       & ((vlSelf->tb_Question6__DOT__i_data
                                           [1U] >> 7U) 
                                          & (vlSelf->tb_Question6__DOT__i_data
                                             [1U] >> 6U))) 
                                      | ((~ (vlSelf->tb_Question6__DOT__i_data
                                             [0U] >> 7U)) 
                                         & (vlSelf->tb_Question6__DOT__i_data
                                            [1U] >> 7U)))) 
                                  | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                     & (((~ (vlSelf->tb_Question6__DOT__i_data
                                             [0U] >> 5U)) 
                                         & ((~ (vlSelf->tb_Question6__DOT__i_data
                                                [0U] 
                                                >> 4U)) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [1U] 
                                               >> 4U))) 
                                        | (((~ (vlSelf->tb_Question6__DOT__i_data
                                                [0U] 
                                                >> 4U)) 
                                            & ((vlSelf->tb_Question6__DOT__i_data
                                                [1U] 
                                                >> 5U) 
                                               & (vlSelf->tb_Question6__DOT__i_data
                                                  [1U] 
                                                  >> 4U))) 
                                           | ((~ (vlSelf->tb_Question6__DOT__i_data
                                                  [0U] 
                                                  >> 5U)) 
                                              & (vlSelf->tb_Question6__DOT__i_data
                                                 [1U] 
                                                 >> 5U)))))))));
    bufp->chgBit(oldp+569,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                            & (~ (IData)((0U != (3U 
                                                 & ((vlSelf->tb_Question6__DOT__i_data
                                                     [0U] 
                                                     ^ 
                                                     vlSelf->tb_Question6__DOT__i_data
                                                     [1U]) 
                                                    >> 4U))))))));
    bufp->chgBit(oldp+570,((1U & ((((~ (vlSelf->tb_Question6__DOT__i_data
                                        [2U] >> 7U)) 
                                    & ((~ (vlSelf->tb_Question6__DOT__i_data
                                           [2U] >> 6U)) 
                                       & (vlSelf->tb_Question6__DOT__i_data
                                          [3U] >> 6U))) 
                                   | (((~ (vlSelf->tb_Question6__DOT__i_data
                                           [2U] >> 6U)) 
                                       & ((vlSelf->tb_Question6__DOT__i_data
                                           [3U] >> 7U) 
                                          & (vlSelf->tb_Question6__DOT__i_data
                                             [3U] >> 6U))) 
                                      | ((~ (vlSelf->tb_Question6__DOT__i_data
                                             [2U] >> 7U)) 
                                         & (vlSelf->tb_Question6__DOT__i_data
                                            [3U] >> 7U)))) 
                                  | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                     & (((~ (vlSelf->tb_Question6__DOT__i_data
                                             [2U] >> 5U)) 
                                         & ((~ (vlSelf->tb_Question6__DOT__i_data
                                                [2U] 
                                                >> 4U)) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [3U] 
                                               >> 4U))) 
                                        | (((~ (vlSelf->tb_Question6__DOT__i_data
                                                [2U] 
                                                >> 4U)) 
                                            & ((vlSelf->tb_Question6__DOT__i_data
                                                [3U] 
                                                >> 5U) 
                                               & (vlSelf->tb_Question6__DOT__i_data
                                                  [3U] 
                                                  >> 4U))) 
                                           | ((~ (vlSelf->tb_Question6__DOT__i_data
                                                  [2U] 
                                                  >> 5U)) 
                                              & (vlSelf->tb_Question6__DOT__i_data
                                                 [3U] 
                                                 >> 5U)))))))));
    bufp->chgBit(oldp+571,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                            & (~ (IData)((0U != (3U 
                                                 & ((vlSelf->tb_Question6__DOT__i_data
                                                     [2U] 
                                                     ^ 
                                                     vlSelf->tb_Question6__DOT__i_data
                                                     [3U]) 
                                                    >> 4U))))))));
    bufp->chgBit(oldp+572,((1U & ((((~ (vlSelf->tb_Question6__DOT__i_data
                                        [4U] >> 7U)) 
                                    & ((~ (vlSelf->tb_Question6__DOT__i_data
                                           [4U] >> 6U)) 
                                       & (vlSelf->tb_Question6__DOT__i_data
                                          [5U] >> 6U))) 
                                   | (((~ (vlSelf->tb_Question6__DOT__i_data
                                           [4U] >> 6U)) 
                                       & ((vlSelf->tb_Question6__DOT__i_data
                                           [5U] >> 7U) 
                                          & (vlSelf->tb_Question6__DOT__i_data
                                             [5U] >> 6U))) 
                                      | ((~ (vlSelf->tb_Question6__DOT__i_data
                                             [4U] >> 7U)) 
                                         & (vlSelf->tb_Question6__DOT__i_data
                                            [5U] >> 7U)))) 
                                  | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                     & (((~ (vlSelf->tb_Question6__DOT__i_data
                                             [4U] >> 5U)) 
                                         & ((~ (vlSelf->tb_Question6__DOT__i_data
                                                [4U] 
                                                >> 4U)) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [5U] 
                                               >> 4U))) 
                                        | (((~ (vlSelf->tb_Question6__DOT__i_data
                                                [4U] 
                                                >> 4U)) 
                                            & ((vlSelf->tb_Question6__DOT__i_data
                                                [5U] 
                                                >> 5U) 
                                               & (vlSelf->tb_Question6__DOT__i_data
                                                  [5U] 
                                                  >> 4U))) 
                                           | ((~ (vlSelf->tb_Question6__DOT__i_data
                                                  [4U] 
                                                  >> 5U)) 
                                              & (vlSelf->tb_Question6__DOT__i_data
                                                 [5U] 
                                                 >> 5U)))))))));
    bufp->chgBit(oldp+573,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                            & (~ (IData)((0U != (3U 
                                                 & ((vlSelf->tb_Question6__DOT__i_data
                                                     [4U] 
                                                     ^ 
                                                     vlSelf->tb_Question6__DOT__i_data
                                                     [5U]) 
                                                    >> 4U))))))));
    bufp->chgBit(oldp+574,((1U & ((((~ (vlSelf->tb_Question6__DOT__i_data
                                        [6U] >> 7U)) 
                                    & ((~ (vlSelf->tb_Question6__DOT__i_data
                                           [6U] >> 6U)) 
                                       & (vlSelf->tb_Question6__DOT__i_data
                                          [7U] >> 6U))) 
                                   | (((~ (vlSelf->tb_Question6__DOT__i_data
                                           [6U] >> 6U)) 
                                       & ((vlSelf->tb_Question6__DOT__i_data
                                           [7U] >> 7U) 
                                          & (vlSelf->tb_Question6__DOT__i_data
                                             [7U] >> 6U))) 
                                      | ((~ (vlSelf->tb_Question6__DOT__i_data
                                             [6U] >> 7U)) 
                                         & (vlSelf->tb_Question6__DOT__i_data
                                            [7U] >> 7U)))) 
                                  | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                     & (((~ (vlSelf->tb_Question6__DOT__i_data
                                             [6U] >> 5U)) 
                                         & ((~ (vlSelf->tb_Question6__DOT__i_data
                                                [6U] 
                                                >> 4U)) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [7U] 
                                               >> 4U))) 
                                        | (((~ (vlSelf->tb_Question6__DOT__i_data
                                                [6U] 
                                                >> 4U)) 
                                            & ((vlSelf->tb_Question6__DOT__i_data
                                                [7U] 
                                                >> 5U) 
                                               & (vlSelf->tb_Question6__DOT__i_data
                                                  [7U] 
                                                  >> 4U))) 
                                           | ((~ (vlSelf->tb_Question6__DOT__i_data
                                                  [6U] 
                                                  >> 5U)) 
                                              & (vlSelf->tb_Question6__DOT__i_data
                                                 [7U] 
                                                 >> 5U)))))))));
    bufp->chgBit(oldp+575,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                            & (~ (IData)((0U != (3U 
                                                 & ((vlSelf->tb_Question6__DOT__i_data
                                                     [6U] 
                                                     ^ 
                                                     vlSelf->tb_Question6__DOT__i_data
                                                     [7U]) 
                                                    >> 4U))))))));
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
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
