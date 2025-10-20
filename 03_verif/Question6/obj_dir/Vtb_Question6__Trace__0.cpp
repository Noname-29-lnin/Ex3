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
        bufp->chgCData(oldp+16,(vlSelf->tb_Question6__DOT__i_data
                                [4U]),8);
        bufp->chgCData(oldp+17,(vlSelf->tb_Question6__DOT__i_data
                                [5U]),8);
        bufp->chgCData(oldp+18,(vlSelf->tb_Question6__DOT__i_data
                                [6U]),8);
        bufp->chgCData(oldp+19,(vlSelf->tb_Question6__DOT__i_data
                                [7U]),8);
        bufp->chgCData(oldp+20,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [0U] >> 6U))),2);
        bufp->chgCData(oldp+21,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [1U] >> 6U))),2);
        bufp->chgCData(oldp+22,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [0U] >> 4U))),2);
        bufp->chgCData(oldp+23,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [1U] >> 4U))),2);
        bufp->chgCData(oldp+24,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [0U] >> 2U))),2);
        bufp->chgCData(oldp+25,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [1U] >> 2U))),2);
        bufp->chgCData(oldp+26,((3U & vlSelf->tb_Question6__DOT__i_data
                                 [0U])),2);
        bufp->chgCData(oldp+27,((3U & vlSelf->tb_Question6__DOT__i_data
                                 [1U])),2);
        bufp->chgCData(oldp+28,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [2U] >> 6U))),2);
        bufp->chgCData(oldp+29,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [3U] >> 6U))),2);
        bufp->chgCData(oldp+30,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [2U] >> 4U))),2);
        bufp->chgCData(oldp+31,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [3U] >> 4U))),2);
        bufp->chgCData(oldp+32,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [2U] >> 2U))),2);
        bufp->chgCData(oldp+33,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [3U] >> 2U))),2);
        bufp->chgCData(oldp+34,((3U & vlSelf->tb_Question6__DOT__i_data
                                 [2U])),2);
        bufp->chgCData(oldp+35,((3U & vlSelf->tb_Question6__DOT__i_data
                                 [3U])),2);
        bufp->chgCData(oldp+36,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [4U] >> 6U))),2);
        bufp->chgCData(oldp+37,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [5U] >> 6U))),2);
        bufp->chgCData(oldp+38,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [4U] >> 4U))),2);
        bufp->chgCData(oldp+39,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [5U] >> 4U))),2);
        bufp->chgCData(oldp+40,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [4U] >> 2U))),2);
        bufp->chgCData(oldp+41,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [5U] >> 2U))),2);
        bufp->chgCData(oldp+42,((3U & vlSelf->tb_Question6__DOT__i_data
                                 [4U])),2);
        bufp->chgCData(oldp+43,((3U & vlSelf->tb_Question6__DOT__i_data
                                 [5U])),2);
        bufp->chgCData(oldp+44,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [6U] >> 6U))),2);
        bufp->chgCData(oldp+45,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [7U] >> 6U))),2);
        bufp->chgCData(oldp+46,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [6U] >> 4U))),2);
        bufp->chgCData(oldp+47,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [7U] >> 4U))),2);
        bufp->chgCData(oldp+48,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [6U] >> 2U))),2);
        bufp->chgCData(oldp+49,((3U & (vlSelf->tb_Question6__DOT__i_data
                                       [7U] >> 2U))),2);
        bufp->chgCData(oldp+50,((3U & vlSelf->tb_Question6__DOT__i_data
                                 [6U])),2);
        bufp->chgCData(oldp+51,((3U & vlSelf->tb_Question6__DOT__i_data
                                 [7U])),2);
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[1U] 
                       | vlSelf->__Vm_traceActivity
                       [2U]) | vlSelf->__Vm_traceActivity
                      [3U]) | vlSelf->__Vm_traceActivity
                     [5U]))) {
        bufp->chgBit(oldp+52,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                               | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                  & ((~ (vlSelf->tb_Question6__DOT__i_data
                                         [1U] >> 4U)) 
                                     & (vlSelf->tb_Question6__DOT__i_data
                                        [0U] >> 4U))))));
        bufp->chgBit(oldp+53,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                               | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                  & ((~ (vlSelf->tb_Question6__DOT__i_data
                                         [1U] >> 2U)) 
                                     & (vlSelf->tb_Question6__DOT__i_data
                                        [0U] >> 2U))))));
        bufp->chgBit(oldp+54,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                          [1U] >> 1U)) 
                                      & (vlSelf->tb_Question6__DOT__i_data
                                         [0U] >> 1U)) 
                                     | ((~ (((~ (vlSelf->tb_Question6__DOT__i_data
                                                 [1U] 
                                                 >> 1U)) 
                                             & (vlSelf->tb_Question6__DOT__i_data
                                                [0U] 
                                                >> 1U)) 
                                            | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                        & ((~ vlSelf->tb_Question6__DOT__i_data
                                            [1U]) & 
                                           vlSelf->tb_Question6__DOT__i_data
                                           [0U]))))));
        bufp->chgBit(oldp+55,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                               | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                  & ((~ (vlSelf->tb_Question6__DOT__i_data
                                         [0U] >> 4U)) 
                                     & (vlSelf->tb_Question6__DOT__i_data
                                        [1U] >> 4U))))));
        bufp->chgBit(oldp+56,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                               | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                  & ((~ (vlSelf->tb_Question6__DOT__i_data
                                         [0U] >> 2U)) 
                                     & (vlSelf->tb_Question6__DOT__i_data
                                        [1U] >> 2U))))));
        bufp->chgBit(oldp+57,((1U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                     | ((~ (((~ (vlSelf->tb_Question6__DOT__i_data
                                                 [1U] 
                                                 >> 1U)) 
                                             & (vlSelf->tb_Question6__DOT__i_data
                                                [0U] 
                                                >> 1U)) 
                                            | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                        & ((~ vlSelf->tb_Question6__DOT__i_data
                                            [0U]) & 
                                           vlSelf->tb_Question6__DOT__i_data
                                           [1U]))))));
        bufp->chgBit(oldp+58,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.__PVT__COMP_UNT__DOT__w_min_0_0) 
                               | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                  & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                     | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                        & ((~ (vlSelf->tb_Question6__DOT__i_data
                                               [0U] 
                                               >> 4U)) 
                                           & (vlSelf->tb_Question6__DOT__i_data
                                              [1U] 
                                              >> 4U))))))));
        bufp->chgBit(oldp+59,((1U & (((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ (vlSelf->tb_Question6__DOT__i_data
                                                [0U] 
                                                >> 2U)) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [1U] 
                                               >> 2U)))) 
                                     | ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                            | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                               & ((~ 
                                                   (vlSelf->tb_Question6__DOT__i_data
                                                    [1U] 
                                                    >> 2U)) 
                                                  & (vlSelf->tb_Question6__DOT__i_data
                                                     [0U] 
                                                     >> 2U))))) 
                                        & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                           | ((~ ((
                                                   (~ 
                                                    (vlSelf->tb_Question6__DOT__i_data
                                                     [1U] 
                                                     >> 1U)) 
                                                   & (vlSelf->tb_Question6__DOT__i_data
                                                      [0U] 
                                                      >> 1U)) 
                                                  | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                              & ((~ 
                                                  vlSelf->tb_Question6__DOT__i_data
                                                  [0U]) 
                                                 & vlSelf->tb_Question6__DOT__i_data
                                                 [1U]))))))));
        bufp->chgBit(oldp+60,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.__PVT__COMP_UNT__DOT__w_max_0_0) 
                               | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                  & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                     | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                        & ((~ (vlSelf->tb_Question6__DOT__i_data
                                               [1U] 
                                               >> 4U)) 
                                           & (vlSelf->tb_Question6__DOT__i_data
                                              [0U] 
                                              >> 4U))))))));
        bufp->chgBit(oldp+61,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                               | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                  & ((~ (vlSelf->tb_Question6__DOT__i_data
                                         [3U] >> 4U)) 
                                     & (vlSelf->tb_Question6__DOT__i_data
                                        [2U] >> 4U))))));
        bufp->chgBit(oldp+62,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                               | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                  & ((~ (vlSelf->tb_Question6__DOT__i_data
                                         [3U] >> 2U)) 
                                     & (vlSelf->tb_Question6__DOT__i_data
                                        [2U] >> 2U))))));
        bufp->chgBit(oldp+63,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                          [3U] >> 1U)) 
                                      & (vlSelf->tb_Question6__DOT__i_data
                                         [2U] >> 1U)) 
                                     | ((~ (((~ (vlSelf->tb_Question6__DOT__i_data
                                                 [3U] 
                                                 >> 1U)) 
                                             & (vlSelf->tb_Question6__DOT__i_data
                                                [2U] 
                                                >> 1U)) 
                                            | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                        & ((~ vlSelf->tb_Question6__DOT__i_data
                                            [3U]) & 
                                           vlSelf->tb_Question6__DOT__i_data
                                           [2U]))))));
        bufp->chgBit(oldp+64,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                               | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                  & ((~ (vlSelf->tb_Question6__DOT__i_data
                                         [2U] >> 4U)) 
                                     & (vlSelf->tb_Question6__DOT__i_data
                                        [3U] >> 4U))))));
        bufp->chgBit(oldp+65,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                               | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                  & ((~ (vlSelf->tb_Question6__DOT__i_data
                                         [2U] >> 2U)) 
                                     & (vlSelf->tb_Question6__DOT__i_data
                                        [3U] >> 2U))))));
        bufp->chgBit(oldp+66,((1U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                     | ((~ (((~ (vlSelf->tb_Question6__DOT__i_data
                                                 [3U] 
                                                 >> 1U)) 
                                             & (vlSelf->tb_Question6__DOT__i_data
                                                [2U] 
                                                >> 1U)) 
                                            | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                        & ((~ vlSelf->tb_Question6__DOT__i_data
                                            [2U]) & 
                                           vlSelf->tb_Question6__DOT__i_data
                                           [3U]))))));
        bufp->chgBit(oldp+67,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.__PVT__COMP_UNT__DOT__w_min_0_0) 
                               | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                  & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                     | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                        & ((~ (vlSelf->tb_Question6__DOT__i_data
                                               [2U] 
                                               >> 4U)) 
                                           & (vlSelf->tb_Question6__DOT__i_data
                                              [3U] 
                                              >> 4U))))))));
        bufp->chgBit(oldp+68,((1U & (((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ (vlSelf->tb_Question6__DOT__i_data
                                                [2U] 
                                                >> 2U)) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [3U] 
                                               >> 2U)))) 
                                     | ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                            | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                               & ((~ 
                                                   (vlSelf->tb_Question6__DOT__i_data
                                                    [3U] 
                                                    >> 2U)) 
                                                  & (vlSelf->tb_Question6__DOT__i_data
                                                     [2U] 
                                                     >> 2U))))) 
                                        & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                           | ((~ ((
                                                   (~ 
                                                    (vlSelf->tb_Question6__DOT__i_data
                                                     [3U] 
                                                     >> 1U)) 
                                                   & (vlSelf->tb_Question6__DOT__i_data
                                                      [2U] 
                                                      >> 1U)) 
                                                  | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                              & ((~ 
                                                  vlSelf->tb_Question6__DOT__i_data
                                                  [2U]) 
                                                 & vlSelf->tb_Question6__DOT__i_data
                                                 [3U]))))))));
        bufp->chgBit(oldp+69,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.__PVT__COMP_UNT__DOT__w_max_0_0) 
                               | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                  & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                     | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                        & ((~ (vlSelf->tb_Question6__DOT__i_data
                                               [3U] 
                                               >> 4U)) 
                                           & (vlSelf->tb_Question6__DOT__i_data
                                              [2U] 
                                              >> 4U))))))));
        bufp->chgBit(oldp+70,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                               | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                  & ((~ (vlSelf->tb_Question6__DOT__i_data
                                         [5U] >> 4U)) 
                                     & (vlSelf->tb_Question6__DOT__i_data
                                        [4U] >> 4U))))));
        bufp->chgBit(oldp+71,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                               | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                  & ((~ (vlSelf->tb_Question6__DOT__i_data
                                         [5U] >> 2U)) 
                                     & (vlSelf->tb_Question6__DOT__i_data
                                        [4U] >> 2U))))));
        bufp->chgBit(oldp+72,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                          [5U] >> 1U)) 
                                      & (vlSelf->tb_Question6__DOT__i_data
                                         [4U] >> 1U)) 
                                     | ((~ (((~ (vlSelf->tb_Question6__DOT__i_data
                                                 [5U] 
                                                 >> 1U)) 
                                             & (vlSelf->tb_Question6__DOT__i_data
                                                [4U] 
                                                >> 1U)) 
                                            | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                        & ((~ vlSelf->tb_Question6__DOT__i_data
                                            [5U]) & 
                                           vlSelf->tb_Question6__DOT__i_data
                                           [4U]))))));
        bufp->chgBit(oldp+73,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                               | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                  & ((~ (vlSelf->tb_Question6__DOT__i_data
                                         [4U] >> 4U)) 
                                     & (vlSelf->tb_Question6__DOT__i_data
                                        [5U] >> 4U))))));
        bufp->chgBit(oldp+74,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                               | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                  & ((~ (vlSelf->tb_Question6__DOT__i_data
                                         [4U] >> 2U)) 
                                     & (vlSelf->tb_Question6__DOT__i_data
                                        [5U] >> 2U))))));
        bufp->chgBit(oldp+75,((1U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                     | ((~ (((~ (vlSelf->tb_Question6__DOT__i_data
                                                 [5U] 
                                                 >> 1U)) 
                                             & (vlSelf->tb_Question6__DOT__i_data
                                                [4U] 
                                                >> 1U)) 
                                            | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                        & ((~ vlSelf->tb_Question6__DOT__i_data
                                            [4U]) & 
                                           vlSelf->tb_Question6__DOT__i_data
                                           [5U]))))));
        bufp->chgBit(oldp+76,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.__PVT__COMP_UNT__DOT__w_min_0_0) 
                               | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                  & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                     | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                        & ((~ (vlSelf->tb_Question6__DOT__i_data
                                               [4U] 
                                               >> 4U)) 
                                           & (vlSelf->tb_Question6__DOT__i_data
                                              [5U] 
                                              >> 4U))))))));
        bufp->chgBit(oldp+77,((1U & (((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ (vlSelf->tb_Question6__DOT__i_data
                                                [4U] 
                                                >> 2U)) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [5U] 
                                               >> 2U)))) 
                                     | ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                            | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                               & ((~ 
                                                   (vlSelf->tb_Question6__DOT__i_data
                                                    [5U] 
                                                    >> 2U)) 
                                                  & (vlSelf->tb_Question6__DOT__i_data
                                                     [4U] 
                                                     >> 2U))))) 
                                        & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                           | ((~ ((
                                                   (~ 
                                                    (vlSelf->tb_Question6__DOT__i_data
                                                     [5U] 
                                                     >> 1U)) 
                                                   & (vlSelf->tb_Question6__DOT__i_data
                                                      [4U] 
                                                      >> 1U)) 
                                                  | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                              & ((~ 
                                                  vlSelf->tb_Question6__DOT__i_data
                                                  [4U]) 
                                                 & vlSelf->tb_Question6__DOT__i_data
                                                 [5U]))))))));
        bufp->chgBit(oldp+78,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.__PVT__COMP_UNT__DOT__w_max_0_0) 
                               | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                  & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                     | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                        & ((~ (vlSelf->tb_Question6__DOT__i_data
                                               [5U] 
                                               >> 4U)) 
                                           & (vlSelf->tb_Question6__DOT__i_data
                                              [4U] 
                                              >> 4U))))))));
        bufp->chgBit(oldp+79,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                               | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                  & ((~ (vlSelf->tb_Question6__DOT__i_data
                                         [7U] >> 4U)) 
                                     & (vlSelf->tb_Question6__DOT__i_data
                                        [6U] >> 4U))))));
        bufp->chgBit(oldp+80,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                               | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                  & ((~ (vlSelf->tb_Question6__DOT__i_data
                                         [7U] >> 2U)) 
                                     & (vlSelf->tb_Question6__DOT__i_data
                                        [6U] >> 2U))))));
        bufp->chgBit(oldp+81,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                          [7U] >> 1U)) 
                                      & (vlSelf->tb_Question6__DOT__i_data
                                         [6U] >> 1U)) 
                                     | ((~ (((~ (vlSelf->tb_Question6__DOT__i_data
                                                 [7U] 
                                                 >> 1U)) 
                                             & (vlSelf->tb_Question6__DOT__i_data
                                                [6U] 
                                                >> 1U)) 
                                            | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                        & ((~ vlSelf->tb_Question6__DOT__i_data
                                            [7U]) & 
                                           vlSelf->tb_Question6__DOT__i_data
                                           [6U]))))));
        bufp->chgBit(oldp+82,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                               | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                  & ((~ (vlSelf->tb_Question6__DOT__i_data
                                         [6U] >> 4U)) 
                                     & (vlSelf->tb_Question6__DOT__i_data
                                        [7U] >> 4U))))));
        bufp->chgBit(oldp+83,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                               | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                  & ((~ (vlSelf->tb_Question6__DOT__i_data
                                         [6U] >> 2U)) 
                                     & (vlSelf->tb_Question6__DOT__i_data
                                        [7U] >> 2U))))));
        bufp->chgBit(oldp+84,((1U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                     | ((~ (((~ (vlSelf->tb_Question6__DOT__i_data
                                                 [7U] 
                                                 >> 1U)) 
                                             & (vlSelf->tb_Question6__DOT__i_data
                                                [6U] 
                                                >> 1U)) 
                                            | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                        & ((~ vlSelf->tb_Question6__DOT__i_data
                                            [6U]) & 
                                           vlSelf->tb_Question6__DOT__i_data
                                           [7U]))))));
        bufp->chgBit(oldp+85,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.__PVT__COMP_UNT__DOT__w_min_0_0) 
                               | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                  & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                     | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                        & ((~ (vlSelf->tb_Question6__DOT__i_data
                                               [6U] 
                                               >> 4U)) 
                                           & (vlSelf->tb_Question6__DOT__i_data
                                              [7U] 
                                              >> 4U))))))));
        bufp->chgBit(oldp+86,((1U & (((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ (vlSelf->tb_Question6__DOT__i_data
                                                [6U] 
                                                >> 2U)) 
                                            & (vlSelf->tb_Question6__DOT__i_data
                                               [7U] 
                                               >> 2U)))) 
                                     | ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                            | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                               & ((~ 
                                                   (vlSelf->tb_Question6__DOT__i_data
                                                    [7U] 
                                                    >> 2U)) 
                                                  & (vlSelf->tb_Question6__DOT__i_data
                                                     [6U] 
                                                     >> 2U))))) 
                                        & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                           | ((~ ((
                                                   (~ 
                                                    (vlSelf->tb_Question6__DOT__i_data
                                                     [7U] 
                                                     >> 1U)) 
                                                   & (vlSelf->tb_Question6__DOT__i_data
                                                      [6U] 
                                                      >> 1U)) 
                                                  | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                              & ((~ 
                                                  vlSelf->tb_Question6__DOT__i_data
                                                  [6U]) 
                                                 & vlSelf->tb_Question6__DOT__i_data
                                                 [7U]))))))));
        bufp->chgBit(oldp+87,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.__PVT__COMP_UNT__DOT__w_max_0_0) 
                               | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                  & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                     | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                        & ((~ (vlSelf->tb_Question6__DOT__i_data
                                               [7U] 
                                               >> 4U)) 
                                           & (vlSelf->tb_Question6__DOT__i_data
                                              [6U] 
                                              >> 4U))))))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgQData(oldp+88,((((QData)((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_min)) 
                                  << 0x38U) | (((QData)((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_min)) 
                                                << 0x30U) 
                                               | (((QData)((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.o_data_min)) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.o_data_max)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                                                         << 0x18U) 
                                                                        | (((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                                                            << 0x10U) 
                                                                           | (((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                                                               << 8U) 
                                                                              | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_max))))))))))),64);
        bufp->chgCData(oldp+90,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[0]),8);
        bufp->chgCData(oldp+91,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[1]),8);
        bufp->chgCData(oldp+92,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[2]),8);
        bufp->chgCData(oldp+93,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[3]),8);
        bufp->chgCData(oldp+94,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[4]),8);
        bufp->chgCData(oldp+95,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[5]),8);
        bufp->chgCData(oldp+96,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[6]),8);
        bufp->chgCData(oldp+97,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[7]),8);
        bufp->chgCData(oldp+98,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[0]),8);
        bufp->chgCData(oldp+99,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[1]),8);
        bufp->chgCData(oldp+100,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[2]),8);
        bufp->chgCData(oldp+101,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[3]),8);
        bufp->chgCData(oldp+102,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[4]),8);
        bufp->chgCData(oldp+103,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[5]),8);
        bufp->chgCData(oldp+104,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[6]),8);
        bufp->chgCData(oldp+105,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[7]),8);
        bufp->chgCData(oldp+106,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[0]),8);
        bufp->chgCData(oldp+107,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[1]),8);
        bufp->chgCData(oldp+108,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[2]),8);
        bufp->chgCData(oldp+109,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[3]),8);
        bufp->chgCData(oldp+110,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[4]),8);
        bufp->chgCData(oldp+111,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[5]),8);
        bufp->chgCData(oldp+112,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[6]),8);
        bufp->chgCData(oldp+113,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[7]),8);
        bufp->chgCData(oldp+114,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[0]),8);
        bufp->chgCData(oldp+115,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[1]),8);
        bufp->chgCData(oldp+116,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[2]),8);
        bufp->chgCData(oldp+117,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[3]),8);
        bufp->chgCData(oldp+118,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[4]),8);
        bufp->chgCData(oldp+119,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[5]),8);
        bufp->chgCData(oldp+120,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[6]),8);
        bufp->chgCData(oldp+121,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[7]),8);
        bufp->chgCData(oldp+122,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max),8);
        bufp->chgCData(oldp+123,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max),8);
        bufp->chgCData(oldp+124,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min),8);
        bufp->chgCData(oldp+125,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min),8);
        bufp->chgCData(oldp+126,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max),8);
        bufp->chgCData(oldp+127,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max),8);
        bufp->chgCData(oldp+128,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min),8);
        bufp->chgCData(oldp+129,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min),8);
        bufp->chgCData(oldp+130,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max),8);
        bufp->chgCData(oldp+131,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min),8);
        bufp->chgCData(oldp+132,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max),8);
        bufp->chgCData(oldp+133,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max),8);
        bufp->chgCData(oldp+134,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min),8);
        bufp->chgCData(oldp+135,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min),8);
        bufp->chgCData(oldp+136,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max),8);
        bufp->chgCData(oldp+137,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max),8);
        bufp->chgCData(oldp+138,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min),8);
        bufp->chgCData(oldp+139,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min),8);
        bufp->chgCData(oldp+140,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max),8);
        bufp->chgCData(oldp+141,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min),8);
        bufp->chgCData(oldp+142,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_max),8);
        bufp->chgCData(oldp+143,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_max),8);
        bufp->chgCData(oldp+144,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.o_data_max),8);
        bufp->chgCData(oldp+145,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.o_data_min),8);
        bufp->chgCData(oldp+146,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.o_data_max),8);
        bufp->chgCData(oldp+147,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.o_data_min),8);
        bufp->chgCData(oldp+148,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_min),8);
        bufp->chgCData(oldp+149,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_min),8);
        bufp->chgCData(oldp+150,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max),8);
        bufp->chgCData(oldp+151,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max),8);
        bufp->chgCData(oldp+152,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max),8);
        bufp->chgCData(oldp+153,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min),8);
        bufp->chgCData(oldp+154,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min),8);
        bufp->chgCData(oldp+155,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min),8);
        bufp->chgCData(oldp+156,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max),8);
        bufp->chgCData(oldp+157,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max),8);
        bufp->chgCData(oldp+158,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min),8);
        bufp->chgCData(oldp+159,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min),8);
        bufp->chgBit(oldp+160,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.__PVT__w_compare));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.__PVT__COMP_UNT__DOT__w_max_0_0));
        bufp->chgBit(oldp+162,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.__PVT__COMP_UNT__DOT__w_min_0_0));
        bufp->chgBit(oldp+163,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.__PVT__w_compare));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.__PVT__COMP_UNT__DOT__w_max_0_0));
        bufp->chgBit(oldp+165,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.__PVT__COMP_UNT__DOT__w_min_0_0));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.__PVT__w_compare));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.__PVT__COMP_UNT__DOT__w_max_0_0));
        bufp->chgBit(oldp+168,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                       >> 4U))))));
        bufp->chgBit(oldp+169,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                       >> 2U))))));
        bufp->chgBit(oldp+170,((1U & (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                           >> 1U)) 
                                       & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                          >> 1U)) | 
                                      ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                >> 1U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                               >> 1U)) 
                                           | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                       & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max)) 
                                          & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max)))))));
        bufp->chgBit(oldp+171,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.__PVT__COMP_UNT__DOT__w_min_0_0));
        bufp->chgBit(oldp+172,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                       >> 4U))))));
        bufp->chgBit(oldp+173,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                       >> 2U))))));
        bufp->chgBit(oldp+174,((1U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                  >> 1U)) 
                                              & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                                 >> 1U)) 
                                             | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                         & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max)) 
                                            & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max)))))));
        bufp->chgBit(oldp+175,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.__PVT__COMP_UNT__DOT__w_min_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                               >> 4U))))))));
        bufp->chgBit(oldp+176,((1U & (((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                       | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                          & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                                 >> 2U)) 
                                             & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                >> 2U)))) 
                                      | ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                             | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                                      >> 2U))))) 
                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                            | ((~ (
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                      >> 1U)) 
                                                    & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                                       >> 1U)) 
                                                   | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                               & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max)) 
                                                  & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max)))))))));
        bufp->chgBit(oldp+177,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.__PVT__COMP_UNT__DOT__w_max_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                               >> 4U))))))));
        bufp->chgCData(oldp+178,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+179,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+180,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+181,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+182,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+183,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+184,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_max))),2);
        bufp->chgCData(oldp+185,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_max))),2);
        bufp->chgBit(oldp+186,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.__PVT__w_compare));
        bufp->chgBit(oldp+187,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.__PVT__COMP_UNT__DOT__w_max_0_0));
        bufp->chgBit(oldp+188,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                       >> 4U))))));
        bufp->chgBit(oldp+189,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                       >> 2U))))));
        bufp->chgBit(oldp+190,((1U & (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                           >> 1U)) 
                                       & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                          >> 1U)) | 
                                      ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                >> 1U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                               >> 1U)) 
                                           | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                       & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min)) 
                                          & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min)))))));
        bufp->chgBit(oldp+191,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.__PVT__COMP_UNT__DOT__w_min_0_0));
        bufp->chgBit(oldp+192,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                       >> 4U))))));
        bufp->chgBit(oldp+193,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                       >> 2U))))));
        bufp->chgBit(oldp+194,((1U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                  >> 1U)) 
                                              & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                 >> 1U)) 
                                             | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                         & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min)) 
                                            & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min)))))));
        bufp->chgBit(oldp+195,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.__PVT__COMP_UNT__DOT__w_min_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                               >> 4U))))))));
        bufp->chgBit(oldp+196,((1U & (((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                       | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                          & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                 >> 2U)) 
                                             & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                >> 2U)))) 
                                      | ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                             | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                      >> 2U))))) 
                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                            | ((~ (
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                      >> 1U)) 
                                                    & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                       >> 1U)) 
                                                   | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                               & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min)) 
                                                  & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min)))))))));
        bufp->chgBit(oldp+197,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.__PVT__COMP_UNT__DOT__w_max_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                               >> 4U))))))));
        bufp->chgCData(oldp+198,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+199,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+200,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+201,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+202,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+203,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+204,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0.o_data_min))),2);
        bufp->chgCData(oldp+205,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1.o_data_min))),2);
        bufp->chgBit(oldp+206,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.__PVT__w_compare));
        bufp->chgBit(oldp+207,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.__PVT__COMP_UNT__DOT__w_max_0_0));
        bufp->chgBit(oldp+208,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                       >> 4U))))));
        bufp->chgBit(oldp+209,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                       >> 2U))))));
        bufp->chgBit(oldp+210,((1U & (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                           >> 1U)) 
                                       & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                          >> 1U)) | 
                                      ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                >> 1U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                               >> 1U)) 
                                           | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                       & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max)) 
                                          & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min)))))));
        bufp->chgBit(oldp+211,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.__PVT__COMP_UNT__DOT__w_min_0_0));
        bufp->chgBit(oldp+212,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                       >> 4U))))));
        bufp->chgBit(oldp+213,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                       >> 2U))))));
        bufp->chgBit(oldp+214,((1U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                  >> 1U)) 
                                              & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                 >> 1U)) 
                                             | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                         & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min)) 
                                            & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max)))))));
        bufp->chgBit(oldp+215,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.__PVT__COMP_UNT__DOT__w_min_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                               >> 4U))))))));
        bufp->chgBit(oldp+216,((1U & (((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                       | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                          & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                 >> 2U)) 
                                             & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                >> 2U)))) 
                                      | ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                             | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                      >> 2U))))) 
                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                            | ((~ (
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                      >> 1U)) 
                                                    & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                       >> 1U)) 
                                                   | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                               & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min)) 
                                                  & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max)))))))));
        bufp->chgBit(oldp+217,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.__PVT__COMP_UNT__DOT__w_max_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                               >> 4U))))))));
        bufp->chgCData(oldp+218,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+219,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+220,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+221,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+222,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+223,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+224,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_min))),2);
        bufp->chgCData(oldp+225,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_max))),2);
        bufp->chgBit(oldp+226,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.__PVT__w_compare));
        bufp->chgBit(oldp+227,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.__PVT__COMP_UNT__DOT__w_max_0_0));
        bufp->chgBit(oldp+228,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.__PVT__COMP_UNT__DOT__w_min_0_0));
        bufp->chgBit(oldp+229,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.__PVT__w_compare));
        bufp->chgBit(oldp+230,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.__PVT__COMP_UNT__DOT__w_max_0_0));
        bufp->chgBit(oldp+231,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.__PVT__COMP_UNT__DOT__w_min_0_0));
        bufp->chgBit(oldp+232,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.__PVT__w_compare));
        bufp->chgBit(oldp+233,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.__PVT__COMP_UNT__DOT__w_max_0_0));
        bufp->chgBit(oldp+234,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                       >> 4U))))));
        bufp->chgBit(oldp+235,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                       >> 2U))))));
        bufp->chgBit(oldp+236,((1U & (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                           >> 1U)) 
                                       & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                          >> 1U)) | 
                                      ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                                >> 1U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                               >> 1U)) 
                                           | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                       & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max)) 
                                          & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max)))))));
        bufp->chgBit(oldp+237,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.__PVT__COMP_UNT__DOT__w_min_0_0));
        bufp->chgBit(oldp+238,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                       >> 4U))))));
        bufp->chgBit(oldp+239,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                       >> 2U))))));
        bufp->chgBit(oldp+240,((1U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                                  >> 1U)) 
                                              & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                                 >> 1U)) 
                                             | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                         & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max)) 
                                            & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max)))))));
        bufp->chgBit(oldp+241,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.__PVT__COMP_UNT__DOT__w_min_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                               >> 4U))))))));
        bufp->chgBit(oldp+242,((1U & (((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                       | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                          & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                                 >> 2U)) 
                                             & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                                >> 2U)))) 
                                      | ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                             | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                                      >> 2U))))) 
                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                            | ((~ (
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                                      >> 1U)) 
                                                    & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                                       >> 1U)) 
                                                   | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                               & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max)) 
                                                  & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max)))))))));
        bufp->chgBit(oldp+243,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.__PVT__COMP_UNT__DOT__w_max_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                               >> 4U))))))));
        bufp->chgCData(oldp+244,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+245,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+246,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+247,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+248,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+249,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+250,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_max))),2);
        bufp->chgCData(oldp+251,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_max))),2);
        bufp->chgBit(oldp+252,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.__PVT__w_compare));
        bufp->chgBit(oldp+253,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.__PVT__COMP_UNT__DOT__w_max_0_0));
        bufp->chgBit(oldp+254,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                       >> 4U))))));
        bufp->chgBit(oldp+255,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                       >> 2U))))));
        bufp->chgBit(oldp+256,((1U & (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                           >> 1U)) 
                                       & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                          >> 1U)) | 
                                      ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                                >> 1U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                               >> 1U)) 
                                           | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                       & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min)) 
                                          & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min)))))));
        bufp->chgBit(oldp+257,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.__PVT__COMP_UNT__DOT__w_min_0_0));
        bufp->chgBit(oldp+258,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                       >> 4U))))));
        bufp->chgBit(oldp+259,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                       >> 2U))))));
        bufp->chgBit(oldp+260,((1U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                                  >> 1U)) 
                                              & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                                 >> 1U)) 
                                             | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                         & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min)) 
                                            & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min)))))));
        bufp->chgBit(oldp+261,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.__PVT__COMP_UNT__DOT__w_min_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                               >> 4U))))))));
        bufp->chgBit(oldp+262,((1U & (((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                       | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                          & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                                 >> 2U)) 
                                             & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                                >> 2U)))) 
                                      | ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                             | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                                      >> 2U))))) 
                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                            | ((~ (
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                                      >> 1U)) 
                                                    & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                                       >> 1U)) 
                                                   | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                               & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min)) 
                                                  & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min)))))))));
        bufp->chgBit(oldp+263,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.__PVT__COMP_UNT__DOT__w_max_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                               >> 4U))))))));
        bufp->chgCData(oldp+264,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+265,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+266,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+267,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+268,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+269,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+270,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0.o_data_min))),2);
        bufp->chgCData(oldp+271,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1.o_data_min))),2);
        bufp->chgBit(oldp+272,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.__PVT__w_compare));
        bufp->chgBit(oldp+273,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.__PVT__COMP_UNT__DOT__w_max_0_0));
        bufp->chgBit(oldp+274,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                       >> 4U))))));
        bufp->chgBit(oldp+275,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                       >> 2U))))));
        bufp->chgBit(oldp+276,((1U & (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                           >> 1U)) 
                                       & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                          >> 1U)) | 
                                      ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                                >> 1U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                               >> 1U)) 
                                           | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                       & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max)) 
                                          & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min)))))));
        bufp->chgBit(oldp+277,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.__PVT__COMP_UNT__DOT__w_min_0_0));
        bufp->chgBit(oldp+278,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                       >> 4U))))));
        bufp->chgBit(oldp+279,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                       >> 2U))))));
        bufp->chgBit(oldp+280,((1U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                                  >> 1U)) 
                                              & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                                 >> 1U)) 
                                             | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                         & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min)) 
                                            & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max)))))));
        bufp->chgBit(oldp+281,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.__PVT__COMP_UNT__DOT__w_min_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                               >> 4U))))))));
        bufp->chgBit(oldp+282,((1U & (((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                       | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                          & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                                 >> 2U)) 
                                             & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                                >> 2U)))) 
                                      | ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                             | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                                      >> 2U))))) 
                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                            | ((~ (
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                                      >> 1U)) 
                                                    & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                                       >> 1U)) 
                                                   | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                               & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min)) 
                                                  & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max)))))))));
        bufp->chgBit(oldp+283,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.__PVT__COMP_UNT__DOT__w_max_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                               >> 4U))))))));
        bufp->chgCData(oldp+284,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+285,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+286,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+287,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+288,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+289,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+290,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_min))),2);
        bufp->chgCData(oldp+291,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_max))),2);
        bufp->chgBit(oldp+292,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.__PVT__w_compare));
        bufp->chgBit(oldp+293,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.__PVT__COMP_UNT__DOT__w_max_0_0));
        bufp->chgBit(oldp+294,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                       >> 4U))))));
        bufp->chgBit(oldp+295,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                       >> 2U))))));
        bufp->chgBit(oldp+296,((1U & (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                           >> 1U)) 
                                       & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                          >> 1U)) | 
                                      ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                                >> 1U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                               >> 1U)) 
                                           | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                       & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max)) 
                                          & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max)))))));
        bufp->chgBit(oldp+297,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.__PVT__COMP_UNT__DOT__w_min_0_0));
        bufp->chgBit(oldp+298,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                       >> 4U))))));
        bufp->chgBit(oldp+299,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                       >> 2U))))));
        bufp->chgBit(oldp+300,((1U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                                  >> 1U)) 
                                              & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                                 >> 1U)) 
                                             | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                         & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max)) 
                                            & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max)))))));
        bufp->chgBit(oldp+301,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.__PVT__COMP_UNT__DOT__w_min_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                               >> 4U))))))));
        bufp->chgBit(oldp+302,((1U & (((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                       | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                          & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                                 >> 2U)) 
                                             & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                                >> 2U)))) 
                                      | ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                             | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                                      >> 2U))))) 
                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                            | ((~ (
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                                      >> 1U)) 
                                                    & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                                       >> 1U)) 
                                                   | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                               & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max)) 
                                                  & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max)))))))));
        bufp->chgBit(oldp+303,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.__PVT__COMP_UNT__DOT__w_max_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                               >> 4U))))))));
        bufp->chgCData(oldp+304,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+305,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+306,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+307,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+308,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+309,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+310,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0.o_data_max))),2);
        bufp->chgCData(oldp+311,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0.o_data_max))),2);
        bufp->chgBit(oldp+312,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.__PVT__w_compare));
        bufp->chgBit(oldp+313,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.__PVT__COMP_UNT__DOT__w_max_0_0));
        bufp->chgBit(oldp+314,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                       >> 4U))))));
        bufp->chgBit(oldp+315,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                       >> 2U))))));
        bufp->chgBit(oldp+316,((1U & (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                           >> 1U)) 
                                       & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                          >> 1U)) | 
                                      ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                                >> 1U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                               >> 1U)) 
                                           | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                       & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max)) 
                                          & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max)))))));
        bufp->chgBit(oldp+317,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.__PVT__COMP_UNT__DOT__w_min_0_0));
        bufp->chgBit(oldp+318,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                       >> 4U))))));
        bufp->chgBit(oldp+319,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                       >> 2U))))));
        bufp->chgBit(oldp+320,((1U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                                  >> 1U)) 
                                              & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                                 >> 1U)) 
                                             | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                         & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max)) 
                                            & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max)))))));
        bufp->chgBit(oldp+321,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.__PVT__COMP_UNT__DOT__w_min_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                               >> 4U))))))));
        bufp->chgBit(oldp+322,((1U & (((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                       | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                          & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                                 >> 2U)) 
                                             & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                                >> 2U)))) 
                                      | ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                             | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                                      >> 2U))))) 
                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                            | ((~ (
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                                      >> 1U)) 
                                                    & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                                       >> 1U)) 
                                                   | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                               & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max)) 
                                                  & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max)))))))));
        bufp->chgBit(oldp+323,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.__PVT__COMP_UNT__DOT__w_max_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                               >> 4U))))))));
        bufp->chgCData(oldp+324,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+325,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+326,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+327,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+328,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+329,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+330,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_max))),2);
        bufp->chgCData(oldp+331,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_max))),2);
        bufp->chgBit(oldp+332,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.__PVT__w_compare));
        bufp->chgBit(oldp+333,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.__PVT__COMP_UNT__DOT__w_max_0_0));
        bufp->chgBit(oldp+334,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                       >> 4U))))));
        bufp->chgBit(oldp+335,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                       >> 2U))))));
        bufp->chgBit(oldp+336,((1U & (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                           >> 1U)) 
                                       & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                          >> 1U)) | 
                                      ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                                >> 1U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                               >> 1U)) 
                                           | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                       & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min)) 
                                          & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min)))))));
        bufp->chgBit(oldp+337,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.__PVT__COMP_UNT__DOT__w_min_0_0));
        bufp->chgBit(oldp+338,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                       >> 4U))))));
        bufp->chgBit(oldp+339,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                       >> 2U))))));
        bufp->chgBit(oldp+340,((1U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                                  >> 1U)) 
                                              & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                                 >> 1U)) 
                                             | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                         & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min)) 
                                            & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min)))))));
        bufp->chgBit(oldp+341,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.__PVT__COMP_UNT__DOT__w_min_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                               >> 4U))))))));
        bufp->chgBit(oldp+342,((1U & (((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                       | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                          & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                                 >> 2U)) 
                                             & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                                >> 2U)))) 
                                      | ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                             | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                                      >> 2U))))) 
                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                            | ((~ (
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                                      >> 1U)) 
                                                    & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                                       >> 1U)) 
                                                   | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                               & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min)) 
                                                  & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min)))))))));
        bufp->chgBit(oldp+343,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.__PVT__COMP_UNT__DOT__w_max_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                               >> 4U))))))));
        bufp->chgCData(oldp+344,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+345,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+346,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+347,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+348,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+349,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+350,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0.o_data_min))),2);
        bufp->chgCData(oldp+351,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0.o_data_min))),2);
        bufp->chgBit(oldp+352,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.__PVT__w_compare));
        bufp->chgBit(oldp+353,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.__PVT__COMP_UNT__DOT__w_max_0_0));
        bufp->chgBit(oldp+354,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                       >> 4U))))));
        bufp->chgBit(oldp+355,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                       >> 2U))))));
        bufp->chgBit(oldp+356,((1U & (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                           >> 1U)) 
                                       & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                          >> 1U)) | 
                                      ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                                >> 1U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                               >> 1U)) 
                                           | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                       & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min)) 
                                          & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min)))))));
        bufp->chgBit(oldp+357,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.__PVT__COMP_UNT__DOT__w_min_0_0));
        bufp->chgBit(oldp+358,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                       >> 4U))))));
        bufp->chgBit(oldp+359,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                       >> 2U))))));
        bufp->chgBit(oldp+360,((1U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                                  >> 1U)) 
                                              & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                 >> 1U)) 
                                             | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                         & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min)) 
                                            & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min)))))));
        bufp->chgBit(oldp+361,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.__PVT__COMP_UNT__DOT__w_min_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                               >> 4U))))))));
        bufp->chgBit(oldp+362,((1U & (((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                       | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                          & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                 >> 2U)) 
                                             & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                                >> 2U)))) 
                                      | ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                             | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                      >> 2U))))) 
                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                            | ((~ (
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                                      >> 1U)) 
                                                    & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                       >> 1U)) 
                                                   | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                               & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min)) 
                                                  & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min)))))))));
        bufp->chgBit(oldp+363,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.__PVT__COMP_UNT__DOT__w_max_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                               >> 4U))))))));
        bufp->chgCData(oldp+364,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+365,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+366,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+367,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+368,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+369,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+370,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1.o_data_min))),2);
        bufp->chgCData(oldp+371,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1.o_data_min))),2);
        bufp->chgBit(oldp+372,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.__PVT__w_compare));
        bufp->chgBit(oldp+373,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.__PVT__COMP_UNT__DOT__w_max_0_0));
        bufp->chgBit(oldp+374,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                       >> 4U))))));
        bufp->chgBit(oldp+375,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                       >> 2U))))));
        bufp->chgBit(oldp+376,((1U & (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                           >> 1U)) 
                                       & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                          >> 1U)) | 
                                      ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                >> 1U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                               >> 1U)) 
                                           | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                       & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max)) 
                                          & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min)))))));
        bufp->chgBit(oldp+377,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.__PVT__COMP_UNT__DOT__w_min_0_0));
        bufp->chgBit(oldp+378,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                       >> 4U))))));
        bufp->chgBit(oldp+379,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                       >> 2U))))));
        bufp->chgBit(oldp+380,((1U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                  >> 1U)) 
                                              & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                 >> 1U)) 
                                             | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                         & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min)) 
                                            & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max)))))));
        bufp->chgBit(oldp+381,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.__PVT__COMP_UNT__DOT__w_min_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                               >> 4U))))))));
        bufp->chgBit(oldp+382,((1U & (((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                       | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                          & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                 >> 2U)) 
                                             & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                >> 2U)))) 
                                      | ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                             | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                      >> 2U))))) 
                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                            | ((~ (
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                      >> 1U)) 
                                                    & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                                       >> 1U)) 
                                                   | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                               & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min)) 
                                                  & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max)))))))));
        bufp->chgBit(oldp+383,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.__PVT__COMP_UNT__DOT__w_max_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                               >> 4U))))))));
        bufp->chgCData(oldp+384,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+385,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+386,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+387,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+388,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+389,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+390,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0.o_data_min))),2);
        bufp->chgCData(oldp+391,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_max))),2);
        bufp->chgBit(oldp+392,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.__PVT__w_compare));
        bufp->chgBit(oldp+393,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.__PVT__COMP_UNT__DOT__w_max_0_0));
        bufp->chgBit(oldp+394,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                       >> 4U))))));
        bufp->chgBit(oldp+395,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                       >> 2U))))));
        bufp->chgBit(oldp+396,((1U & (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                           >> 1U)) 
                                       & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                          >> 1U)) | 
                                      ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                                >> 1U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                               >> 1U)) 
                                           | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                       & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max)) 
                                          & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min)))))));
        bufp->chgBit(oldp+397,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.__PVT__COMP_UNT__DOT__w_min_0_0));
        bufp->chgBit(oldp+398,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                       >> 4U))))));
        bufp->chgBit(oldp+399,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                       >> 2U))))));
        bufp->chgBit(oldp+400,((1U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                                  >> 1U)) 
                                              & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                 >> 1U)) 
                                             | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                         & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min)) 
                                            & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max)))))));
        bufp->chgBit(oldp+401,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.__PVT__COMP_UNT__DOT__w_min_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                               >> 4U))))))));
        bufp->chgBit(oldp+402,((1U & (((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                       | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                          & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                 >> 2U)) 
                                             & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                                >> 2U)))) 
                                      | ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                             | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                      >> 2U))))) 
                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                            | ((~ (
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                                      >> 1U)) 
                                                    & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                                       >> 1U)) 
                                                   | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                               & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min)) 
                                                  & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max)))))))));
        bufp->chgBit(oldp+403,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.__PVT__COMP_UNT__DOT__w_max_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                               >> 4U))))))));
        bufp->chgCData(oldp+404,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+405,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+406,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+407,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+408,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+409,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+410,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1.o_data_min))),2);
        bufp->chgCData(oldp+411,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_max))),2);
        bufp->chgBit(oldp+412,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.__PVT__w_compare));
        bufp->chgBit(oldp+413,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.__PVT__COMP_UNT__DOT__w_max_0_0));
        bufp->chgBit(oldp+414,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                       >> 4U))))));
        bufp->chgBit(oldp+415,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                       >> 2U))))));
        bufp->chgBit(oldp+416,((1U & (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                           >> 1U)) 
                                       & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                          >> 1U)) | 
                                      ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                                >> 1U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                               >> 1U)) 
                                           | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                       & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max)) 
                                          & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min)))))));
        bufp->chgBit(oldp+417,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.__PVT__COMP_UNT__DOT__w_min_0_0));
        bufp->chgBit(oldp+418,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                       >> 4U))))));
        bufp->chgBit(oldp+419,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                       >> 2U))))));
        bufp->chgBit(oldp+420,((1U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                                  >> 1U)) 
                                              & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                                 >> 1U)) 
                                             | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                         & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min)) 
                                            & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max)))))));
        bufp->chgBit(oldp+421,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.__PVT__COMP_UNT__DOT__w_min_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                               >> 4U))))))));
        bufp->chgBit(oldp+422,((1U & (((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                       | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                          & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                                 >> 2U)) 
                                             & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                                >> 2U)))) 
                                      | ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                             | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                                      >> 2U))))) 
                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                            | ((~ (
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                                      >> 1U)) 
                                                    & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                                       >> 1U)) 
                                                   | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                               & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min)) 
                                                  & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max)))))))));
        bufp->chgBit(oldp+423,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.__PVT__COMP_UNT__DOT__w_max_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                               >> 4U))))))));
        bufp->chgCData(oldp+424,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+425,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+426,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+427,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+428,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+429,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+430,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2.o_data_min))),2);
        bufp->chgCData(oldp+431,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3.o_data_max))),2);
        bufp->chgBit(oldp+432,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.__PVT__w_compare));
        bufp->chgBit(oldp+433,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.__PVT__COMP_UNT__DOT__w_max_0_0));
        bufp->chgBit(oldp+434,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                       >> 4U))))));
        bufp->chgBit(oldp+435,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                       >> 2U))))));
        bufp->chgBit(oldp+436,((1U & (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                           >> 1U)) 
                                       & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                          >> 1U)) | 
                                      ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                >> 1U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                               >> 1U)) 
                                           | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                       & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max)) 
                                          & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min)))))));
        bufp->chgBit(oldp+437,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.__PVT__COMP_UNT__DOT__w_min_0_0));
        bufp->chgBit(oldp+438,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                       >> 4U))))));
        bufp->chgBit(oldp+439,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                       >> 2U))))));
        bufp->chgBit(oldp+440,((1U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                  >> 1U)) 
                                              & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                 >> 1U)) 
                                             | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                         & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min)) 
                                            & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max)))))));
        bufp->chgBit(oldp+441,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.__PVT__COMP_UNT__DOT__w_min_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                               >> 4U))))))));
        bufp->chgBit(oldp+442,((1U & (((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                       | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                          & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                 >> 2U)) 
                                             & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                >> 2U)))) 
                                      | ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                             | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                      >> 2U))))) 
                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                            | ((~ (
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                      >> 1U)) 
                                                    & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                                       >> 1U)) 
                                                   | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                               & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min)) 
                                                  & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max)))))))));
        bufp->chgBit(oldp+443,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.__PVT__COMP_UNT__DOT__w_max_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                               >> 4U))))))));
        bufp->chgCData(oldp+444,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+445,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+446,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+447,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+448,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+449,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+450,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0.o_data_min))),2);
        bufp->chgCData(oldp+451,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_max))),2);
        bufp->chgBit(oldp+452,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.__PVT__w_compare));
        bufp->chgBit(oldp+453,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.__PVT__COMP_UNT__DOT__w_max_0_0));
        bufp->chgBit(oldp+454,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                       >> 4U))))));
        bufp->chgBit(oldp+455,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                       >> 2U))))));
        bufp->chgBit(oldp+456,((1U & (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                           >> 1U)) 
                                       & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                          >> 1U)) | 
                                      ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                                >> 1U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                               >> 1U)) 
                                           | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                       & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max)) 
                                          & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min)))))));
        bufp->chgBit(oldp+457,(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.__PVT__COMP_UNT__DOT__w_min_0_0));
        bufp->chgBit(oldp+458,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                          >> 4U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                       >> 4U))))));
        bufp->chgBit(oldp+459,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                   & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                          >> 2U)) & 
                                      ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                       >> 2U))))));
        bufp->chgBit(oldp+460,((1U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((~ (((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                                  >> 1U)) 
                                              & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                 >> 1U)) 
                                             | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                         & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min)) 
                                            & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max)))))));
        bufp->chgBit(oldp+461,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.__PVT__COMP_UNT__DOT__w_min_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.__PVT__COMP_UNT__DOT__w_max_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                               >> 4U))))))));
        bufp->chgBit(oldp+462,((1U & (((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                       | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                          & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                 >> 2U)) 
                                             & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                                >> 2U)))) 
                                      | ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                             | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.COMP_UNT__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                                     >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                      >> 2U))))) 
                                         & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                            | ((~ (
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                                      >> 1U)) 
                                                    & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                                       >> 1U)) 
                                                   | (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.COMP_UNT__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                               & ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min)) 
                                                  & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max)))))))));
        bufp->chgBit(oldp+463,(((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.__PVT__COMP_UNT__DOT__w_max_0_0) 
                                | ((~ (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.__PVT__COMP_UNT__DOT__w_min_0_0)) 
                                   & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                      | ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1.COMP_UNT__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                         & ((~ ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                                >> 4U)) 
                                            & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                               >> 4U))))))));
        bufp->chgCData(oldp+464,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+465,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+466,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+467,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+468,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+469,((3U & ((IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+470,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1.o_data_min))),2);
        bufp->chgCData(oldp+471,((3U & (IData)(vlSymsp->TOP__tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2.o_data_max))),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+472,(vlSelf->tb_Question6__DOT__o_sorted[0]),8);
        bufp->chgCData(oldp+473,(vlSelf->tb_Question6__DOT__o_sorted[1]),8);
        bufp->chgCData(oldp+474,(vlSelf->tb_Question6__DOT__o_sorted[2]),8);
        bufp->chgCData(oldp+475,(vlSelf->tb_Question6__DOT__o_sorted[3]),8);
        bufp->chgCData(oldp+476,(vlSelf->tb_Question6__DOT__o_sorted[4]),8);
        bufp->chgCData(oldp+477,(vlSelf->tb_Question6__DOT__o_sorted[5]),8);
        bufp->chgCData(oldp+478,(vlSelf->tb_Question6__DOT__o_sorted[6]),8);
        bufp->chgCData(oldp+479,(vlSelf->tb_Question6__DOT__o_sorted[7]),8);
    }
    bufp->chgCData(oldp+480,(vlSelf->i_data_a),8);
    bufp->chgCData(oldp+481,(vlSelf->i_data_b),8);
    bufp->chgBit(oldp+482,(vlSelf->o_less));
    bufp->chgBit(oldp+483,((1U & (((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->i_data_a))) 
                                            & ((IData)(vlSelf->i_data_b) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->i_data_a) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->i_data_b))))) 
                                      | ((~ ((IData)(vlSelf->i_data_a) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->i_data_b) 
                                            >> 3U)))) 
                                  | ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (((IData)(vlSelf->i_data_a) 
                                                      ^ (IData)(vlSelf->i_data_b)) 
                                                     >> 2U))))) 
                                     & ((IData)(((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->i_data_a))) 
                                                 & (IData)(vlSelf->i_data_b))) 
                                        | (((~ (IData)(vlSelf->i_data_a)) 
                                            & (((IData)(vlSelf->i_data_b) 
                                                >> 1U) 
                                               & (IData)(vlSelf->i_data_b))) 
                                           | ((~ ((IData)(vlSelf->i_data_a) 
                                                  >> 1U)) 
                                              & ((IData)(vlSelf->i_data_b) 
                                                 >> 1U)))))))));
    bufp->chgBit(oldp+484,((1U & ((~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->i_data_a) 
                                                 ^ (IData)(vlSelf->i_data_b)) 
                                                >> 2U))))) 
                                  & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(vlSelf->i_data_a) 
                                                    ^ (IData)(vlSelf->i_data_b))))))))));
    bufp->chgBit(oldp+485,((1U & (((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->i_data_a))) 
                                            & ((IData)(vlSelf->i_data_b) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->i_data_a) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->i_data_b))))) 
                                      | ((~ ((IData)(vlSelf->i_data_a) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->i_data_b) 
                                            >> 7U)))) 
                                  | ((IData)(vlSelf->COMP_less__DOT__u_high__DOT__w_equal_high) 
                                     & ((IData)(((0U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->i_data_a))) 
                                                 & ((IData)(vlSelf->i_data_b) 
                                                    >> 4U))) 
                                        | (((~ ((IData)(vlSelf->i_data_a) 
                                                >> 4U)) 
                                            & (IData)(
                                                      (0x30U 
                                                       == 
                                                       (0x30U 
                                                        & (IData)(vlSelf->i_data_b))))) 
                                           | ((~ ((IData)(vlSelf->i_data_a) 
                                                  >> 5U)) 
                                              & ((IData)(vlSelf->i_data_b) 
                                                 >> 5U)))))))));
    bufp->chgBit(oldp+486,(((IData)(vlSelf->COMP_less__DOT__u_high__DOT__w_equal_high) 
                            & (~ (IData)((0U != (3U 
                                                 & (((IData)(vlSelf->i_data_a) 
                                                     ^ (IData)(vlSelf->i_data_b)) 
                                                    >> 4U))))))));
    bufp->chgCData(oldp+487,((0xfU & ((IData)(vlSelf->i_data_a) 
                                      >> 4U))),4);
    bufp->chgCData(oldp+488,((0xfU & ((IData)(vlSelf->i_data_b) 
                                      >> 4U))),4);
    bufp->chgBit(oldp+489,((1U & ((IData)(((0U == (0x30U 
                                                   & (IData)(vlSelf->i_data_a))) 
                                           & ((IData)(vlSelf->i_data_b) 
                                              >> 4U))) 
                                  | (((~ ((IData)(vlSelf->i_data_a) 
                                          >> 4U)) & (IData)(
                                                            (0x30U 
                                                             == 
                                                             (0x30U 
                                                              & (IData)(vlSelf->i_data_b))))) 
                                     | ((~ ((IData)(vlSelf->i_data_a) 
                                            >> 5U)) 
                                        & ((IData)(vlSelf->i_data_b) 
                                           >> 5U)))))));
    bufp->chgBit(oldp+490,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              (((IData)(vlSelf->i_data_a) 
                                                ^ (IData)(vlSelf->i_data_b)) 
                                               >> 4U))))))));
    bufp->chgBit(oldp+491,((1U & ((IData)(((0U == (0xc0U 
                                                   & (IData)(vlSelf->i_data_a))) 
                                           & ((IData)(vlSelf->i_data_b) 
                                              >> 6U))) 
                                  | (((~ ((IData)(vlSelf->i_data_a) 
                                          >> 6U)) & (IData)(
                                                            (0xc0U 
                                                             == 
                                                             (0xc0U 
                                                              & (IData)(vlSelf->i_data_b))))) 
                                     | ((~ ((IData)(vlSelf->i_data_a) 
                                            >> 7U)) 
                                        & ((IData)(vlSelf->i_data_b) 
                                           >> 7U)))))));
    bufp->chgBit(oldp+492,(vlSelf->COMP_less__DOT__u_high__DOT__w_equal_high));
    bufp->chgCData(oldp+493,((3U & ((IData)(vlSelf->i_data_a) 
                                    >> 6U))),2);
    bufp->chgCData(oldp+494,((3U & ((IData)(vlSelf->i_data_b) 
                                    >> 6U))),2);
    bufp->chgCData(oldp+495,((3U & ((IData)(vlSelf->i_data_a) 
                                    >> 4U))),2);
    bufp->chgCData(oldp+496,((3U & ((IData)(vlSelf->i_data_b) 
                                    >> 4U))),2);
    bufp->chgCData(oldp+497,((0xfU & (IData)(vlSelf->i_data_a))),4);
    bufp->chgCData(oldp+498,((0xfU & (IData)(vlSelf->i_data_b))),4);
    bufp->chgBit(oldp+499,((1U & ((IData)(((0U == (3U 
                                                   & (IData)(vlSelf->i_data_a))) 
                                           & (IData)(vlSelf->i_data_b))) 
                                  | (((~ (IData)(vlSelf->i_data_a)) 
                                      & (((IData)(vlSelf->i_data_b) 
                                          >> 1U) & (IData)(vlSelf->i_data_b))) 
                                     | ((~ ((IData)(vlSelf->i_data_a) 
                                            >> 1U)) 
                                        & ((IData)(vlSelf->i_data_b) 
                                           >> 1U)))))));
    bufp->chgBit(oldp+500,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((IData)(vlSelf->i_data_a) 
                                               ^ (IData)(vlSelf->i_data_b)))))))));
    bufp->chgBit(oldp+501,((1U & ((IData)(((0U == (0xcU 
                                                   & (IData)(vlSelf->i_data_a))) 
                                           & ((IData)(vlSelf->i_data_b) 
                                              >> 2U))) 
                                  | (((~ ((IData)(vlSelf->i_data_a) 
                                          >> 2U)) & (IData)(
                                                            (0xcU 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->i_data_b))))) 
                                     | ((~ ((IData)(vlSelf->i_data_a) 
                                            >> 3U)) 
                                        & ((IData)(vlSelf->i_data_b) 
                                           >> 3U)))))));
    bufp->chgBit(oldp+502,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              (((IData)(vlSelf->i_data_a) 
                                                ^ (IData)(vlSelf->i_data_b)) 
                                               >> 2U))))))));
    bufp->chgCData(oldp+503,((3U & ((IData)(vlSelf->i_data_a) 
                                    >> 2U))),2);
    bufp->chgCData(oldp+504,((3U & ((IData)(vlSelf->i_data_b) 
                                    >> 2U))),2);
    bufp->chgCData(oldp+505,((3U & (IData)(vlSelf->i_data_a))),2);
    bufp->chgCData(oldp+506,((3U & (IData)(vlSelf->i_data_b))),2);
    bufp->chgBit(oldp+507,(vlSelf->tb_Question6__DOT__i_clk));
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
